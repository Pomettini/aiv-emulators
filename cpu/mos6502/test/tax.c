#include "test.h"

static int test_tax()
{
    unsigned char rom = 0xAA;

    mos6502_t cpu;
    mos6502_init(&cpu);
    mos6502_add_test_full_mapping(&cpu, rom);


    assert_is_equal(ticks, 2);
    assert_is_equal(cpu.x, cpu.a);

    return 0;
}