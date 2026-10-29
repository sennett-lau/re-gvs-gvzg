import importlib.util
from pathlib import Path
import shutil
import subprocess
import tempfile
import unittest

HERE = Path(__file__).resolve().parent
ROOT = HERE.parents[2]
spec = importlib.util.spec_from_file_location('exec_discovery', HERE / 'discovery_prepare.py')
discovery = importlib.util.module_from_spec(spec)
spec.loader.exec_module(discovery)


def fixture(directory):
    iop = Path(directory) / 'runtime/src/iop'; iop.mkdir(parents=True)
    for name in ['kernel.cpp', 'sif.cpp']:
        shutil.copy2(ROOT / 'vendor/ps2-web-recomp/runtime/src/iop' / name, iop / name)
    return iop


class DiscoveryTest(unittest.TestCase):
    def test_real_prepared_handler_valid_missing_reset_and_invalid_spans(self):
        with tempfile.TemporaryDirectory() as temp:
            tree = Path(temp); iop = fixture(tree)
            manifest = discovery.prepare(tree, ROOT / 'poc/original-online/module_names.hpp')
            self.assertEqual(manifest['replaced_sources'], ['runtime/src/iop/kernel.cpp', 'runtime/src/iop/sif.cpp'])
            kernel = (iop / 'kernel.cpp').read_text()
            self.assertIn('::original_online::irx_module_name(data, name)', kernel)
            self.assertIn('free(m.base);\n            g_modules.erase(id);', kernel)
            self.assertIn('    g_modules.clear();', kernel)
            source = (iop / 'sif.cpp').read_text()
            begin = source.index('        if (method == 0x09) {')
            end = source.index('\n        }', begin) + len('\n        }')
            body = source[begin:end]
            # Compile the actual emitted SIF handler, including the namespace
            # collision introduced by the optional native transport adapter.
            program = r'''
#include "module_names.hpp"
#include <array>
#include <cassert>
#include <cstring>
#include <map>
namespace ps2 {
constexpr unsigned kRamSize=1024;
std::array<std::uint8_t,kRamSize> memory{};
std::uint8_t* g_ram=memory.data();
template<class T> void store(std::uint8_t* p,T value){std::memcpy(p,&value,sizeof value);}
unsigned writes=0;
void watch_span(unsigned p,unsigned n,const char*){assert(p==800&&n==4);++writes;}
namespace iop {
namespace original_online {} // Deliberately hides the global helper namespace.
namespace kernel {
struct Module {std::string name;};
std::map<int,Module> registry;
const auto& modules(){return registry;}
}
namespace sif {
bool call(unsigned method,unsigned args,unsigned send_size,unsigned ret,unsigned recv_size){
BODY
return false;
}
}
}
}
int main(){
 using namespace ps2;
 std::memcpy(g_ram+8,"dev9",5);
 iop::kernel::registry.emplace(7,iop::kernel::Module{"dev9"});
 auto reply=[](){std::int32_t value;std::memcpy(&value,g_ram+800,4);return value;};
 auto before=memory;
 assert(iop::sif::call(9,0,512,800,4)&&reply()==7&&writes==1);
 for(unsigned i=0;i<kRamSize;++i)if(i<800||i>=804)assert(memory[i]==before[i]);
 std::memcpy(g_ram+8,"nope",5);
 assert(iop::sif::call(9,0,512,800,4)&&reply()==-202);
 std::memcpy(g_ram+8,"dev9",5);iop::kernel::registry.clear();
 assert(iop::sif::call(9,0,512,800,4)&&reply()==-202);
 for(const auto limits:{std::array<unsigned,4>{0,8,800,4},{1020,512,800,4},{0,512,1022,4},{0,512,800,3}}){
  before=memory;bool rejected=false;
  try{iop::sif::call(9,limits[0],limits[1],limits[2],limits[3]);}catch(const std::runtime_error&){rejected=true;}
  assert(rejected&&memory==before);
 }
 std::memset(g_ram+8,'X',504);before=memory;bool rejected=false;
 try{iop::sif::call(9,0,512,800,4);}catch(const std::runtime_error&){rejected=true;}
 assert(rejected&&memory==before);
 assert(!iop::sif::call(8,0,512,800,4));
}
'''.replace('BODY', body)
            (tree / 'test.cpp').write_text(program)
            subprocess.run(['c++', '-std=c++20', '-Wall', '-Wextra', '-Werror', '-I'+str(iop), str(tree/'test.cpp'), '-o', str(tree/'test')], check=True)
            subprocess.run([str(tree/'test')], check=True)

    def test_source_drift_and_reapplication_are_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            tree = Path(temp); iop = fixture(tree); helper = ROOT / 'poc/original-online/module_names.hpp'
            discovery.prepare(tree, helper)
            with self.assertRaisesRegex(ValueError, 'already prepared'): discovery.prepare(tree, helper)
            (iop/'module_names.hpp').unlink()
            with self.assertRaisesRegex(ValueError, 'anchor changed'): discovery.prepare(tree, helper)


if __name__ == '__main__': unittest.main()
