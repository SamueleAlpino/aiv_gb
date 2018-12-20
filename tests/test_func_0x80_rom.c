#include <aiv_unit_test.h>
#include <aiv_gb.h>

TEST(func_0x80_rom)
{
    //initialize gameboy
    aiv_gameboy gb;
    aiv_gb_init(&gb);

    ASSERT_THAT(aiv_gb_load_cartridge(&gb, "tests/roms/test_0x80_rom.gb") == 0);

    int ret = 0;
    while (ret >= 0)
    {
        ret = aiv_gb_tick(&gb);
    }
    //o 14
    ASSERT_THAT(gb.a == 13);
    ASSERT_THAT(aiv_gb_get_flag(&gb,CARRY));
    ASSERT_THAT(gb.ticks == 124);

}

void aiv_gb_tests_func_0x80_rom()
{
    RUN_TEST(func_0x80_rom);
}