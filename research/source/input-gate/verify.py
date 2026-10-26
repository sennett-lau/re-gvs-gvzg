#!/usr/bin/env python3
"""Portable phase sweep of exported original edge/pause instructions.

This is a bounded instruction-level test, not the whole emulator or an IOP
timing proof. It models the verified call order around the new polling gate.
"""
from pathlib import Path
import hashlib
import json
import struct
import time

HERE = Path(__file__).resolve().parent
FIXTURE = json.loads((HERE / "instructions.json").read_text())
EXPECTED = FIXTURE["elf_sha256"]

def code(address, size):
    for block in FIXTURE["blocks"]:
        base = int(block["address"], 16)
        data = bytes.fromhex(block["bytes_le"])
        if base <= address and address+size <= base+len(data):
            return data[address-base:address-base+size]
    raise AssertionError(hex(address))

instructions = {}
for begin, end in ((0x227960, 0x2279F0), (0x2280E0, 0x2281B0)):
    for address in range(begin, end, 4):
        instructions[address] = struct.unpack("<I", code(address, 4))[0]

class Memory(dict):
    def read(self, address, size):
        return sum(self.get((address+i)&0xffffffff, 0) << (8*i) for i in range(size))
    def write(self, address, value, size):
        for i in range(size): self[(address+i)&0xffffffff] = (value >> (8*i)) & 255

def signed(value, bits):
    value &= (1 << bits)-1
    return value-(1 << bits) if value & (1 << (bits-1)) else value

def execute(memory, entry, a0, a1):
    """Only the opcodes used by the two bounded, call-free original functions."""
    registers = [0]*32
    registers[4], registers[5], registers[28], registers[31] = a0, a1, 0x6DD770, 0xFFFFFFFC
    pc, delayed, count = entry, None, 0
    while pc != 0xFFFFFFFC:
        assert pc in instructions, hex(pc)
        count += 1
        assert count < 128
        word = instructions[pc]
        op, rs, rt, rd = word >> 26, (word >> 21)&31, (word >> 16)&31, (word >> 11)&31
        imm = signed(word, 16)
        following, delayed = delayed, None
        address = (registers[rs]+imm)&0xffffffff
        if op == 0:
            function = word&63
            if function == 0: registers[rd] = signed(registers[rt] << ((word >> 6)&31), 32)
            elif function == 4: registers[rd] = signed(registers[rt] << (registers[rs]&31), 32)
            elif function == 8: delayed = registers[rs]&0xffffffff
            elif function == 0x21: registers[rd] = signed(registers[rs]+registers[rt], 32)
            elif function == 0x23: registers[rd] = signed(registers[rs]-registers[rt], 32)
            elif function == 0x24: registers[rd] = registers[rs]&registers[rt]
            elif function == 0x25: registers[rd] = registers[rs]|registers[rt]
            elif function == 0x27: registers[rd] = ~(registers[rs]|registers[rt])
            else: raise AssertionError((hex(pc), op, function))
        elif op in (4, 5):
            equal = registers[rs] == registers[rt]
            delayed = pc+4+imm*4 if equal == (op == 4) else pc+8
        elif op == 9: registers[rt] = signed(registers[rs]+imm, 32)
        elif op == 10: registers[rt] = int(signed(registers[rs], 64) < imm)
        elif op == 12: registers[rt] = registers[rs] & (word&0xffff)
        elif op == 15: registers[rt] = signed((word&0xffff) << 16, 32)
        elif op == 32: registers[rt] = signed(memory.read(address, 1), 8)
        elif op == 35: registers[rt] = signed(memory.read(address, 4), 32)
        elif op == 37: registers[rt] = memory.read(address, 2)
        elif op == 40: memory.write(address, registers[rt], 1)
        elif op == 41: memory.write(address, registers[rt], 2)
        else: raise AssertionError((hex(pc), op))
        registers[0] = 0
        pc = following if following is not None else pc+4
    return count

CLOCK = 294912000
def phase_schedule(rates):
    # Independent integer formulation of the retained AdaptivePhase schedule:
    # previous scheduled period is consumed before the next requested rate.
    cycles, previous_period, previous_tick = 0, CLOCK//60, None
    result = []
    for index, rate in enumerate(rates):
        if index: cycles += previous_period
        tick = cycles*60//CLOCK
        result.append({"frame": index, "tick": tick, "extra": tick == previous_tick,
                       "cycles": cycles, "hz": rate})
        previous_period, previous_tick = CLOCK//rate, tick
    return result

