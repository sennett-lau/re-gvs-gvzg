"""Game-specific generated-code hooks shared by native and web experiments."""

def write_render_units(generated, build):
    unit = (generated / 'unit_0044.cpp').read_text()
    start, end = unit.index('L_002124F0:'), unit.index('L_00212560:')
    part = unit[start:end]
    old = 'const bool t = c.r[2].d[0] != 0ull;'
    assert part.count(old) == 1
    part = part.replace(old, 'const bool t = c.r[2].d[0] != 0ull || research_render_only();')
    unit = unit[:start] + part + unit[end:]
    unit = '#include "render_hooks.hpp"\n' + unit
    for label, hook in [('L_002120D8:', 'research_mode_complete();'),
                        ('L_00212538:', 'research_camera_begin();'),
                        ('L_002124D8:', 'research_render_complete();')]:
        assert unit.count(label) == 1
        unit = unit.replace(label, label + '\n    ' + hook)
    (build / 'unit_0044.cpp').write_text(unit)
    unit = (generated / 'unit_0039.cpp').read_text()
    assert unit.count('L_001E4370:') == 1
    unit = '#include "render_hooks.hpp"\n' + unit.replace('L_001E4370:', 'L_001E4370:\n    research_model_copy(c);')
    start, end = unit.index('L_001E46C0:'), unit.index('L_001E47F0:')
    part = unit[start:end]
    for offset in (0x940, 0xA40):
        old = 'set32(c.r[4], c.r[17].w[0] + %du);' % offset
        assert part.count(old) == 1
        part = part.replace(old, 'set32(c.r[4], research_attachment_source(c.r[17].w[0], %du));' % offset)
    unit = unit[:start] + part + unit[end:]
    (build / 'unit_0039.cpp').write_text(unit)
    unit = (generated / 'unit_0049.cpp').read_text()
    assert unit.count('L_00224B68:') == 1
    unit = unit.replace('L_00224B68:', 'L_00224B68:\n    if (research_render_only()) goto L_00224BC0;')
    start, end = unit.index('L_00224B38:'), unit.index('L_00224B68:')
    part = unit[start:end]
    for expression in ['st32((c.r[16].w[0] + 832u), c.r[3].w[0]);', 'st32((c.r[28].w[0] - 23920u), c.r[3].w[0]);']:
        assert part.count(expression) == 1
        part = part.replace(expression, 'if (!research_render_only()) ' + expression)
    unit = unit[:start] + part + unit[end:]
    (build / 'unit_0049.cpp').write_text('#include "render_hooks.hpp"\n' + unit)
    unit = (generated / 'unit_004D.cpp').read_text()
    assert unit.count('L_002357E0:') == 1
    unit = unit.replace('L_002357E0:', 'L_002357E0:\n    if (research_render_only()) { c.pc = c.r[31].w[0]; return; }')
    (build / 'unit_004D.cpp').write_text('#include "render_hooks.hpp"\n' + unit)
