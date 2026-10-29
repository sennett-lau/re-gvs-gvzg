#include "sha256.hpp"
#include <array>
#include <cstdio>
#include <vector>
namespace original_online {
std::string sha256(const std::uint8_t* input,std::size_t size) {
    constexpr std::uint32_t k[]={
      0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,
      0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,
      0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,
      0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,
      0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,
      0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,
      0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,
      0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2};
    std::array<std::uint32_t,8> hash={0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19};
    std::vector<std::uint8_t> data(input,input+size);data.push_back(128);
    while(data.size()%64!=56)data.push_back(0);
    for(int shift=56;shift>=0;shift-=8)data.push_back((static_cast<std::uint64_t>(size)*8)>>shift);
    const auto rotate=[](std::uint32_t n,unsigned count){return (n>>count)|(n<<(32-count));};
    for(std::size_t at=0;at<data.size();at+=64){
        std::uint32_t w[64]{};
        for(int i=0;i<16;++i)for(int b=0;b<4;++b)w[i]=(w[i]<<8)|data[at+4*i+b];
        for(int i=16;i<64;++i){auto a=w[i-15],b=w[i-2];w[i]=w[i-16]+(rotate(a,7)^rotate(a,18)^(a>>3))+w[i-7]+(rotate(b,17)^rotate(b,19)^(b>>10));}
        auto v=hash;
        for(int i=0;i<64;++i){
            const auto t1=v[7]+(rotate(v[4],6)^rotate(v[4],11)^rotate(v[4],25))+((v[4]&v[5])^(~v[4]&v[6]))+k[i]+w[i];
            const auto t2=(rotate(v[0],2)^rotate(v[0],13)^rotate(v[0],22))+((v[0]&v[1])^(v[0]&v[2])^(v[1]&v[2]));
            for(int j=7;j>0;--j)v[j]=v[j-1];v[4]+=t1;v[0]=t1+t2;
        }
        for(int i=0;i<8;++i)hash[i]+=v[i];
    }
    char output[65];for(int i=0;i<8;++i)std::snprintf(output+i*8,9,"%08x",hash[i]);return output;
}
}