def episode(schedule, arrival, gated, port=0, suppress=False):
    memory = Memory()
    memory.write(0x6D7A8C, 0x839110, 4)
    memory.write(0x839110+0x37, int(suppress), 1)
    memory.write(0x7ADD91, 3, 1)
    record = 0x6F2580 + port*16
    first_tick = schedule[arrival]["tick"]
    observed, expected, previous_canonical = [], [], 0
    reads = []
    for row in schedule[max(0, arrival-1):]:
        delta = row["tick"]-first_tick
        if delta >= 40: break
        # Two ordinary0.2-second presses, separated by0.2-second release.
        held = row["frame"] >= arrival and (0 <= delta < 12 or 24 <= delta < 36)
        buttons = 0x8000 if held else 0  # Game-mapped Start, not raw pad bit3.
        if not gated or not row["extra"]:
            execute(memory, 0x227960, record, buttons)
        if not row["extra"]:
            if held and not previous_canonical and not suppress: expected.append(row["tick"])
            previous_canonical = held
            memory.write(0x7ADD90+6+port, 0, 1)
            execute(memory, 0x2280E0, 0x7ADD90, port)
            request = memory.read(0x7ADD90+6+port, 1)
            if request == 2: observed.append(row["tick"])
            reads.append((row["tick"], memory.read(record+4, 2), request))
    return {"observed": observed, "expected": expected, "reads": reads}

def verify_export():
    manifest = json.loads((HERE / "provenance.json").read_text())
    for name, expected in manifest["export_sha256"].items():
        assert hashlib.sha256((HERE / name).read_bytes()).hexdigest() == expected, name

def main():
    start = time.monotonic()
    verify_export()
    candidate = (HERE/"candidate.cpp").read_text()
    baseline = (HERE/"baseline.cpp").read_text()
    needle = "L_00226D30:\n"
    guard = "    if (research_render_only()) { c.pc = c.r[31].w[0]; return; }\n"
    assert candidate.replace(needle+guard, needle) == baseline
    assert candidate.count(needle+guard) == 1
    assert code(0x224B60, 4).hex() == "4c9b080c"  # jal226D30 precedes oldcopygate
    assert code(0x22797C, 4).hex() == "040083a4"  # risingedge store record+4
    assert code(0x22815C, 4).hex() == "00806330"  # pausechecks game Start bit8000

    # Sanity checks exercise the original repeat behavior, not a replacement formula.
    memory = Memory()
    execute(memory, 0x227960, 0x6F2580, 0x8000)
    assert memory.read(0x6F2584, 2) == 0x8000
    for _ in range(31): execute(memory, 0x227960, 0x6F2580, 0x8000)
    assert memory.read(0x6F2584, 2) == 0
    assert memory.read(0x6F258C, 2) == 0x8000  # repeatdoesnotrestoreStartedge
    execute(memory, 0x227960, 0x6F2580, 0)
    assert memory.read(0x6F2588, 2) == 0x8000
    execute(memory, 0x227960, 0x6F2580, 0x8000)
    assert memory.read(0x6F2584, 2) == 0x8000

    summaries, examples = [], []
    suites = {f"fixed{hz}": [hz]*(hz*4) for hz in (60, 72, 80, 90, 100, 110, 120)}
    suites["menu60-battle120-pause60-resume120"] = [60]*37+[120]*111+[60]*29+[120]*90+[60]*100
    suites["60-80-120-72-60-carried-phase"] = [60]*37+[80]*58+[120]*60+[72]*63+[60]*130
    total, candidate_failures, baseline_failures = 0, 0, 0
    for name, rates in suites.items():
        schedule = phase_schedule(rates)
        arrivals = [i for i in range(1, len(schedule)) if schedule[-1]["tick"]-schedule[i]["tick"] >= 40]
        if name.startswith("fixed"): arrivals = arrivals[:int(name[5:])]
        lost, extras = 0, 0
        for arrival in arrivals:
            old = episode(schedule, arrival, False)
            new = episode(schedule, arrival, True)
            total += 1
            extras += int(schedule[arrival]["extra"])
            if old["observed"] != old["expected"]:
                lost += 1
                if len(examples) < 3 and name == "fixed120":
                    examples.append({"suite": name, "arrival": schedule[arrival],
                                     "old": old, "candidate": new})
            if new["observed"] != new["expected"]: candidate_failures += 1
        baseline_failures += lost
        summaries.append({"suite": name, "arrival_phases": len(arrivals),
                          "extra_arrivals": extras, "old_failures": lost,
                          "candidate_failures": 0})
    assert candidate_failures == 0
    assert total == 1265
    assert baseline_failures == 369
    # The secondport and the game's explicit pause-disable flag retain behavior.
    for hz in (60, 80, 120):
        schedule = phase_schedule([hz]*(hz*2))
        for port in (0, 1):
            for arrival in (1, 2, 3, 4):
                new = episode(schedule, arrival, True, port)
                assert new["observed"] == new["expected"]
                disabled = episode(schedule, arrival, True, port, True)
                assert disabled["observed"] == []
    report = {"elf_sha256": EXPECTED, "candidate_excerpt_sha256": hashlib.sha256(candidate.encode()).hexdigest(),
              "executed_original_functions": ["0x227960", "0x2280E0"],
              "phase_cases": total, "old_failed_cases": baseline_failures,
              "candidate_failed_cases": candidate_failures, "suites": summaries,
              "old_extra_edge_loss_examples": examples, "wall_seconds": time.monotonic()-start,
              "limitation": "Instruction-level edge/pause-request regression. Host-to-IOP arrival and full browser pause/menu transitions still require real runtime validation; no GPU/game run performed."}
    print(json.dumps({key: value for key, value in report.items() if key not in
        ("old_extra_edge_loss_examples", "suites")}, indent=2))

if __name__ == "__main__": main()
