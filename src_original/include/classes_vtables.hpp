#pragma once
/**
 * Dragon Ball Z: Buu's Fury — Reconstructed C++ Classes & Virtual Method Tables (571 VTables)
 * Extracted from ROM 0x080491F0..0x080554BF (tools/research/CLASS_TABLES.csv).
 */
#include "buusfury_types.hpp"

// VTable at 0x080491F0 (7 virtual methods)
// Installed by: loc_08006648@0800664A;Object_Destroy15@08025F0A;sub_08033606@0803361E;sub_08048EA8@08048EAC;sub_08048EA8@08048EB0;sub_08
struct Class_080491F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080508C4 (sub_080508C4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FDDC (sub_0804FDDC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FDBC (0x0804FDBC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
};

// VTable at 0x0804920C (11 virtual methods)
// Installed by: sub_080052C4@080052F0;loc_08006618@08006620;sub_080141A0@080141A4;sub_0801D0C4@0801D0C8;sub_0801FD60@0801FD86;sub_0801FD
struct Class_0804920C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08006618 (sub_08006618)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08050238 (0x08050238)
    u32 (*slot_09_0x24)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x08049238 (11 virtual methods)
// Installed by: sub_080508D6@080508DA;sub_08050B10@08050B14;loc_08051842@08051848;loc_08051BCA@08051BD0
struct Class_08049238_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080508D8 (0x080508D8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0805022C (0x0805022C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F940 (0x0804F940)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_04_0x10)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_05_0x14)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_06_0x18)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_08_0x20)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_09_0x24)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_10_0x28)(void* self); // -> 0x08046CAC (sub_08046CAC)
};

// VTable at 0x08049264 (14 virtual methods)
// Installed by: dat_08014AFE@08014B26;sub_08033862@080338A6
struct Class_08049264_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080508E4 (0x080508E4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FC48 (0x0804FC48)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F100 (sub_0804F100)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08035B94 (0x08035B94)
    u32 (*slot_04_0x10)(void* self); // -> 0x080508E8 (0x080508E8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F068 (sub_0804F068)
    u32 (*slot_06_0x18)(void* self); // -> 0x080501D0 (sub_080501D0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FC30 (0x0804FC30)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804F540 (0x0804F540)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FE8C (0x0804FE8C)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801154C (0x0801154C)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE0C (0x0804FE0C)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804E4C8 (0x0804E4C8)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FC3C (sub_0804FC3C)
};

// VTable at 0x0804929C (7 virtual methods)
// Installed by: Object_Destroy7@08013F00;Object_Destroy8@08016254;sub_0805090A@0805090E;sub_080509C6@080509D8;loc_08050E56@08050E5C;sub_
struct Class_0804929C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805090C (0x0805090C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F8FC (0x0804F8FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FEA0 (sub_0804FEA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
    u32 (*slot_06_0x18)(void* self); // -> 0x08021ED2 (0x08021ED2)
};

// VTable at 0x080492B8 (7 virtual methods)
// Installed by: loc_080179FC@08017A00
struct Class_080492B8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050918 (sub_08050918)
    u32 (*slot_01_0x04)(void* self); // -> 0x08017A14 (sub_08017A14)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FDDC (sub_0804FDDC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08017AE6 (sub_08017AE6)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
};

// VTable at 0x080492D4 (6 virtual methods)
// Installed by: sub_08021C0C@08021C10
struct Class_080492D4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805093C (0x0805093C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FCE4 (0x0804FCE4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FD10 (0x0804FD10)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
};

// VTable at 0x080492EC (8 virtual methods)
// Installed by: sub_0801F084@0801F0AA;sub_0801F270@0801F28E;sub_08023FA8@08024066;sub_080242EC@0802431E;sub_0802437A@0802438E;sub_080245
struct Class_080492EC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050950 (sub_08050950)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FD0C (0x0804FD0C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FCE0 (sub_0804FCE0)
};

// VTable at 0x0804930C (5 virtual methods)
// Installed by: sub_08018F90@08018FA8
struct Class_0804930C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_04_0x10)(void* self); // -> 0x08021FCE (0x08021FCE)
};

// VTable at 0x08049320 (6 virtual methods)
// Installed by: sub_08048EBC@08048EC6;loc_08050934@08050940;sub_08050950@08050954;sub_08050964@08050968;sub_08050C14@08050C18;sub_08050C
struct Class_08049320_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050964 (sub_08050964)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FCF8 (0x0804FCF8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FD24 (0x0804FD24)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
};

// VTable at 0x08049338 (7 virtual methods)
// Installed by: loc_080335D4@080335D8;sub_08033606@0803360E
struct Class_08049338_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08033606 (sub_08033606)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803369E (sub_0803369E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0803377A (sub_0803377A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803377C (sub_0803377C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
};

// VTable at 0x08049354 (7 virtual methods)
// Installed by: loc_08004E1C@08004E1E
struct Class_08049354_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050978 (sub_08050978)
    u32 (*slot_01_0x04)(void* self); // -> 0x08004E26 (0x08004E26)
    u32 (*slot_02_0x08)(void* self); // -> 0x08004EDA (sub_08004EDA)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FDDC (sub_0804FDDC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08004EA6 (0x08004EA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
};

// VTable at 0x08049370 (17 virtual methods)
// Installed by: loc_08024A7C@08024A8E
struct Class_08049370_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805098C (sub_0805098C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08024C38 (sub_08024C38)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08024C54 (sub_08024C54)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08024BF2 (0x08024BF2)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804F8C4 (sub_0804F8C4)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804F9A0 (0x0804F9A0)
    u32 (*slot_10_0x28)(void* self); // -> 0x08024C04 (sub_08024C04)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE80 (0x0804FE80)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FE8C (0x0804FE8C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804EEA4 (0x0804EEA4)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804EEA8 (sub_0804EEA8)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804FDD4 (0x0804FDD4)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804FDC8 (0x0804FDC8)
};

// VTable at 0x080493B4 (5 virtual methods)
// Installed by: sub_0803A86C@0803A874
struct Class_080493B4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080509A0 (sub_080509A0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A898 (sub_0803A898)
    u32 (*slot_02_0x08)(void* self); // -> 0x0803AA58 (0x0803AA58)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0803ADC0 (0x0803ADC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F9BC (sub_0804F9BC)
};

// VTable at 0x080493C8 (7 virtual methods)
// Installed by: sub_08048E04@08048E08
struct Class_080493C8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080509B4 (sub_080509B4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F588 (sub_0804F588)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FDDC (sub_0804FDDC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FDBC (0x0804FDBC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
};

// VTable at 0x080493E4 (4 virtual methods)
// Installed by: sub_08048E4C@08048E50;sub_080509C6@080509CA;sub_08050F86@08050F8A;sub_08050F86@08050F96;sub_08051396@080513A8;loc_080515
struct Class_080493E4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080509C8 (0x080509C8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
};

// VTable at 0x080493F4 (7 virtual methods)
// Installed by: sub_08015C80@08015C98
struct Class_080493F4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080509D4 (0x080509D4)
    u32 (*slot_01_0x04)(void* self); // -> 0x08015CD2 (sub_08015CD2)
    u32 (*slot_02_0x08)(void* self); // -> 0x08015CF2 (sub_08015CF2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08005FD4 (sub_08005FD4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FDB4 (0x0804FDB4)
};

// VTable at 0x08049410 (5 virtual methods)
// Installed by: sub_08007B92@08007B96
struct Class_08049410_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080509E8 (sub_080509E8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08007E84 (0x08007E84)
    u32 (*slot_02_0x08)(void* self); // -> 0x08007F2E (sub_08007F2E)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08007FE8 (0x08007FE8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800800A (sub_0800800A)
};

// VTable at 0x08049424 (22 virtual methods)
// Installed by: sub_08021A4E@08021AEC
struct Class_08049424_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080509FC (sub_080509FC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08021C40 (sub_08021C40)
    u32 (*slot_02_0x08)(void* self); // -> 0x08021C7C (sub_08021C7C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08021EBC (0x08021EBC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08021CC0 (sub_08021CC0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080509E4 (sub_080509E4)
    u32 (*slot_12_0x30)(void* self); // -> 0x08021848 (0x08021848)
    u32 (*slot_13_0x34)(void* self); // -> 0x08021880 (0x08021880)
    u32 (*slot_14_0x38)(void* self); // -> 0x08006FE0 (0x08006FE0)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804FD74 (sub_0804FD74)
    u32 (*slot_16_0x40)(void* self); // -> 0x08007014 (0x08007014)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FCA0 (0x0804FCA0)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FDAC (0x0804FDAC)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FD8C (0x0804FD8C)
    u32 (*slot_20_0x50)(void* self); // -> 0x08007038 (0x08007038)
    u32 (*slot_21_0x54)(void* self); // -> 0x0802190E (0x0802190E)
};

// VTable at 0x0804947C (12 virtual methods)
// Installed by: sub_0801E5D4@0801E5FE
struct Class_0804947C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050A24 (sub_08050A24)
    u32 (*slot_01_0x04)(void* self); // -> 0x08005A5A (sub_08005A5A)
    u32 (*slot_02_0x08)(void* self); // -> 0x08005864 (sub_08005864)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800589C (sub_0800589C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080058AC (sub_080058AC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08005882 (sub_08005882)
    u32 (*slot_08_0x20)(void* self); // -> 0x08005ABE (sub_08005ABE)
    u32 (*slot_09_0x24)(void* self); // -> 0x08005632 (sub_08005632)
    u32 (*slot_10_0x28)(void* self); // -> 0x08005E3A (sub_08005E3A)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08005E9A (sub_08005E9A)
};

// VTable at 0x080494AC (11 virtual methods)
// Installed by: sub_08005BC0@08005BE0;sub_08005C44@08005C5A
struct Class_080494AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050A3C (0x08050A3C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006E3C (sub_08006E3C)
};

// VTable at 0x080494D8 (11 virtual methods)
// Installed by: sub_08006532@08006550;sub_0801E68A@0801E6D0
struct Class_080494D8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050A50 (sub_08050A50)
    u32 (*slot_01_0x04)(void* self); // -> 0x08005228 (loc_08005228)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x080052C4 (sub_080052C4)
    u32 (*slot_09_0x24)(void* self); // -> 0x080051E8 (sub_080051E8)
    u32 (*slot_10_0x28)(void* self); // -> 0x08005366 (sub_08005366)
};

// VTable at 0x08049504 (12 virtual methods)
// Installed by: sub_0800273A@0800278A
struct Class_08049504_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050A68 (sub_08050A68)
    u32 (*slot_01_0x04)(void* self); // -> 0x080059C8 (0x080059C8)
    u32 (*slot_02_0x08)(void* self); // -> 0x08005864 (sub_08005864)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800589C (sub_0800589C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080058AC (sub_080058AC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08005882 (sub_08005882)
    u32 (*slot_08_0x20)(void* self); // -> 0x08005948 (sub_08005948)
    u32 (*slot_09_0x24)(void* self); // -> 0x08005632 (sub_08005632)
    u32 (*slot_10_0x28)(void* self); // -> 0x08005A50 (sub_08005A50)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FD70 (0x0804FD70)
};

// VTable at 0x08049534 (5 virtual methods)
// Installed by: sub_08048230@08048234
struct Class_08049534_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F090 (sub_0804F090)
    u32 (*slot_01_0x04)(void* self); // -> 0x080077B4 (sub_080077B4)
    u32 (*slot_02_0x08)(void* self); // -> 0x080077B0 (0x080077B0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F9C0 (0x0804F9C0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FBD0 (0x0804FBD0)
};

// VTable at 0x08049548 (5 virtual methods)
// Installed by: sub_08007A40@08007A52
struct Class_08049548_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050A80 (sub_08050A80)
    u32 (*slot_01_0x04)(void* self); // -> 0x08007A28 (sub_08007A28)
    u32 (*slot_02_0x08)(void* self); // -> 0x08007A3E (sub_08007A3E)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE74 (sub_0804FE74)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F9BC (sub_0804F9BC)
};

// VTable at 0x0804955C (4 virtual methods)
// Installed by: sub_0800F89A@0800F8C6
struct Class_0804955C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050A94 (sub_08050A94)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FC48 (0x0804FC48)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F100 (sub_0804F100)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800F62C (0x0800F62C)
};

// VTable at 0x0804956C (7 virtual methods)
// Installed by: sub_08048E04@08048E0E
struct Class_0804956C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050AA8 (sub_08050AA8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F588 (sub_0804F588)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FDDC (sub_0804FDDC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FDC0 (sub_0804FDC0)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
};

// VTable at 0x08049588 (11 virtual methods)
// Installed by: dat_08014AFE@08014BAA;sub_08016BEA@08016C02;sub_0801DD72@0801DD96;sub_0801DDA2@0801DE3A;sub_0801DDA2@0801DE8A
struct Class_08049588_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050ABC (sub_08050ABC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08016CE8 (0x08016CE8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08016E36 (0x08016E36)
    u32 (*slot_08_0x20)(void* self); // -> 0x08016FC4 (0x08016FC4)
    u32 (*slot_09_0x24)(void* self); // -> 0x08016E4A (sub_08016E4A)
    u32 (*slot_10_0x28)(void* self); // -> 0x08017078 (sub_08017078)
};

// VTable at 0x080495B4 (16 virtual methods)
// Installed by: loc_08002342@08002370;sub_08006DEE@08006DF0;loc_08007504@08007534;sub_080075AC@08007626;sub_08021A4E@08021A82
struct Class_080495B4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050AD4 (0x08050AD4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x080070E4 (0x080070E4)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08007116 (0x08007116)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804E4D0 (0x0804E4D0)
    u32 (*slot_13_0x34)(void* self); // -> 0x0801CB70 (0x0801CB70)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804F540 (0x0804F540)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804F064 (0x0804F064)
};

// VTable at 0x080495F4 (4 virtual methods)
// Installed by: sub_08048554@08048558
struct Class_080495F4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FEA4 (sub_0804FEA4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F09C (sub_0804F09C)
};

// VTable at 0x08049604 (5 virtual methods)
// Installed by: sub_08007A7A@08007A84
struct Class_08049604_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050AE8 (sub_08050AE8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08007B26 (sub_08007B26)
    u32 (*slot_02_0x08)(void* self); // -> 0x08007B54 (sub_08007B54)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE74 (sub_0804FE74)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F9BC (sub_0804F9BC)
};

// VTable at 0x08049618 (11 virtual methods)
// Installed by: sub_08040096@080400A4
struct Class_08049618_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050AFC (sub_08050AFC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08040FD6 (sub_08040FD6)
    u32 (*slot_02_0x08)(void* self); // -> 0x08040FCC (0x08040FCC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08040F98 (0x08040F98)
    u32 (*slot_04_0x10)(void* self); // -> 0x08040FBA (0x08040FBA)
    u32 (*slot_05_0x14)(void* self); // -> 0x08041068 (sub_08041068)
    u32 (*slot_06_0x18)(void* self); // -> 0x080501E4 (sub_080501E4)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F930 (0x0804F930)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804ED5C (0x0804ED5C)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FBFC (sub_0804FBFC)
    u32 (*slot_10_0x28)(void* self); // -> 0x08050210 (0x08050210)
};

// VTable at 0x08049644 (11 virtual methods)
// Installed by: sub_080400D8@080400E6
struct Class_08049644_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050B10 (sub_08050B10)
    u32 (*slot_01_0x04)(void* self); // -> 0x0805022C (0x0805022C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F940 (0x0804F940)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E508 (0x0804E508)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F594 (sub_0804F594)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FDE0 (sub_0804FDE0)
    u32 (*slot_06_0x18)(void* self); // -> 0x080501F8 (0x080501F8)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F934 (0x0804F934)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804ED60 (sub_0804ED60)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC08 (0x0804FC08)
    u32 (*slot_10_0x28)(void* self); // -> 0x08050224 (0x08050224)
};

// VTable at 0x08049670 (4 virtual methods)
// Installed by: loc_08048464@0804846E
struct Class_08049670_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050B24 (sub_08050B24)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FC48 (0x0804FC48)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F0A0 (sub_0804F0A0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F7E0 (sub_0804F7E0)
};

// VTable at 0x08049680 (10 virtual methods)
// Installed by: loc_08005F06@08005F26;sub_0800ABE6@0800ABEA;sub_0800B608@0800B610;loc_0800B868@0800B870;loc_0800B8DA@0800B8DC;sub_0800BC
struct Class_08049680_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050B38 (sub_08050B38)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
};

// VTable at 0x080496A8 (5 virtual methods)
// Installed by: loc_08050B66@08050B6C;sub_08050F4C@08050F50;sub_08050F60@08050F64;sub_08051370@08051374;sub_08051690@08051694;sub_080524
struct Class_080496A8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050B68 (0x08050B68)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F9CC (sub_0804F9CC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEA8 (0x0804FEA8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC1C (0x0804FC1C)
    u32 (*slot_04_0x10)(void* self); // -> 0x08046CA0 (0x08046CA0)
};

// VTable at 0x080496BC (4 virtual methods)
// Installed by: loc_080107A8@080107CC
struct Class_080496BC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050B7C (sub_08050B7C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FC48 (0x0804FC48)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F100 (sub_0804F100)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08010588 (0x08010588)
};

// VTable at 0x080496CC (12 virtual methods)
// Installed by: sub_08006DB0@08006DB2;sub_080074EC@080074FC;sub_08021B4A@08021B68
struct Class_080496CC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050B90 (sub_08050B90)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08007132 (sub_08007132)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08007124 (0x08007124)
};

// VTable at 0x080496FC (11 virtual methods)
// Installed by: sub_080058E2@0800590A
struct Class_080496FC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050BA4 (sub_08050BA4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803947C (0x0803947C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080394C8 (sub_080394C8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08050238 (0x08050238)
    u32 (*slot_09_0x24)(void* self); // -> 0x080394E8 (sub_080394E8)
    u32 (*slot_10_0x28)(void* self); // -> 0x08039544 (0x08039544)
};

// VTable at 0x08049728 (12 virtual methods)
// Installed by: sub_0800547E@08005494
struct Class_08049728_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050BBC (sub_08050BBC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08005740 (sub_08005740)
    u32 (*slot_02_0x08)(void* self); // -> 0x08005864 (sub_08005864)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800589C (sub_0800589C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080058AC (sub_080058AC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08005882 (sub_08005882)
    u32 (*slot_08_0x20)(void* self); // -> 0x08005714 (0x08005714)
    u32 (*slot_09_0x24)(void* self); // -> 0x08005632 (sub_08005632)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FD70 (0x0804FD70)
};

// VTable at 0x08049758 (11 virtual methods)
// Installed by: sub_08014616@0801464E;sub_08016B9E@08016BB6
struct Class_08049758_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050BD4 (sub_08050BD4)
    u32 (*slot_01_0x04)(void* self); // -> 0x08014DC2 (sub_08014DC2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080150F4 (sub_080150F4)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08015516 (sub_08015516)
    u32 (*slot_09_0x24)(void* self); // -> 0x080154D4 (sub_080154D4)
    u32 (*slot_10_0x28)(void* self); // -> 0x080157A4 (0x080157A4)
};

// VTable at 0x08049784 (4 virtual methods)
// Installed by: sub_0800731C@08007326;sub_0800733A@08007342;sub_08007398@080073A2
struct Class_08049784_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800733A (sub_0800733A)
    u32 (*slot_01_0x04)(void* self); // -> 0x08007368 (sub_08007368)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB90 (0x0804FB90)
};

// VTable at 0x08049794 (8 virtual methods)
// Installed by: sub_0800747C@08007486;sub_080074AA@080074B4
struct Class_08049794_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050BEC (sub_08050BEC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800748C (sub_0800748C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB90 (0x0804FB90)
    u32 (*slot_04_0x10)(void* self); // -> 0x080187C4 (0x080187C4)
    u32 (*slot_05_0x14)(void* self); // -> 0x080187E0 (0x080187E0)
    u32 (*slot_06_0x18)(void* self); // -> 0x08018810 (0x08018810)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F094 (sub_0804F094)
};

// VTable at 0x080497B4 (12 virtual methods)
// Installed by: sub_08029836@08029844
struct Class_080497B4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08029778 (0x08029778)
    u32 (*slot_01_0x04)(void* self); // -> 0x08029824 (0x08029824)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F0A8 (sub_0804F0A8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802A0B4 (0x0802A0B4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802A266 (0x0802A266)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F0A0 (sub_0804F0A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_09_0x24)(void* self); // -> 0x08018BD0 (0x08018BD0)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804F550 (sub_0804F550)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804F098 (0x0804F098)
};

// VTable at 0x080497E4 (4 virtual methods)
// Installed by: sub_08048510@08048514
struct Class_080497E4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E50C (sub_0804E50C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08019240 (0x08019240)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F0C0 (sub_0804F0C0)
};

// VTable at 0x080497F4 (8 virtual methods)
// Installed by: loc_080503BA@080503F8
struct Class_080497F4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050C14 (sub_08050C14)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FD0C (0x0804FD0C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08023C5E (sub_08023C5E)
};

// VTable at 0x08049814 (8 virtual methods)
// Installed by: loc_0805042A@08050468
struct Class_08049814_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050C28 (sub_08050C28)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FD0C (0x0804FD0C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0801FF6C (0x0801FF6C)
};

// VTable at 0x08049834 (6 virtual methods)
// Installed by: sub_08048E20@08048E24
struct Class_08049834_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050C3C (sub_08050C3C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FCF8 (0x0804FCF8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FD28 (0x0804FD28)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F598 (sub_0804F598)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
};

// VTable at 0x0804984C (4 virtual methods)
// Installed by: sub_08048E3C@08048E40;sub_08050C4E@08050C52;loc_0805135A@08051360;sub_08051396@0805139A;sub_080514F8@080514FC;loc_08051F
struct Class_0804984C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050C50 (0x08050C50)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E520 (sub_0804E520)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F59C (sub_0804F59C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08046CAC (sub_08046CAC)
};

// VTable at 0x0804985C (9 virtual methods)
// Installed by: sub_080482C4@080482CA;sub_08048668@0804866C
struct Class_0804985C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E524 (0x0804E524)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x08049880 (6 virtual methods)
// Installed by: sub_08013E82@08013E8A;Object_Destroy7@08013EF4
struct Class_08049880_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08013EEC (Object_Destroy7)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F8FC (0x0804F8FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08013F24 (sub_08013F24)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08013F7C (sub_08013F7C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
};

// VTable at 0x08049898 (6 virtual methods)
// Installed by: Object_Destroy8@08016248
struct Class_08049898_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08016240 (Object_Destroy8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F8FC (0x0804F8FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08016260 (sub_08016260)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FEA0 (sub_0804FEA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080162A8 (sub_080162A8)
};

// VTable at 0x080498B0 (5 virtual methods)
// Installed by: loc_080088DC@080088E0;sub_0800897A@0800898E
struct Class_080498B0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050C5C (0x08050C5C)
    u32 (*slot_01_0x04)(void* self); // -> 0x080088E6 (sub_080088E6)
    u32 (*slot_02_0x08)(void* self); // -> 0x08008924 (0x08008924)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE74 (sub_0804FE74)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F9BC (sub_0804F9BC)
};

// VTable at 0x080498C4 (11 virtual methods)
// Installed by: sub_080141A0@080141B6
struct Class_080498C4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050C70 (sub_08050C70)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801425C (sub_0801425C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08014588 (sub_08014588)
    u32 (*slot_09_0x24)(void* self); // -> 0x08014526 (0x08014526)
    u32 (*slot_10_0x28)(void* self); // -> 0x080146B6 (sub_080146B6)
};

// VTable at 0x080498F0 (14 virtual methods)
// Installed by: sub_080145D8@080145FA;loc_08016F94@08017016;sub_0801DDA2@0801DEF4
struct Class_080498F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050C88 (sub_08050C88)
    u32 (*slot_01_0x04)(void* self); // -> 0x080147B8 (sub_080147B8)
    u32 (*slot_02_0x08)(void* self); // -> 0x08014A9C (0x08014A9C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08014AC8 (sub_08014AC8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08014770 (sub_08014770)
    u32 (*slot_10_0x28)(void* self); // -> 0x08014BBC (sub_08014BBC)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08014BE2 (sub_08014BE2)
    u32 (*slot_12_0x30)(void* self); // -> 0x08014C06 (sub_08014C06)
    u32 (*slot_13_0x34)(void* self); // -> 0x08014C30 (sub_08014C30)
};

// VTable at 0x08049978 (12 virtual methods)
// Installed by: sub_08003070@0800308A;sub_08030038@08030068;loc_08030424@08030428
struct Class_08049978_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050CA0 (sub_08050CA0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006BA0 (sub_08006BA0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08019594 (sub_08019594)
};

// VTable at 0x080499A8 (11 virtual methods)
// Installed by: dat_080315C6@080315DC;sub_08031620@0803162A
struct Class_080499A8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08031620 (sub_08031620)
    u32 (*slot_01_0x04)(void* self); // -> 0x080316D6 (sub_080316D6)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08031E46 (0x08031E46)
    u32 (*slot_08_0x20)(void* self); // -> 0x08031C4C (0x08031C4C)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803185C (0x0803185C)
    u32 (*slot_10_0x28)(void* self); // -> 0x08031D94 (0x08031D94)
};

// VTable at 0x080499D4 (10 virtual methods)
// Installed by: sub_08024A44@08024A4E;sub_08024A66@08024A70
struct Class_080499D4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050CB4 (sub_08050CB4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FC58 (0x0804FC58)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB90 (0x0804FB90)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08050CCC (0x08050CCC)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804ED5C (0x0804ED5C)
};

// VTable at 0x080499FC (8 virtual methods)
// Installed by: sub_080485D4@080485D8
struct Class_080499FC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E528 (sub_0804E528)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FEB0 (0x0804FEB0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F0C4 (sub_0804F0C4)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803387C (0x0803387C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F0B8 (sub_0804F0B8)
};

// VTable at 0x08049A1C (8 virtual methods)
// Installed by: sub_080482B4@080482B8
struct Class_08049A1C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FEB4 (sub_0804FEB4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F0D0 (sub_0804F0D0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0801CDB0 (0x0801CDB0)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F0C4 (sub_0804F0C4)
};

// VTable at 0x08049A3C (4 virtual methods)
// Installed by: sub_0802E104@0802E120
struct Class_08049A3C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803BB00 (sub_0803BB00)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802E0A8 (sub_0802E0A8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F130 (sub_0804F130)
};

// VTable at 0x08049A4C (4 virtual methods)
// Installed by: sub_08048500@08048504
struct Class_08049A4C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x08018E4C (0x08018E4C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F0DC (sub_0804F0DC)
};

// VTable at 0x08049A5C (8 virtual methods)
// Installed by: sub_08048958@0804895C
struct Class_08049A5C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E53C (sub_0804E53C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FEB8 (0x0804FEB8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F0E0 (sub_0804F0E0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802B6F8 (0x0802B6F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F0D4 (sub_0804F0D4)
};

// VTable at 0x08049A7C (8 virtual methods)
// Installed by: loc_080504CA@08050508
struct Class_08049A7C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050CF4 (0x08050CF4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FD0C (0x0804FD0C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080203DE (sub_080203DE)
};

// VTable at 0x08049A9C (8 virtual methods)
// Installed by: sub_08023FA8@0802409E
struct Class_08049A9C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050D08 (sub_08050D08)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
    u32 (*slot_06_0x18)(void* self); // -> 0x080240E0 (sub_080240E0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080240EC (0x080240EC)
};

// VTable at 0x08049ABC (4 virtual methods)
// Installed by: sub_0801D50C@0801D546
struct Class_08049ABC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050D1C (sub_08050D1C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FC44 (0x0804FC44)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F0EC (sub_0804F0EC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F7E4 (sub_0804F7E4)
};

// VTable at 0x08049ACC (5 virtual methods)
// Installed by: sub_08023FA8@08023FFA;sub_0802ACB2@0802AD0A;sub_0802B332@0802B38A;sub_0802E1D8@0802E22A;sub_08033132@08033188;loc_08033E
struct Class_08049ACC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050D30 (Object_InstallHandlerTable1)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E548 (sub_0804E548)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEBC (sub_0804FEBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB94 (sub_0804FB94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
};

// VTable at 0x08049AE0 (4 virtual methods)
// Installed by: sub_08048E7C@08048E80;sub_08048EBC@08048EC0;sub_08050D5C@08050D60;sub_08050F74@08050F78;sub_08051384@08051388
struct Class_08049AE0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050D5C (sub_08050D5C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FCC8 (sub_0804FCC8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804E54C (0x0804E54C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B4 (sub_0804F5B4)
};

// VTable at 0x08049AF0 (4 virtual methods)
// Installed by: sub_08048E5C@08048E60;sub_080508D6@080508E8;sub_08050A94@08050A98;sub_08050B24@08050B28;sub_08050B7C@08050B80;sub_08050D
struct Class_08049AF0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050D70 (0x08050D70)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FC48 (0x0804FC48)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F100 (sub_0804F100)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08046CAC (sub_08046CAC)
};

// VTable at 0x08049B00 (11 virtual methods)
// Installed by: sub_08005332@0800534C;sub_08005C98@08005CB0;sub_0801E972@0801E9B6
struct Class_08049B00_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050D7C (sub_08050D7C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801E4E0 (sub_0801E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801E6DA (sub_0801E6DA)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x0801E578 (sub_0801E578)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801E4A0 (sub_0801E4A0)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801E68A (sub_0801E68A)
};

// VTable at 0x08049B2C (12 virtual methods)
// Installed by: sub_0801E84A@0801E8C6;sub_0801E8DA@0801E93A;sub_0801FE2C@0801FE46;sub_0802333E@0802335A;sub_0802369A@080236C4;sub_08023A
struct Class_08049B2C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050D94 (sub_08050D94)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801FF98 (sub_0801FF98)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801FFE0 (sub_0801FFE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800589C (sub_0800589C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08020332 (sub_08020332)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08005882 (sub_08005882)
    u32 (*slot_08_0x20)(void* self); // -> 0x0801FFF6 (sub_0801FFF6)
    u32 (*slot_09_0x24)(void* self); // -> 0x08005632 (sub_08005632)
    u32 (*slot_10_0x28)(void* self); // -> 0x080201FE (sub_080201FE)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080202C8 (0x080202C8)
};

// VTable at 0x08049B5C (11 virtual methods)
// Installed by: sub_0801FDF6@0801FDFC
struct Class_08049B5C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050DAC (sub_08050DAC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08020406 (sub_08020406)
    u32 (*slot_02_0x08)(void* self); // -> 0x080204B0 (sub_080204B0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08050238 (0x08050238)
    u32 (*slot_09_0x24)(void* self); // -> 0x080204D0 (sub_080204D0)
    u32 (*slot_10_0x28)(void* self); // -> 0x08020504 (sub_08020504)
};

// VTable at 0x08049B88 (11 virtual methods)
// Installed by: sub_08031E84@08031EB4
struct Class_08049B88_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08031FB0 (0x08031FB0)
    u32 (*slot_01_0x04)(void* self); // -> 0x08032070 (sub_08032070)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080327A2 (sub_080327A2)
    u32 (*slot_08_0x20)(void* self); // -> 0x080325C0 (sub_080325C0)
    u32 (*slot_09_0x24)(void* self); // -> 0x080321D0 (0x080321D0)
    u32 (*slot_10_0x28)(void* self); // -> 0x080326F4 (sub_080326F4)
};

// VTable at 0x08049BB4 (4 virtual methods)
// Installed by: loc_0800C9D6@0800C9E8
struct Class_08049BB4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050DC4 (0x08050DC4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FC48 (0x0804FC48)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F100 (sub_0804F100)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800C628 (sub_0800C628)
};

// VTable at 0x08049BC4 (4 virtual methods)
// Installed by: sub_080071DC@080071E8;loc_080072E0@080072EA
struct Class_08049BC4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050DD8 (sub_08050DD8)
    u32 (*slot_01_0x04)(void* self); // -> 0x080071F8 (sub_080071F8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB90 (0x0804FB90)
};

// VTable at 0x08049BD4 (4 virtual methods)
// Installed by: sub_080073D8@080073E2;sub_0800743E@08007448
struct Class_08049BD4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050E00 (sub_08050E00)
    u32 (*slot_01_0x04)(void* self); // -> 0x080073F0 (sub_080073F0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB90 (0x0804FB90)
};

// VTable at 0x08049BE4 (5 virtual methods)
// Installed by: sub_080481DC@080481E0
struct Class_08049BE4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F114 (sub_0804F114)
    u32 (*slot_01_0x04)(void* self); // -> 0x080125E8 (0x080125E8)
    u32 (*slot_02_0x08)(void* self); // -> 0x080076F4 (sub_080076F4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F9C4 (0x0804F9C4)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FBD4 (0x0804FBD4)
};

// VTable at 0x08049BF8 (8 virtual methods)
// Installed by: sub_08048A20@08048A24
struct Class_08049BF8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E550 (sub_0804E550)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FEC0 (0x0804FEC0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F118 (sub_0804F118)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080189BC (0x080189BC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F10C (0x0804F10C)
};

// VTable at 0x08049C18 (20 virtual methods)
// Installed by: sub_080485E4@080485EE
struct Class_08049C18_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08026588 (sub_08026588)
    u32 (*slot_01_0x04)(void* self); // -> 0x080265D6 (0x080265D6)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F124 (sub_0804F124)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08050E18 (0x08050E18)
    u32 (*slot_09_0x24)(void* self); // -> 0x08029BD0 (0x08029BD0)
    u32 (*slot_10_0x28)(void* self); // -> 0x08034280 (sub_08034280)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08034286 (0x08034286)
    u32 (*slot_12_0x30)(void* self); // -> 0x080342DE (0x080342DE)
    u32 (*slot_13_0x34)(void* self); // -> 0x080342F4 (0x080342F4)
    u32 (*slot_14_0x38)(void* self); // -> 0x08050E18 (0x08050E18)
    u32 (*slot_15_0x3C)(void* self); // -> 0x08029C68 (0x08029C68)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804E4C0 (loc_0804E4C0)
    u32 (*slot_17_0x44)(void* self); // -> 0x08018BFA (loc_08018BFA)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804F530 (sub_0804F530)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804F0E8 (0x0804F0E8)
};

// VTable at 0x08049C68 (7 virtual methods)
// Installed by: sub_08015D30@08015D48
struct Class_08049C68_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050E58 (0x08050E58)
    u32 (*slot_01_0x04)(void* self); // -> 0x08016080 (sub_08016080)
    u32 (*slot_02_0x08)(void* self); // -> 0x080160CA (sub_080160CA)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08015DA8 (sub_08015DA8)
    u32 (*slot_04_0x10)(void* self); // -> 0x08005FD4 (sub_08005FD4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
    u32 (*slot_06_0x18)(void* self); // -> 0x08016188 (sub_08016188)
};

// VTable at 0x08049C84 (5 virtual methods)
// Installed by: Irq_WriteEnable1@080080DC;Irq_WriteEnable2@0800817A
struct Class_08049C84_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08008174 (Irq_WriteEnable2)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800884C (0x0800884C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800887C (sub_0800887C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE74 (sub_0804FE74)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F9BC (sub_0804F9BC)
};

// VTable at 0x08049C98 (11 virtual methods)
// Installed by: sub_0802A30A@0802A334
struct Class_08049C98_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802A3A8 (Object_Destroy19)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802A5B0 (0x0802A5B0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802A5C0 (0x0802A5C0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802A69A (sub_0802A69A)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802A7A0 (sub_0802A7A0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802A704 (0x0802A704)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802A3D2 (sub_0802A3D2)
};

// VTable at 0x08049CC4 (10 virtual methods)
// Installed by: sub_08017F7A@08017FAA
struct Class_08049CC4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050E6C (sub_08050E6C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08018078 (sub_08018078)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801809E (sub_0801809E)
    u32 (*slot_04_0x10)(void* self); // -> 0x08018284 (sub_08018284)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080186D4 (sub_080186D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x08018696 (sub_08018696)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801832E (sub_0801832E)
};

// VTable at 0x08049CEC (23 virtual methods)
// Installed by: sub_08005ABE@08005B38
struct Class_08049CEC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050E84 (sub_08050E84)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803957C (0x0803957C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0803966C (0x0803966C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08039708 (0x08039708)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803968C (0x0803968C)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08050E70 (0x08050E70)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804E4D0 (0x0804E4D0)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804F530 (sub_0804F530)
    u32 (*slot_14_0x38)(void* self); // -> 0x08006FE0 (0x08006FE0)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804FD74 (sub_0804FD74)
    u32 (*slot_16_0x40)(void* self); // -> 0x08007014 (0x08007014)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FCA0 (0x0804FCA0)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FDAC (0x0804FDAC)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FD8C (0x0804FD8C)
    u32 (*slot_20_0x50)(void* self); // -> 0x08007038 (0x08007038)
    u32 (*slot_21_0x54)(void* self); // -> 0x08006B74 (0x08006B74)
    u32 (*slot_22_0x58)(void* self); // -> 0x08006DF8 (0x08006DF8)
};

// VTable at 0x08049D48 (15 virtual methods)
// Installed by: loc_0801653A@08016550
struct Class_08049D48_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050EB0 (sub_08050EB0)
    u32 (*slot_01_0x04)(void* self); // -> 0x08016574 (sub_08016574)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08016928 (sub_08016928)
    u32 (*slot_08_0x20)(void* self); // -> 0x08016AA8 (sub_08016AA8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08016962 (sub_08016962)
    u32 (*slot_10_0x28)(void* self); // -> 0x08016C5C (0x08016C5C)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080105CE (0x080105CE)
    u32 (*slot_12_0x30)(void* self); // -> 0x080106E2 (0x080106E2)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804F10C (0x0804F10C)
    u32 (*slot_14_0x38)(void* self); // -> 0x0802E31C (0x0802E31C)
};

// VTable at 0x08049D84 (5 virtual methods)
// Installed by: sub_08034354@08034362;sub_0803436E@0803437C;sub_0803436E@08034396
struct Class_08049D84_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F140 (sub_0804F140)
    u32 (*slot_01_0x04)(void* self); // -> 0x080125E8 (0x080125E8)
    u32 (*slot_02_0x08)(void* self); // -> 0x08034334 (0x08034334)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F9C0 (0x0804F9C0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FBD0 (0x0804FBD0)
};

// VTable at 0x08049D98 (4 virtual methods)
// Installed by: loc_0800D2AA@0800D2CA;sub_0800D32E@0800D4B6
struct Class_08049D98_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050EC8 (sub_08050EC8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800D2D4 (sub_0800D2D4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB88 (0x0804FB88)
};

// VTable at 0x08049DA8 (4 virtual methods)
// Installed by: sub_0802A09E@0802A0B8
struct Class_08049DA8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802A00C (0x0802A00C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802A028 (0x0802A028)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F130 (sub_0804F130)
};

// VTable at 0x08049DB8 (26 virtual methods)
// Installed by: sub_08048A30@08048A34
struct Class_08049DB8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E56C (sub_0804E56C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FEC4 (0x0804FEC4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F148 (sub_0804F148)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080332F8 (0x080332F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F13C (0x0804F13C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08034288 (0x08034288)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803428E (0x0803428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x080342E6 (0x080342E6)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080342FC (0x080342FC)
    u32 (*slot_12_0x30)(void* self); // -> 0x08050ED0 (0x08050ED0)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804ED58 (0x0804ED58)
    u32 (*slot_14_0x38)(void* self); // -> 0x08034270 (0x08034270)
    u32 (*slot_15_0x3C)(void* self); // -> 0x08034276 (0x08034276)
    u32 (*slot_16_0x40)(void* self); // -> 0x080342CE (0x080342CE)
    u32 (*slot_17_0x44)(void* self); // -> 0x080342E4 (0x080342E4)
    u32 (*slot_18_0x48)(void* self); // -> 0x08050ED0 (0x08050ED0)
    u32 (*slot_19_0x4C)(void* self); // -> 0x08029EA0 (0x08029EA0)
    u32 (*slot_20_0x50)(void* self); // -> 0x08034258 (0x08034258)
    u32 (*slot_21_0x54)(void* self); // -> 0x0803425E (0x0803425E)
    u32 (*slot_22_0x58)(void* self); // -> 0x080342B6 (0x080342B6)
    u32 (*slot_23_0x5C)(void* self); // -> 0x080342CC (0x080342CC)
    u32 (*slot_24_0x60)(void* self); // -> 0x08050ED0 (0x08050ED0)
    u32 (*slot_25_0x64)(void* self); // -> 0x08037978 (0x08037978)
};

// VTable at 0x08049E20 (4 virtual methods)
// Installed by: sub_08032B7C@08032B8A
struct Class_08049E20_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08032824 (0x08032824)
    u32 (*slot_01_0x04)(void* self); // -> 0x08032A64 (0x08032A64)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F154 (sub_0804F154)
};

// VTable at 0x08049E30 (4 virtual methods)
// Installed by: sub_08048638@0804863C
struct Class_08049E30_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08026A26 (sub_08026A26)
    u32 (*slot_01_0x04)(void* self); // -> 0x08026B1A (sub_08026B1A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F15C (sub_0804F15C)
};

// VTable at 0x08049E40 (9 virtual methods)
// Installed by: sub_080482C4@08048320
struct Class_08049E40_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DEDC (0x0800DEDC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DEB0 (loc_0800DEB0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x08049E64 (11 virtual methods)
// Installed by: sub_080242EC@08024356;sub_0802437A@080243C8
struct Class_08049E64_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050F38 (0x08050F38)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802442C (sub_0802442C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08024490 (sub_08024490)
    u32 (*slot_08_0x20)(void* self); // -> 0x08050F2C (0x08050F2C)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804F9B0 (0x0804F9B0)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FE88 (0x0804FE88)
};

// VTable at 0x08049E90 (3 virtual methods)
// Installed by: sub_08012032@08012036
struct Class_08049E90_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050F60 (sub_08050F60)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F9CC (sub_0804F9CC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08012166 (sub_08012166)
};

// VTable at 0x08049E9C (4 virtual methods)
// Installed by: loc_08048564@08048568
struct Class_08049E9C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050F74 (sub_08050F74)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801E9C0 (sub_0801E9C0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804E54C (0x0804E54C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5C8 (sub_0804F5C8)
};

// VTable at 0x08049EAC (4 virtual methods)
// Installed by: sub_08048A40@08048A44
struct Class_08049EAC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080105FA (sub_080105FA)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801070E (sub_0801070E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F320 (sub_0804F320)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCDC (sub_0804FCDC)
};

// VTable at 0x08049EBC (4 virtual methods)
// Installed by: sub_08009D24@08009D30
struct Class_08049EBC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050F88 (0x08050F88)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
};

// VTable at 0x08049ECC (8 virtual methods)
// Installed by: sub_0800A278@0800A280
struct Class_08049ECC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050F94 (0x08050F94)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800A2A8 (sub_0800A2A8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800A432 (sub_0800A432)
    u32 (*slot_04_0x10)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FCC4 (sub_0804FCC4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800A446 (sub_0800A446)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800A46C (sub_0800A46C)
};

// VTable at 0x08049EEC (8 virtual methods)
// Installed by: sub_0804EEAC@0804EEC4
struct Class_08049EEC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E1AE (sub_0800E1AE)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E672 (sub_0800E672)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800E19E (0x0800E19E)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F57C (0x0804F57C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800E1C0 (0x0800E1C0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FCEC (0x0804FCEC)
};

// VTable at 0x08049F0C (11 virtual methods)
// Installed by: sub_080274D0@080274DC
struct Class_08049F0C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050FA0 (0x08050FA0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802764E (sub_0802764E)
    u32 (*slot_10_0x28)(void* self); // -> 0x08027562 (sub_08027562)
};

// VTable at 0x08049F38 (10 virtual methods)
// Installed by: loc_0800C46E@0800C47C
struct Class_08049F38_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08050FDC (0x08050FDC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800C4A6 (sub_0800C4A6)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800C4DA (Object_ClearFields1)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800C532 (sub_0800C532)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800C58E (sub_0800C58E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDE8 (sub_0804FDE8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4CC (0x0804E4CC)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800C574 (sub_0800C574)
};

// VTable at 0x08049F60 (12 virtual methods)
// Installed by: sub_0800B1A6@0800B1B2;Object_Destroy1@0800B2C6
struct Class_08049F60_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800B2BE (Object_Destroy1)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800B374 (sub_0800B374)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FE1C (0x0804FE1C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4D8 (sub_0804E4D8)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FC2C (sub_0804FC2C)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0800B354 (0x0800B354)
};

// VTable at 0x08049FC0 (11 virtual methods)
// Installed by: sub_080276C4@080276D2
struct Class_08049FC0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051030 (0x08051030)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x080278E2 (sub_080278E2)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802776E (sub_0802776E)
};

// VTable at 0x08049FEC (10 virtual methods)
// Installed by: loc_0800B890@0800B896;sub_0800B8B2@0800B8BA
struct Class_08049FEC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800B8B2 (sub_0800B8B2)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800B928 (Math_Divide1)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800BCC8 (sub_0800BCC8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800BD86 (sub_0800BD86)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800BD92 (sub_0800BD92)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800BD5A (sub_0800BD5A)
};

// VTable at 0x0804A014 (11 virtual methods)
// Installed by: sub_08006EE8@08006F40
struct Class_0804A014_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805106C (0x0805106C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDA4 (0x0804FDA4)
};

// VTable at 0x0804A040 (12 virtual methods)
// Installed by: sub_08017696@080176B4
struct Class_0804A040_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051080 (0x08051080)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006BA0 (sub_08006BA0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08046CAC (sub_08046CAC)
};

// VTable at 0x0804A070 (11 virtual methods)
// Installed by: sub_08002514@0800252E
struct Class_0804A070_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805108C (0x0805108C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802C98E (0x0802C98E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802C9DA (0x0802C9DA)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802C964 (sub_0802C964)
};

// VTable at 0x0804A09C (4 virtual methods)
// Installed by: sub_0800758C@08007598;sub_08007686@08007692
struct Class_0804A09C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080510A0 (sub_080510A0)
    u32 (*slot_01_0x04)(void* self); // -> 0x080075AC (sub_080075AC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB90 (0x0804FB90)
};

// VTable at 0x0804A0AC (5 virtual methods)
// Installed by: sub_08048220@08048224
struct Class_0804A0AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F160 (sub_0804F160)
    u32 (*slot_01_0x04)(void* self); // -> 0x080125E8 (0x080125E8)
    u32 (*slot_02_0x08)(void* self); // -> 0x08007768 (0x08007768)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F9C0 (0x0804F9C0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FBD0 (0x0804FBD0)
};

// VTable at 0x0804A0C0 (4 virtual methods)
// Installed by: sub_08017E80@08017EB8
struct Class_0804A0C0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080510C8 (sub_080510C8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08017EFE (sub_08017EFE)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB8C (0x0804FB8C)
};

// VTable at 0x0804A0D0 (8 virtual methods)
// Installed by: sub_080486CC@080486DA
struct Class_0804A0D0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802AD88 (sub_0802AD88)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802ADAA (0x0802ADAA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F164 (sub_0804F164)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803D100 (0x0803D100)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F158 (0x0804F158)
};

// VTable at 0x0804A0F0 (4 virtual methods)
// Installed by: sub_08048C34@08048C3E
struct Class_0804A0F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E59C (0x0804E59C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FEDC (0x0804FEDC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F5CC (sub_0804F5CC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F170 (sub_0804F170)
};

// VTable at 0x0804A100 (4 virtual methods)
// Installed by: sub_08048DC8@08048DCC
struct Class_0804A100_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E5B8 (sub_0804E5B8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FEF4 (0x0804FEF4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F174 (sub_0804F174)
};

// VTable at 0x0804A110 (10 virtual methods)
// Installed by: loc_08048A68@08048A6E
struct Class_0804A110_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E5E8 (0x0804E5E8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FF0C (0x0804FF0C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F178 (sub_0804F178)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x080510E0 (0x080510E0)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802687C (0x0802687C)
};

// VTable at 0x0804A138 (4 virtual methods)
// Installed by: sub_08018BCA@08018BDA
struct Class_0804A138_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08018A08 (0x08018A08)
    u32 (*slot_01_0x04)(void* self); // -> 0x08018A92 (sub_08018A92)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F17C (sub_0804F17C)
};

// VTable at 0x0804A148 (4 virtual methods)
// Installed by: loc_08048930@08048936
struct Class_0804A148_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E608 (sub_0804E608)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FF24 (0x0804FF24)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F184 (sub_0804F184)
};

// VTable at 0x0804A158 (4 virtual methods)
// Installed by: loc_08048DD8@08048DE2
struct Class_0804A158_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803CB82 (sub_0803CB82)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803CBD0 (sub_0803CBD0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F188 (sub_0804F188)
};

// VTable at 0x0804A168 (4 virtual methods)
// Installed by: sub_0803A61A@0803A628
struct Class_0804A168_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E624 (0x0804E624)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A5DA (sub_0803A5DA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F18C (sub_0804F18C)
};

// VTable at 0x0804A178 (4 virtual methods)
// Installed by: sub_0802FC8A@0802FC98
struct Class_0804A178_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802FC52 (0x0802FC52)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802FC5C (0x0802FC5C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802FC88 (0x0802FC88)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F194 (sub_0804F194)
};

// VTable at 0x0804A188 (9 virtual methods)
// Installed by: sub_080482C4@0804830A
struct Class_0804A188_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804A1AC (9 virtual methods)
// Installed by: sub_080482C4@08048330
struct Class_0804A1AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DF8A (0x0800DF8A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800DFAC (sub_0800DFAC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804A1D0 (9 virtual methods)
// Installed by: sub_080482C4@08048340
struct Class_0804A1D0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DEB0 (loc_0800DEB0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800E050 (sub_0800E050)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804A1F4 (8 virtual methods)
// Installed by: sub_0802455E@080245C4
struct Class_0804A1F4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051108 (0x08051108)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
    u32 (*slot_06_0x18)(void* self); // -> 0x08024600 (sub_08024600)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08024630 (sub_08024630)
};

// VTable at 0x0804A214 (9 virtual methods)
// Installed by: sub_08048404@08048408
struct Class_0804A214_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E524 (0x0804E524)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E4 (sub_0804E4E4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804A238 (7 virtual methods)
// Installed by: sub_08005FA2@08005FC8
struct Class_0804A238_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805111C (0x0805111C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F8FC (0x0804F8FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08005FD4 (sub_08005FD4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FDB4 (0x0804FDB4)
};

// VTable at 0x0804A254 (6 virtual methods)
// Installed by: loc_0801413A@08014140
struct Class_0804A254_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051128 (sub_08051128)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F8FC (0x0804F8FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08014156 (sub_08014156)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FEA0 (sub_0804FEA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
};

// VTable at 0x0804A26C (11 virtual methods)
// Installed by: sub_0803749C@080374AC;sub_0803750E@08037518
struct Class_0804A26C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803750E (sub_0803750E)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080378E0 (sub_080378E0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x080378F4 (sub_080378F4)
    u32 (*slot_10_0x28)(void* self); // -> 0x08037650 (sub_08037650)
};

// VTable at 0x0804A298 (10 virtual methods)
// Installed by: sub_08016322@0801634E;Object_Destroy9@0801638C
struct Class_0804A298_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08016384 (Object_Destroy9)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080163C4 (sub_080163C4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080163E6 (sub_080163E6)
    u32 (*slot_04_0x10)(void* self); // -> 0x08016428 (sub_08016428)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x080164A0 (sub_080164A0)
};

// VTable at 0x0804A2C0 (10 virtual methods)
// Installed by: sub_0801954A@0801956C
struct Class_0804A2C0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805113C (sub_0805113C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802A8AA (Object_ClearFields5)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802A904 (0x0802A904)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802A950 (sub_0802A950)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802A9A8 (sub_0802A9A8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802A9EC (sub_0802A9EC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802A9C6 (0x0802A9C6)
};

// VTable at 0x0804A2E8 (11 virtual methods)
// Installed by: sub_0801C700@0801C70E
struct Class_0804A2E8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051178 (0x08051178)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801C8DC (sub_0801C8DC)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801C80A (sub_0801C80A)
};

// VTable at 0x0804A314 (10 virtual methods)
// Installed by: loc_0800DD44@0800DD5E
struct Class_0804A314_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080511B4 (0x080511B4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800DA3E (0x0800DA3E)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800DA92 (sub_0800DA92)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800DB1C (sub_0800DB1C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800DB42 (sub_0800DB42)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800DD90 (sub_0800DD90)
};

// VTable at 0x0804A33C (11 virtual methods)
// Installed by: sub_080212A0@080212AE;Object_Destroy13@08021302
struct Class_0804A33C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080212FA (Object_Destroy13)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08019CC4 (sub_08019CC4)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802133A (sub_0802133A)
};

// VTable at 0x0804A368 (11 virtual methods)
// Installed by: sub_0801C91C@0801C92C
struct Class_0804A368_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080511CC (sub_080511CC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801CB38 (sub_0801CB38)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801C9C4 (sub_0801C9C4)
};

// VTable at 0x0804A394 (10 virtual methods)
// Installed by: dat_0802E746@0802E776
struct Class_0804A394_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051208 (0x08051208)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802E7AA (sub_0802E7AA)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802E7B0 (0x0802E7B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802E7B4 (sub_0802E7B4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802E80E (sub_0802E80E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
};

// VTable at 0x0804A3BC (11 virtual methods)
// Installed by: sub_08020054@080200CE;sub_080232FA@08023334
struct Class_0804A3BC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805124C (0x0805124C)
    u32 (*slot_01_0x04)(void* self); // -> 0x080237F0 (sub_080237F0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08023C20 (0x08023C20)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08023AAA (sub_08023AAA)
    u32 (*slot_09_0x24)(void* self); // -> 0x08023A78 (0x08023A78)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x0804A3E8 (7 virtual methods)
// Installed by: sub_08027D96@08027DCE
struct Class_0804A3E8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051264 (0x08051264)
    u32 (*slot_01_0x04)(void* self); // -> 0x08027DEE (sub_08027DEE)
    u32 (*slot_02_0x08)(void* self); // -> 0x08027DF0 (sub_08027DF0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08027E16 (sub_08027E16)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08027E2E (sub_08027E2E)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
};

// VTable at 0x0804A404 (11 virtual methods)
// Installed by: loc_08002888@080028A8;sub_0800419C@080041FE
struct Class_0804A404_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051278 (sub_08051278)
    u32 (*slot_01_0x04)(void* self); // -> 0x080053CC (sub_080053CC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x080052C4 (sub_080052C4)
    u32 (*slot_09_0x24)(void* self); // -> 0x080051E8 (sub_080051E8)
    u32 (*slot_10_0x28)(void* self); // -> 0x08005366 (sub_08005366)
};

// VTable at 0x0804A430 (14 virtual methods)
// Installed by: sub_080052C4@08005306
struct Class_0804A430_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051290 (sub_08051290)
    u32 (*slot_01_0x04)(void* self); // -> 0x080062D8 (sub_080062D8)
    u32 (*slot_02_0x08)(void* self); // -> 0x080064E6 (sub_080064E6)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08006512 (0x08006512)
    u32 (*slot_09_0x24)(void* self); // -> 0x08006290 (sub_08006290)
    u32 (*slot_10_0x28)(void* self); // -> 0x080065BC (0x080065BC)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080065C0 (0x080065C0)
    u32 (*slot_12_0x30)(void* self); // -> 0x080065E4 (sub_080065E4)
    u32 (*slot_13_0x34)(void* self); // -> 0x0800660E (0x0800660E)
};

// VTable at 0x0804A4B8 (29 virtual methods)
// Installed by: loc_08050578@08050582
struct Class_0804A4B8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080512A8 (0x080512A8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x080070E4 (0x080070E4)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FDCC (sub_0804FDCC)
    u32 (*slot_12_0x30)(void* self); // -> 0x0802570C (0x0802570C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0802571C (0x0802571C)
    u32 (*slot_14_0x38)(void* self); // -> 0x08025AF0 (0x08025AF0)
    u32 (*slot_15_0x3C)(void* self); // -> 0x08024C08 (0x08024C08)
    u32 (*slot_16_0x40)(void* self); // -> 0x08025CFE (0x08025CFE)
    u32 (*slot_17_0x44)(void* self); // -> 0x08024C24 (0x08024C24)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FC9C (0x0804FC9C)
    u32 (*slot_19_0x4C)(void* self); // -> 0x08024BC2 (0x08024BC2)
    u32 (*slot_20_0x50)(void* self); // -> 0x08025DDC (0x08025DDC)
    u32 (*slot_21_0x54)(void* self); // -> 0x08025DE8 (0x08025DE8)
    u32 (*slot_22_0x58)(void* self); // -> 0x08024BD4 (0x08024BD4)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0804FE54 (sub_0804FE54)
    u32 (*slot_24_0x60)(void* self); // -> 0x0804FE60 (0x0804FE60)
    u32 (*slot_25_0x64)(void* self); // -> 0x08025DF4 (0x08025DF4)
    u32 (*slot_26_0x68)(void* self); // -> 0x08025DFE (0x08025DFE)
    u32 (*slot_27_0x6C)(void* self); // -> 0x08025B04 (0x08025B04)
    u32 (*slot_28_0x70)(void* self); // -> 0x08025D18 (0x08025D18)
};

// VTable at 0x0804A52C (17 virtual methods)
// Installed by: sub_08025E6E@08025E78;Object_Destroy15@08025EF8
struct Class_0804A52C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08025EF0 (Object_Destroy15)
    u32 (*slot_01_0x04)(void* self); // -> 0x08026048 (sub_08026048)
    u32 (*slot_02_0x08)(void* self); // -> 0x080261C0 (sub_080261C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08024C38 (sub_08024C38)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08024C54 (sub_08024C54)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08024BF2 (0x08024BF2)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804F8C4 (sub_0804F8C4)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804F9A0 (0x0804F9A0)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802601A (sub_0802601A)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE80 (0x0804FE80)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FE8C (0x0804FE8C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804EEA4 (0x0804EEA4)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804EEA8 (sub_0804EEA8)
    u32 (*slot_15_0x3C)(void* self); // -> 0x08025F64 (sub_08025F64)
    u32 (*slot_16_0x40)(void* self); // -> 0x08025FAC (sub_08025FAC)
};

// VTable at 0x0804A570 (17 virtual methods)
// Installed by: sub_080261D4@080261F4
struct Class_0804A570_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080512BC (sub_080512BC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08026212 (sub_08026212)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08024C38 (sub_08024C38)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08024C54 (sub_08024C54)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08024BF2 (0x08024BF2)
    u32 (*slot_08_0x20)(void* self); // -> 0x080263BE (sub_080263BE)
    u32 (*slot_09_0x24)(void* self); // -> 0x080263E2 (0x080263E2)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802638A (sub_0802638A)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE80 (0x0804FE80)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FE94 (0x0804FE94)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804EEA4 (0x0804EEA4)
    u32 (*slot_14_0x38)(void* self); // -> 0x08026274 (sub_08026274)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0802632E (0x0802632E)
    u32 (*slot_16_0x40)(void* self); // -> 0x08026360 (0x08026360)
};

// VTable at 0x0804A5B4 (11 virtual methods)
// Installed by: sub_080024EC@08002506
struct Class_0804A5B4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080512D0 (sub_080512D0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802CA42 (Bg_WriteControl0AndMosaic2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802CA72 (sub_0802CA72)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802CA1C (sub_0802CA1C)
};

// VTable at 0x0804A5E0 (11 virtual methods)
// Installed by: dat_0802E85A@0802E876
struct Class_0804A5E0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080512E4 (sub_080512E4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802E97A (Bg_WriteScroll3)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802EB64 (0x0802EB64)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802EB94 (sub_0802EB94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802EBA4 (sub_0802EBA4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x0802ECEA (sub_0802ECEA)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802EC3E (sub_0802EC3E)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x0804A60C (11 virtual methods)
// Installed by: sub_0801F506@0801F530
struct Class_0804A60C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080512FC (sub_080512FC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801F61E (sub_0801F61E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0801FF02 (0x0801FF02)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0801F7D8 (0x0801F7D8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0801FD60 (sub_0801FD60)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801F99E (sub_0801F99E)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801FE92 (sub_0801FE92)
};

// VTable at 0x0804A638 (4 virtual methods)
// Installed by: sub_08048708@08048712
struct Class_0804A638_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802AE76 (sub_0802AE76)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802AE98 (sub_0802AE98)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F5D8 (0x0804F5D8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F19C (sub_0804F19C)
};

// VTable at 0x0804A648 (4 virtual methods)
// Installed by: sub_08048724@0804872E
struct Class_0804A648_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802AEDA (Ram_SetOne1)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FF3C (0x0804FF3C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F5E4 (sub_0804F5E4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1A0 (sub_0804F1A0)
};

// VTable at 0x0804A658 (10 virtual methods)
// Installed by: sub_08048A10@08048A14
struct Class_0804A658_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E63C (sub_0804E63C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FF40 (sub_0804FF40)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1A4 (sub_0804F1A4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08051304 (0x08051304)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804ED88 (0x0804ED88)
};

// VTable at 0x0804A680 (4 virtual methods)
// Installed by: sub_0804897C@08048986
struct Class_0804A680_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802F6A8 (sub_0802F6A8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802F6F6 (sub_0802F6F6)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1A8 (sub_0804F1A8)
};

// VTable at 0x0804A690 (4 virtual methods)
// Installed by: sub_080488A4@080488A8
struct Class_0804A690_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E658 (0x0804E658)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FF6C (0x0804FF6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1AC (sub_0804F1AC)
};

// VTable at 0x0804A6A0 (4 virtual methods)
// Installed by: loc_08048620@08048626
struct Class_0804A6A0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08026808 (sub_08026808)
    u32 (*slot_01_0x04)(void* self); // -> 0x08026856 (0x08026856)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1B0 (sub_0804F1B0)
};

// VTable at 0x0804A6B0 (4 virtual methods)
// Installed by: sub_08048658@0804865C
struct Class_0804A6B0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x08029978 (0x08029978)
    u32 (*slot_02_0x08)(void* self); // -> 0x08029988 (0x08029988)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1B4 (sub_0804F1B4)
};

// VTable at 0x0804A6C0 (16 virtual methods)
// Installed by: sub_080331C0@080331C4
struct Class_0804A6C0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08033132 (sub_08033132)
    u32 (*slot_01_0x04)(void* self); // -> 0x080331A0 (sub_080331A0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1B8 (sub_0804F1B8)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0805131C (0x0805131C)
    u32 (*slot_09_0x24)(void* self); // -> 0x080363B4 (0x080363B4)
    u32 (*slot_10_0x28)(void* self); // -> 0x08034280 (sub_08034280)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08034286 (0x08034286)
    u32 (*slot_12_0x30)(void* self); // -> 0x080342DE (0x080342DE)
    u32 (*slot_13_0x34)(void* self); // -> 0x080342F4 (0x080342F4)
    u32 (*slot_14_0x38)(void* self); // -> 0x0805131C (0x0805131C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x080295B4 (0x080295B4)
};

// VTable at 0x0804A700 (4 virtual methods)
// Installed by: sub_08048694@08048698
struct Class_0804A700_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FF70 (0x0804FF70)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1C0 (sub_0804F1C0)
};

// VTable at 0x0804A710 (4 virtual methods)
// Installed by: sub_0801920E@0801922E
struct Class_0804A710_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080190DE (sub_080190DE)
    u32 (*slot_01_0x04)(void* self); // -> 0x08019192 (sub_08019192)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019138 (sub_08019138)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F3BC (sub_0804F3BC)
};

// VTable at 0x0804A720 (4 virtual methods)
// Installed by: loc_0800797C@0800798E
struct Class_0804A720_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805135C (0x0805135C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E520 (sub_0804E520)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F59C (sub_0804F59C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080079BC (sub_080079BC)
};

// VTable at 0x0804A730 (19 virtual methods)
// Installed by: sub_080482C4@08048314
struct Class_0804A730_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800DED0 (sub_0800DED0)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802968C (0x0802968C)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08029698 (0x08029698)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FE84 (sub_0804FE84)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804F5C8 (sub_0804F5C8)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FC90 (0x0804FC90)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804FC28 (0x0804FC28)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804ED1C (0x0804ED1C)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804F9AC (0x0804F9AC)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FA68 (0x0804FA68)
};

// VTable at 0x0804A77C (9 virtual methods)
// Installed by: sub_080482C4@08048336
struct Class_0804A77C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DFBE (sub_0800DFBE)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DFD4 (sub_0800DFD4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804A7A0 (9 virtual methods)
// Installed by: sub_08015978@08015988
struct Class_0804A7A0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E524 (0x0804E524)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE28 (0x0800DE28)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800DE54 (sub_0800DE54)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804A7C4 (3 virtual methods)
// Installed by: sub_08012386@0801238A
struct Class_0804A7C4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051370 (sub_08051370)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F9CC (sub_0804F9CC)
    u32 (*slot_02_0x08)(void* self); // -> 0x080123A2 (sub_080123A2)
};

// VTable at 0x0804A7D0 (12 virtual methods)
// Installed by: sub_08048E20@08048E2A
struct Class_0804A7D0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051384 (sub_08051384)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FCC8 (sub_0804FCC8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804E54C (0x0804E54C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5F8 (sub_0804F5F8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FD4C (0x0804FD4C)
    u32 (*slot_05_0x14)(void* self); // -> 0x08051384 (sub_08051384)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804E660 (0x0804E660)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F5E8 (sub_0804F5E8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FF70 (0x0804FF70)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804ECE4 (0x0804ECE4)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804ECE8 (0x0804ECE8)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08046C98 (0x08046C98)
};

// VTable at 0x0804A800 (4 virtual methods)
// Installed by: sub_08039DB6@08039DBA
struct Class_0804A800_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080513A4 (0x080513A4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08039EB8 (sub_08039EB8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
};

// VTable at 0x0804A810 (4 virtual methods)
// Installed by: sub_0804EEDC@0804EEF4
struct Class_0804A810_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E2F2 (sub_0800E2F2)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E1D0 (loc_0800E1D0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804A820 (4 virtual methods)
// Installed by: sub_0800F812@0800F84C
struct Class_0804A820_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080513B8 (sub_080513B8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FC48 (0x0804FC48)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F100 (sub_0804F100)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F82C (sub_0804F82C)
};

// VTable at 0x0804A830 (11 virtual methods)
// Installed by: sub_0802D76C@0802D7CA
struct Class_0804A830_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080513CC (sub_080513CC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802DB10 (0x0802DB10)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802D940 (sub_0802D940)
};

// VTable at 0x0804A85C (10 virtual methods)
// Installed by: sub_0800D97C@0800D9AA;Object_Destroy4@0800D9FA
struct Class_0804A85C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800D9F0 (Object_Destroy4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800DA3E (0x0800DA3E)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800DA92 (sub_0800DA92)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800DB1C (sub_0800DB1C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800DB42 (sub_0800DB42)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800DB52 (sub_0800DB52)
};

// VTable at 0x0804A884 (10 virtual methods)
// Installed by: sub_0803AEC6@0803AECA
struct Class_0804A884_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051408 (0x08051408)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F1C4 (sub_0804F1C4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0803AFA6 (0x0803AFA6)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x0803B1DC (sub_0803B1DC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FE1C (0x0804FE1C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4D8 (sub_0804E4D8)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803B1F0 (sub_0803B1F0)
};

// VTable at 0x0804A8AC (7 virtual methods)
// Installed by: sub_08021A4E@08021AAA
struct Class_0804A8AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805141C (sub_0805141C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802E6AC (sub_0802E6AC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802E6CC (sub_0802E6CC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802E6FA (sub_0802E6FA)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802E708 (0x0802E708)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
};

// VTable at 0x0804A8C8 (11 virtual methods)
// Installed by: sub_0801DCD4@0801DD66
struct Class_0804A8C8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051430 (sub_08051430)
    u32 (*slot_01_0x04)(void* self); // -> 0x08039760 (0x08039760)
    u32 (*slot_02_0x08)(void* self); // -> 0x080397AC (0x080397AC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08050238 (0x08050238)
    u32 (*slot_09_0x24)(void* self); // -> 0x080397CC (0x080397CC)
    u32 (*slot_10_0x28)(void* self); // -> 0x0803982C (0x0803982C)
};

// VTable at 0x0804A8F4 (11 virtual methods)
// Installed by: sub_0801D68C@0801D6A6
struct Class_0804A8F4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051448 (sub_08051448)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801D798 (sub_0801D798)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0801D970 (0x0801D970)
    u32 (*slot_08_0x20)(void* self); // -> 0x0801DCD4 (sub_0801DCD4)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801D988 (sub_0801D988)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801DFAC (0x0801DFAC)
};

// VTable at 0x0804A920 (12 virtual methods)
// Installed by: sub_08006E3C@08006E9A;sub_08006EE8@08006F6A;loc_0805059C@080505A8
struct Class_0804A920_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051460 (0x08051460)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08007132 (sub_08007132)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FDD0 (sub_0804FDD0)
};

// VTable at 0x0804A950 (34 virtual methods)
// Installed by: sub_08024F52@08024F5C
struct Class_0804A950_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051474 (sub_08051474)
    u32 (*slot_01_0x04)(void* self); // -> 0x080255C4 (Blend_WriteControlAndAlpha4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08024C38 (sub_08024C38)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08024C54 (sub_08024C54)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080253EA (Blend_WriteControl4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804F8C4 (sub_0804F8C4)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804F9A0 (0x0804F9A0)
    u32 (*slot_10_0x28)(void* self); // -> 0x08025354 (0x08025354)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE80 (0x0804FE80)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FE8C (0x0804FE8C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804EEA4 (0x0804EEA4)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804EEA8 (sub_0804EEA8)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804FDD4 (0x0804FDD4)
    u32 (*slot_16_0x40)(void* self); // -> 0x08025510 (sub_08025510)
    u32 (*slot_17_0x44)(void* self); // -> 0x08051444 (0x08051444)
    u32 (*slot_18_0x48)(void* self); // -> 0x080263D8 (sub_080263D8)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804F518 (sub_0804F518)
    u32 (*slot_20_0x50)(void* self); // -> 0x08024BF4 (0x08024BF4)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FD5C (0x0804FD5C)
    u32 (*slot_22_0x58)(void* self); // -> 0x08024C10 (0x08024C10)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0804FC88 (0x0804FC88)
    u32 (*slot_24_0x60)(void* self); // -> 0x08024BAE (0x08024BAE)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F880 (0x0804F880)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804F95C (0x0804F95C)
    u32 (*slot_27_0x6C)(void* self); // -> 0x08024BC0 (0x08024BC0)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804FE44 (0x0804FE44)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FE48 (0x0804FE48)
    u32 (*slot_30_0x78)(void* self); // -> 0x0802644A (0x0802644A)
    u32 (*slot_31_0x7C)(void* self); // -> 0x0804EE64 (0x0804EE64)
    u32 (*slot_32_0x80)(void* self); // -> 0x0804FD90 (0x0804FD90)
    u32 (*slot_33_0x84)(void* self); // -> 0x08026454 (0x08026454)
};

// VTable at 0x0804A9D8 (12 virtual methods)
// Installed by: loc_080024D2@080024DE
struct Class_0804A9D8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805149C (sub_0805149C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006BA0 (sub_08006BA0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08017888 (sub_08017888)
};

// VTable at 0x0804AA08 (5 virtual methods)
// Installed by: sub_080485A8@080485AC
struct Class_0804AA08_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F1E8 (sub_0804F1E8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08022644 (sub_08022644)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802262C (sub_0802262C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F9C8 (0x0804F9C8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FBD8 (0x0804FBD8)
};

// VTable at 0x0804AA1C (4 virtual methods)
// Installed by: sub_080486EC@080486F6
struct Class_0804AA1C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802ADF0 (sub_0802ADF0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802AE06 (sub_0802AE06)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1EC (sub_0804F1EC)
};

// VTable at 0x0804AA2C (4 virtual methods)
// Installed by: sub_08048740@0804874A
struct Class_0804AA2C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802B19C (sub_0802B19C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802B1EA (sub_0802B1EA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1F0 (sub_0804F1F0)
};

// VTable at 0x0804AA3C (4 virtual methods)
// Installed by: sub_08048A40@08048A50
struct Class_0804AA3C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080305AA (sub_080305AA)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FF94 (0x0804FF94)
    u32 (*slot_02_0x08)(void* self); // -> 0x080305E2 (sub_080305E2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1F4 (sub_0804F1F4)
};

// VTable at 0x0804AA4C (10 virtual methods)
// Installed by: sub_0804875C@08048766
struct Class_0804AA4C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802B332 (sub_0802B332)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802B3A2 (sub_0802B3A2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1F8 (sub_0804F1F8)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x080514A0 (0x080514A0)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804EDA8 (0x0804EDA8)
};

// VTable at 0x0804AA74 (4 virtual methods)
// Installed by: sub_080488D0@080488DA
struct Class_0804AA74_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E684 (sub_0804E684)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FFAC (0x0804FFAC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F1FC (sub_0804F1FC)
};

// VTable at 0x0804AA84 (4 virtual methods)
// Installed by: sub_08048998@0804899C
struct Class_0804AA84_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802F724 (0x0802F724)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F200 (sub_0804F200)
};

// VTable at 0x0804AA94 (20 virtual methods)
// Installed by: sub_08048648@0804864C
struct Class_0804AA94_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080298D8 (sub_080298D8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08029902 (sub_08029902)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F204 (sub_0804F204)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x080514B8 (0x080514B8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08039204 (0x08039204)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804E678 (0x0804E678)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08034286 (0x08034286)
    u32 (*slot_12_0x30)(void* self); // -> 0x080342DE (0x080342DE)
    u32 (*slot_13_0x34)(void* self); // -> 0x080342F4 (0x080342F4)
    u32 (*slot_14_0x38)(void* self); // -> 0x080514B8 (0x080514B8)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804EDB0 (0x0804EDB0)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804E684 (sub_0804E684)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FF70 (0x0804FF70)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804F530 (sub_0804F530)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804F1C8 (0x0804F1C8)
};

// VTable at 0x0804AAE4 (4 virtual methods)
// Installed by: sub_08048694@0804869E
struct Class_0804AAE4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FFC8 (loc_0804FFC8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F20C (sub_0804F20C)
};

// VTable at 0x0804AAF4 (4 virtual methods)
// Installed by: sub_08018E74@08018E90;sub_08018EBE@08018EC6;sub_08018F90@08018FAC;sub_0804F210@0804F21A
struct Class_0804AAF4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08018EF6 (sub_08018EF6)
    u32 (*slot_01_0x04)(void* self); // -> 0x08018F0C (sub_08018F0C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08018F74 (sub_08018F74)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F210 (sub_0804F210)
};

// VTable at 0x0804AB04 (4 virtual methods)
// Installed by: sub_08033B20@08033B2E
struct Class_0804AB04_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803399E (sub_0803399E)
    u32 (*slot_01_0x04)(void* self); // -> 0x08033A2A (sub_08033A2A)
    u32 (*slot_02_0x08)(void* self); // -> 0x08033AF6 (0x08033AF6)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F248 (0x0804F248)
};

// VTable at 0x0804AB14 (4 virtual methods)
// Installed by: sub_0803A510@0803A51E
struct Class_0804AB14_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E6E0 (0x0804E6E0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A4D0 (0x0803A4D0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F60C (sub_0804F60C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F250 (sub_0804F250)
};

// VTable at 0x0804AB24 (4 virtual methods)
// Installed by: sub_08007874@08007878
struct Class_0804AB24_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080514F8 (sub_080514F8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E520 (sub_0804E520)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F59C (sub_0804F59C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08007916 (sub_08007916)
};

// VTable at 0x0804AB34 (14 virtual methods)
// Installed by: dat_0802E58E@0802E61A
struct Class_0804AB34_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802E354 (sub_0802E354)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E8 (sub_0804E4E8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802E384 (sub_0802E384)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802E42E (sub_0802E42E)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x080514E8 (0x080514E8)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804E524 (0x0804E524)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FFB8 (0x0804FFB8)
    u32 (*slot_12_0x30)(void* self); // -> 0x080159D0 (0x080159D0)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804ECF0 (0x0804ECF0)
};

// VTable at 0x0804AB6C (13 virtual methods)
// Installed by: loc_08048424@0804842A
struct Class_0804AB6C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080105FA (sub_080105FA)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801088A (0x0801088A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F320 (sub_0804F320)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080107FC (0x080107FC)
    u32 (*slot_04_0x10)(void* self); // -> 0x08051514 (0x08051514)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E6D8 (0x0804E6D8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FFD0 (0x0804FFD0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FB88 (0x0804FB88)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804ED08 (0x0804ED08)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804F054 (0x0804F054)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804F064 (0x0804F064)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804F05C (0x0804F05C)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F058 (0x0804F058)
};

// VTable at 0x0804ABA0 (10 virtual methods)
// Installed by: Object_Construct3@08011886;loc_08050FDA@08050FE4;sub_08051550@08051556
struct Class_0804ABA0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051550 (sub_08051550)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDE8 (sub_0804FDE8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4CC (0x0804E4CC)
    u32 (*slot_09_0x24)(void* self); // -> 0x080118D4 (sub_080118D4)
};

// VTable at 0x0804ABC8 (4 virtual methods)
// Installed by: loc_08039F2A@08039F2E;sub_0803A052@0803A064
struct Class_0804ABC8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051598 (0x08051598)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08039F4E (sub_08039F4E)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
};

// VTable at 0x0804ABD8 (12 virtual methods)
// Installed by: Bg_WriteScroll0AndBlendAlpha@08030C3E;Blend_WriteControlAndAlpha5@08030F80
struct Class_0804ABD8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08030F78 (Blend_WriteControlAndAlpha5)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08030FB4 (sub_08030FB4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FE1C (0x0804FE1C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4D8 (sub_0804E4D8)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
    u32 (*slot_10_0x28)(void* self); // -> 0x08030FB8 (sub_08030FB8)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FBFC (sub_0804FBFC)
};

// VTable at 0x0804AC20 (15 virtual methods)
// Installed by: sub_0800EB7C@0800EBA8;sub_0800EC34@0800EC3C
struct Class_0804AC20_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800EC34 (sub_0800EC34)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800EF08 (loc_0800EF08)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800EF38 (0x0800EF38)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F4C0 (sub_0800F4C0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800F40E (loc_0800F40E)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804ED58 (0x0804ED58)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB84 (0x0804FB84)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800EF66 (0x0800EF66)
};

// VTable at 0x0804AC5C (11 virtual methods)
// Installed by: sub_0802E444@0802E474
struct Class_0804AC5C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080515AC (sub_080515AC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802E65C (0x0802E65C)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802E568 (sub_0802E568)
};

// VTable at 0x0804AC88 (11 virtual methods)
// Installed by: sub_08006EE8@08006FA4
struct Class_0804AC88_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080515E8 (0x080515E8)
    u32 (*slot_01_0x04)(void* self); // -> 0x080158F4 (sub_080158F4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080150F4 (sub_080150F4)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08015516 (sub_08015516)
    u32 (*slot_09_0x24)(void* self); // -> 0x080154D4 (sub_080154D4)
    u32 (*slot_10_0x28)(void* self); // -> 0x080157A4 (0x080157A4)
};

// VTable at 0x0804ACB4 (11 virtual methods)
// Installed by: sub_08016AFE@08016B3A
struct Class_0804ACB4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051600 (sub_08051600)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801E1E8 (sub_0801E1E8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801E2F0 (sub_0801E2F0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0801E310 (sub_0801E310)
    u32 (*slot_08_0x20)(void* self); // -> 0x0801E3EA (sub_0801E3EA)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801E318 (sub_0801E318)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801E43C (sub_0801E43C)
};

// VTable at 0x0804ACE0 (5 virtual methods)
// Installed by: sub_08007790@0800779E
struct Class_0804ACE0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F258 (sub_0804F258)
    u32 (*slot_01_0x04)(void* self); // -> 0x080125E8 (0x080125E8)
    u32 (*slot_02_0x08)(void* self); // -> 0x08007774 (0x08007774)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F9C0 (0x0804F9C0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FBD0 (0x0804FBD0)
};

// VTable at 0x0804ACF4 (5 virtual methods)
// Installed by: sub_080481A8@080481AE;sub_080481A8@080481B4;sub_080481A8@080481C0;sub_080481A8@080481CA
struct Class_0804ACF4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F260 (sub_0804F260)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800717C (sub_0800717C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08007168 (0x08007168)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F9C0 (0x0804F9C0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FBD0 (0x0804FBD0)
};

// VTable at 0x0804AD08 (4 virtual methods)
// Installed by: sub_0803CB14@0803CB22
struct Class_0804AD08_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803CA3A (sub_0803CA3A)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803CAFE (sub_0803CAFE)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F264 (sub_0804F264)
};

// VTable at 0x0804AD18 (4 virtual methods)
// Installed by: sub_0802F5C4@0802F5D2
struct Class_0804AD18_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802F570 (0x0802F570)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802F580 (sub_0802F580)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802F5C2 (0x0802F5C2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F26C (sub_0804F26C)
};

// VTable at 0x0804AD28 (8 virtual methods)
// Installed by: sub_08048C60@08048C6A
struct Class_0804AD28_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08035FF6 (sub_08035FF6)
    u32 (*slot_01_0x04)(void* self); // -> 0x08036044 (sub_08036044)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F274 (sub_0804F274)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080369C0 (0x080369C0)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F268 (0x0804F268)
};

// VTable at 0x0804AD48 (4 virtual methods)
// Installed by: loc_08048BEC@08048BF0
struct Class_0804AD48_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E6F8 (sub_0804E6F8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FFF0 (0x0804FFF0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F280 (sub_0804F280)
};

// VTable at 0x0804AD58 (4 virtual methods)
// Installed by: sub_080485B8@080485C2
struct Class_0804AD58_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08023FA8 (sub_08023FA8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08024012 (0x08024012)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F284 (sub_0804F284)
};

// VTable at 0x0804AD68 (4 virtual methods)
// Installed by: sub_0802F918@0802F926
struct Class_0804AD68_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802F74C (sub_0802F74C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802F8DA (sub_0802F8DA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F288 (sub_0804F288)
};

// VTable at 0x0804AD78 (4 virtual methods)
// Installed by: sub_08048544@08048548
struct Class_0804AD78_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801D004 (0x0801D004)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F290 (sub_0804F290)
};

// VTable at 0x0804AD88 (4 virtual methods)
// Installed by: sub_08048C8C@08048C9A
struct Class_0804AD88_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08037A42 (sub_08037A42)
    u32 (*slot_01_0x04)(void* self); // -> 0x08037A56 (sub_08037A56)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F294 (sub_0804F294)
};

// VTable at 0x0804AD98 (6 virtual methods)
// Installed by: sub_0803634E@0803636E
struct Class_0804AD98_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080342A8 (0x080342A8)
    u32 (*slot_01_0x04)(void* self); // -> 0x080342AE (sub_080342AE)
    u32 (*slot_02_0x08)(void* self); // -> 0x08034306 (0x08034306)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0803431C (sub_0803431C)
    u32 (*slot_04_0x10)(void* self); // -> 0x08051618 (sub_08051618)
    u32 (*slot_05_0x14)(void* self); // -> 0x080361B8 (sub_080361B8)
};

// VTable at 0x0804ADB0 (4 virtual methods)
// Installed by: sub_08048ADC@08048AE0
struct Class_0804ADB0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E714 (0x0804E714)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FFF4 (loc_0804FFF4)
    u32 (*slot_02_0x08)(void* self); // -> 0x08033B4C (0x08033B4C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F298 (sub_0804F298)
};

// VTable at 0x0804ADC0 (4 virtual methods)
// Installed by: sub_0803BD64@0803BD7E
struct Class_0804ADC0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803BC2C (sub_0803BC2C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803BCAA (sub_0803BCAA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0803BD06 (sub_0803BD06)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F29C (sub_0804F29C)
};

// VTable at 0x0804ADD0 (4 virtual methods)
// Installed by: sub_0802D76C@0802D780
struct Class_0804ADD0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E784 (0x0804E784)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802D650 (sub_0802D650)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2A0 (sub_0804F2A0)
};

// VTable at 0x0804ADE0 (4 virtual methods)
// Installed by: sub_0802D62C@0802D63A
struct Class_0804ADE0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E79C (0x0804E79C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802D4B0 (0x0802D4B0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2A8 (sub_0804F2A8)
};

// VTable at 0x0804ADF0 (9 virtual methods)
// Installed by: sub_080485E4@080485E8
struct Class_0804ADF0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080264D4 (sub_080264D4)
    u32 (*slot_01_0x04)(void* self); // -> 0x080264EA (sub_080264EA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804AE14 (9 virtual methods)
// Installed by: sub_080484EC@080484F4
struct Class_0804AE14_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x08018C24 (0x08018C24)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800E050 (sub_0800E050)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804AE38 (14 virtual methods)
// Installed by: sub_08027424@08027434
struct Class_0804AE38_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E524 (0x0804E524)
    u32 (*slot_01_0x04)(void* self); // -> 0x08027484 (0x08027484)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080274A6 (sub_080274A6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0805160C (0x0805160C)
    u32 (*slot_10_0x28)(void* self); // -> 0x08023C94 (0x08023C94)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08023E04 (0x08023E04)
    u32 (*slot_12_0x30)(void* self); // -> 0x08023EC2 (0x08023EC2)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804ECF0 (0x0804ECF0)
};

// VTable at 0x0804AE70 (16 virtual methods)
// Installed by: sub_08023FA8@08023FBE;sub_0802ACB2@0802ACE8;sub_0802B332@0802B368;sub_0802E1D8@0802E1EE;sub_08033132@0803314A;sub_08033E
struct Class_0804AE70_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051648 (sub_08051648)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E548 (sub_0804E548)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801599C (0x0801599C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB94 (sub_0804FB94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED28 (0x0804ED28)
    u32 (*slot_05_0x14)(void* self); // -> 0x0805164C (0x0805164C)
    u32 (*slot_06_0x18)(void* self); // -> 0x08020548 (0x08020548)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08020590 (0x08020590)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FB94 (sub_0804FB94)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804ED00 (0x0804ED00)
    u32 (*slot_10_0x28)(void* self); // -> 0x080205CC (0x080205CC)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0805164C (0x0805164C)
    u32 (*slot_12_0x30)(void* self); // -> 0x08015A34 (0x08015A34)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FE90 (0x0804FE90)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FB68 (sub_0804FB68)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804ECE8 (0x0804ECE8)
};

// VTable at 0x0804AEB0 (3 virtual methods)
// Installed by: sub_0801244A@08012460
struct Class_0804AEB0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051690 (sub_08051690)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F9D0 (sub_0804F9D0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEA8 (0x0804FEA8)
};

// VTable at 0x0804AEBC (11 virtual methods)
// Installed by: sub_0801E84A@0801E894;sub_0801E8DA@0801E906
struct Class_0804AEBC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080516A4 (sub_080516A4)
    u32 (*slot_01_0x04)(void* self); // -> 0x08024048 (0x08024048)
    u32 (*slot_02_0x08)(void* self); // -> 0x080240B0 (sub_080240B0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080240B8 (0x080240B8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x080242C2 (sub_080242C2)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802428E (sub_0802428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x0804AEE8 (4 virtual methods)
// Installed by: sub_080482A4@080482A8
struct Class_0804AEE8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080516BC (0x080516BC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800A268 (0x0800A268)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800A26A (sub_0800A26A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
};

// VTable at 0x0804AEF8 (11 virtual methods)
// Installed by: sub_080206D6@08020706
struct Class_0804AEF8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08020768 (0x08020768)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08020CB8 (sub_08020CB8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08020CC8 (0x08020CC8)
    u32 (*slot_04_0x10)(void* self); // -> 0x08020DAC (0x08020DAC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802105C (0x0802105C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08020FC4 (sub_08020FC4)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802084C (sub_0802084C)
};

// VTable at 0x0804AF24 (11 virtual methods)
// Installed by: sub_08036FC6@08036FF2;Object_Destroy21@080370D4
struct Class_0804AF24_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080370CC (Object_Destroy21)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08037264 (sub_08037264)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08037274 (0x08037274)
    u32 (*slot_04_0x10)(void* self); // -> 0x08037376 (sub_08037376)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0803746C (sub_0803746C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08037446 (sub_08037446)
    u32 (*slot_10_0x28)(void* self); // -> 0x0803710C (sub_0803710C)
};

// VTable at 0x0804AF50 (10 virtual methods)
// Installed by: sub_08036A5C@08036A8A
struct Class_0804AF50_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080516D0 (sub_080516D0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08036AC2 (0x08036AC2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08036B9C (0x08036B9C)
    u32 (*slot_04_0x10)(void* self); // -> 0x08036BF6 (sub_08036BF6)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08036C4E (sub_08036C4E)
};

// VTable at 0x0804AF78 (21 virtual methods)
// Installed by: sub_0803087E@080308B0
struct Class_0804AF78_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805170C (0x0805170C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08030980 (0x08030980)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
    u32 (*slot_10_0x28)(void* self); // -> 0x08051720 (0x08051720)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080242C4 (0x080242C4)
    u32 (*slot_12_0x30)(void* self); // -> 0x080243C4 (0x080243C4)
    u32 (*slot_13_0x34)(void* self); // -> 0x080067AE (0x080067AE)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FD78 (0x0804FD78)
    u32 (*slot_15_0x3C)(void* self); // -> 0x080243CC (0x080243CC)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804FCA4 (0x0804FCA4)
    u32 (*slot_17_0x44)(void* self); // -> 0x08006778 (0x08006778)
    u32 (*slot_18_0x48)(void* self); // -> 0x0802429A (0x0802429A)
    u32 (*slot_19_0x4C)(void* self); // -> 0x08024266 (0x08024266)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FD9C (0x0804FD9C)
};

// VTable at 0x0804AFCC (11 virtual methods)
// Installed by: sub_0801D0C4@0801D0DC
struct Class_0804AFCC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051760 (sub_08051760)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801D15C (sub_0801D15C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801D25C (sub_0801D25C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0801D27C (0x0801D27C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0801D420 (0x0801D420)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801D294 (sub_0801D294)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801D576 (sub_0801D576)
};

// VTable at 0x0804AFF8 (11 virtual methods)
// Installed by: sub_08017500@0801753E
struct Class_0804AFF8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051778 (sub_08051778)
    u32 (*slot_01_0x04)(void* self); // -> 0x08029014 (sub_08029014)
    u32 (*slot_02_0x08)(void* self); // -> 0x08029118 (sub_08029118)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x080292E0 (0x080292E0)
    u32 (*slot_09_0x24)(void* self); // -> 0x08029192 (sub_08029192)
    u32 (*slot_10_0x28)(void* self); // -> 0x08029372 (sub_08029372)
};

// VTable at 0x0804B024 (11 virtual methods)
// Installed by: loc_08017174@0801718A
struct Class_0804B024_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051790 (sub_08051790)
    u32 (*slot_01_0x04)(void* self); // -> 0x080171A8 (sub_080171A8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0801765E (0x0801765E)
    u32 (*slot_08_0x20)(void* self); // -> 0x080174E8 (0x080174E8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08017350 (sub_08017350)
    u32 (*slot_10_0x28)(void* self); // -> 0x080175FC (sub_080175FC)
};

// VTable at 0x0804B050 (8 virtual methods)
// Installed by: loc_080505C6@08050604
struct Class_0804B050_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080517A8 (0x080517A8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F968 (sub_0804F968)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FD0C (0x0804FD0C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0801ED06 (sub_0801ED06)
};

// VTable at 0x0804B070 (4 virtual methods)
// Installed by: sub_080076D6@080076E0
struct Class_0804B070_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080517BC (sub_080517BC)
    u32 (*slot_01_0x04)(void* self); // -> 0x080076B4 (0x080076B4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB90 (0x0804FB90)
};

// VTable at 0x0804B080 (4 virtual methods)
// Installed by: sub_080369B2@080369CC
struct Class_0804B080_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802A00C (0x0802A00C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08036988 (0x08036988)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2B0 (sub_0804F2B0)
};

// VTable at 0x0804B090 (4 virtual methods)
// Installed by: sub_08048C18@08048C22
struct Class_0804B090_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E7A4 (sub_0804E7A4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FFF8 (loc_0804FFF8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F620 (sub_0804F620)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2B8 (sub_0804F2B8)
};

// VTable at 0x0804B0A0 (14 virtual methods)
// Installed by: sub_080489D8@080489E2
struct Class_0804B0A0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E7C0 (0x0804E7C0)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050010 (0x08050010)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2BC (sub_0804F2BC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08018850 (0x08018850)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F2B0 (sub_0804F2B0)
    u32 (*slot_08_0x20)(void* self); // -> 0x08034288 (0x08034288)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803428E (0x0803428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x080342E6 (0x080342E6)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080342FC (0x080342FC)
    u32 (*slot_12_0x30)(void* self); // -> 0x080517C4 (0x080517C4)
    u32 (*slot_13_0x34)(void* self); // -> 0x0803D354 (0x0803D354)
};

// VTable at 0x0804B0D8 (4 virtual methods)
// Installed by: sub_08048894@08048898
struct Class_0804B0D8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802DE28 (sub_0802DE28)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F62C (0x0804F62C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2C8 (sub_0804F2C8)
};

// VTable at 0x0804B0E8 (10 virtual methods)
// Installed by: sub_08048DA8@08048DAC
struct Class_0804B0E8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E7DC (0x0804E7DC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050028 (0x08050028)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2CC (sub_0804F2CC)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x080517EC (0x080517EC)
    u32 (*slot_09_0x24)(void* self); // -> 0x08037B38 (0x08037B38)
};

// VTable at 0x0804B110 (10 virtual methods)
// Installed by: sub_08048600@0804860A
struct Class_0804B110_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080266D8 (sub_080266D8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08026726 (0x08026726)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2D0 (sub_0804F2D0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08051804 (0x08051804)
    u32 (*slot_09_0x24)(void* self); // -> 0x08029B48 (0x08029B48)
};

// VTable at 0x0804B138 (4 virtual methods)
// Installed by: sub_08039982@08039990
struct Class_0804B138_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E800 (0x0804E800)
    u32 (*slot_01_0x04)(void* self); // -> 0x08039956 (sub_08039956)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2D4 (sub_0804F2D4)
};

// VTable at 0x0804B148 (4 virtual methods)
// Installed by: sub_08048AAC@08048AB0
struct Class_0804B148_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x08032DC8 (sub_08032DC8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2DC (sub_0804F2DC)
};

// VTable at 0x0804B158 (4 virtual methods)
// Installed by: sub_0804883C@08048840
struct Class_0804B158_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802CD84 (sub_0802CD84)
    u32 (*slot_01_0x04)(void* self); // -> 0x0805002C (sub_0805002C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2E0 (sub_0804F2E0)
};

// VTable at 0x0804B168 (4 virtual methods)
// Installed by: sub_080487EC@080487F0
struct Class_0804B168_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802C1B0 (0x0802C1B0)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050030 (0x08050030)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2E4 (sub_0804F2E4)
};

// VTable at 0x0804B178 (14 virtual methods)
// Installed by: sub_080487FC@08048800
struct Class_0804B178_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802C1DC (0x0802C1DC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2E8 (sub_0804F2E8)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0805181C (0x0805181C)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804EDE0 (0x0804EDE0)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804E4D8 (sub_0804E4D8)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0802F212 (sub_0802F212)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F548 (0x0804F548)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804F2C4 (0x0804F2C4)
};

// VTable at 0x0804B1B0 (4 virtual methods)
// Installed by: sub_08048AFC@08048B0A
struct Class_0804B1B0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E808 (sub_0804E808)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050034 (sub_08050034)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2F4 (sub_0804F2F4)
};

// VTable at 0x0804B1C0 (4 virtual methods)
// Installed by: sub_08037C06@08037C14
struct Class_0804B1C0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E824 (0x0804E824)
    u32 (*slot_01_0x04)(void* self); // -> 0x08037BBC (sub_08037BBC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F638 (0x0804F638)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F2F8 (sub_0804F2F8)
};

// VTable at 0x0804B1D0 (4 virtual methods)
// Installed by: sub_0804880C@0804881A
struct Class_0804B1D0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802C464 (0x0802C464)
    u32 (*slot_01_0x04)(void* self); // -> 0x0805004C (0x0805004C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F300 (sub_0804F300)
};

// VTable at 0x0804B1E0 (4 virtual methods)
// Installed by: sub_0802C672@0802C680
struct Class_0804B1E0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802C4C8 (0x0802C4C8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802C644 (sub_0802C644)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F304 (sub_0804F304)
};

// VTable at 0x0804B1F0 (4 virtual methods)
// Installed by: sub_0804884C@08048856
struct Class_0804B1F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802D16C (sub_0802D16C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802D1BA (sub_0802D1BA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F30C (sub_0804F30C)
};

// VTable at 0x0804B200 (4 virtual methods)
// Installed by: loc_080487D4@080487DA
struct Class_0804B200_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802C12E (sub_0802C12E)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802C17C (0x0802C17C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F310 (sub_0804F310)
};

// VTable at 0x0804B210 (4 virtual methods)
// Installed by: sub_080353D0@080353DE
struct Class_0804B210_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E834 (sub_0804E834)
    u32 (*slot_01_0x04)(void* self); // -> 0x08035274 (sub_08035274)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F314 (sub_0804F314)
};

// VTable at 0x0804B220 (4 virtual methods)
// Installed by: sub_08048BCC@08048BD0
struct Class_0804B220_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803516E (sub_0803516E)
    u32 (*slot_01_0x04)(void* self); // -> 0x080351EE (sub_080351EE)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F31C (sub_0804F31C)
};

// VTable at 0x0804B230 (9 virtual methods)
// Installed by: sub_0802692C@0802696A;sub_08026A26@08026ADE
struct Class_0804B230_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802697E (sub_0802697E)
    u32 (*slot_01_0x04)(void* self); // -> 0x08026994 (sub_08026994)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F648 (sub_0804F648)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804B254 (11 virtual methods)
// Installed by: sub_080400C2@080400D0
struct Class_0804B254_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051844 (0x08051844)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050230 (0x08050230)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F940 (0x0804F940)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804113C (sub_0804113C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804114A (0x0804114A)
    u32 (*slot_05_0x14)(void* self); // -> 0x080417F0 (sub_080417F0)
    u32 (*slot_06_0x18)(void* self); // -> 0x080501FC (sub_080501FC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F938 (0x0804F938)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804ED64 (0x0804ED64)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC0C (sub_0804FC0C)
    u32 (*slot_10_0x28)(void* self); // -> 0x08050228 (sub_08050228)
};

// VTable at 0x0804B280 (8 virtual methods)
// Installed by: loc_08050636@08050674
struct Class_0804B280_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051858 (sub_08051858)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F964 (sub_0804F964)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FD0C (0x0804FD0C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08023770 (0x08023770)
};

// VTable at 0x0804B2A0 (15 virtual methods)
// Installed by: loc_08001ED4@08001EF0
struct Class_0804B2A0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805186C (sub_0805186C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08021270 (0x08021270)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FFDC (sub_0804FFDC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080159F4 (sub_080159F4)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
    u32 (*slot_05_0x14)(void* self); // -> 0x08051870 (0x08051870)
    u32 (*slot_06_0x18)(void* self); // -> 0x08027C1C (0x08027C1C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FEA8 (0x0804FEA8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FB80 (sub_0804FB80)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804ED00 (0x0804ED00)
    u32 (*slot_10_0x28)(void* self); // -> 0x08051874 (0x08051874)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0801836C (0x0801836C)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FE94 (0x0804FE94)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB6C (sub_0804FB6C)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804ECEC (sub_0804ECEC)
};

// VTable at 0x0804B2DC (11 virtual methods)
// Installed by: sub_080060C6@080060DE;sub_08006116@0800612C
struct Class_0804B2DC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080518B4 (0x080518B4)
    u32 (*slot_01_0x04)(void* self); // -> 0x080061B2 (sub_080061B2)
    u32 (*slot_02_0x08)(void* self); // -> 0x08006142 (sub_08006142)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08005FD4 (sub_08005FD4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
    u32 (*slot_06_0x18)(void* self); // -> 0x08006182 (sub_08006182)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080105DE (0x080105DE)
    u32 (*slot_08_0x20)(void* self); // -> 0x080106F2 (0x080106F2)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804F304 (sub_0804F304)
    u32 (*slot_10_0x28)(void* self); // -> 0x080107E0 (0x080107E0)
};

// VTable at 0x0804B308 (4 virtual methods)
// Installed by: loc_0800A1E8@0800A1F4
struct Class_0804B308_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080518C8 (sub_080518C8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800A01C (0x0800A01C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
};

// VTable at 0x0804B318 (12 virtual methods)
// Installed by: sub_0800A84E@0800A858
struct Class_0804B318_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080518DC (sub_080518DC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800A2A8 (sub_0800A2A8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800A432 (sub_0800A432)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800A64A (sub_0800A64A)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800A692 (sub_0800A692)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800A446 (sub_0800A446)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800A46C (sub_0800A46C)
    u32 (*slot_08_0x20)(void* self); // -> 0x080518D0 (0x080518D0)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804F05C (0x0804F05C)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800A868 (0x0800A868)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE78 (sub_0804FE78)
};

// VTable at 0x0804B348 (4 virtual methods)
// Installed by: sub_0804EEFC@0804EF16
struct Class_0804B348_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E344 (sub_0800E344)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E3E6 (loc_0800E3E6)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804B358 (10 virtual methods)
// Installed by: sub_0802BD6A@0802BD82
struct Class_0804B358_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051904 (sub_08051904)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802BD90 (sub_0802BD90)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800DA92 (sub_0800DA92)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800DB1C (sub_0800DB1C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800DB42 (sub_0800DB42)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800DB52 (sub_0800DB52)
};

// VTable at 0x0804B380 (11 virtual methods)
// Installed by: sub_08037EC4@08037EF0
struct Class_0804B380_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08037F8A (Object_Destroy22)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080381A0 (0x080381A0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080381B0 (0x080381B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0803828A (sub_0803828A)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x080383BE (sub_080383BE)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803832A (sub_0803832A)
    u32 (*slot_10_0x28)(void* self); // -> 0x08037FB4 (sub_08037FB4)
};

// VTable at 0x0804B3AC (11 virtual methods)
// Installed by: sub_080286F2@0802871C
struct Class_0804B3AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08028782 (Object_Destroy17)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080289E8 (sub_080289E8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080289F8 (0x080289F8)
    u32 (*slot_04_0x10)(void* self); // -> 0x08028AD2 (sub_08028AD2)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x08028BEE (sub_08028BEE)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08028B5A (sub_08028B5A)
    u32 (*slot_10_0x28)(void* self); // -> 0x080287AC (sub_080287AC)
};

// VTable at 0x0804B3D8 (10 virtual methods)
// Installed by: sub_0802BEEA@0802BF1A
struct Class_0804B3D8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805191C (sub_0805191C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802BFEC (sub_0802BFEC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802C040 (sub_0802C040)
};

// VTable at 0x0804B400 (10 virtual methods)
// Installed by: dat_0802B9BC@0802B9EC
struct Class_0804B400_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051958 (0x08051958)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802BA18 (sub_0802BA18)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802BB40 (0x0802BB40)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802BC20 (0x0802BC20)
};

// VTable at 0x0804B428 (11 virtual methods)
// Installed by: sub_0800D32E@0800D370;sub_0800D4D0@0800D4D8
struct Class_0804B428_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800D4D0 (sub_0800D4D0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800D538 (0x0800D538)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800D6D2 (sub_0800D6D2)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800DB1C (sub_0800DB1C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800D8D2 (sub_0800D8D2)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800D894 (sub_0800D894)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800D78A (sub_0800D78A)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800D72E (loc_0800D72E)
};

// VTable at 0x0804B454 (11 virtual methods)
// Installed by: sub_080197D0@080197DE
struct Class_0804B454_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051994 (0x08051994)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x080199F6 (sub_080199F6)
    u32 (*slot_10_0x28)(void* self); // -> 0x08019888 (sub_08019888)
};

// VTable at 0x0804B480 (11 virtual methods)
// Installed by: sub_0801DFFC@0801E00A
struct Class_0804B480_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080519D0 (0x080519D0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801E122 (sub_0801E122)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08019CC4 (sub_08019CC4)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801E080 (0x0801E080)
};

// VTable at 0x0804B4AC (11 virtual methods)
// Installed by: loc_08037C36@08037C44
struct Class_0804B4AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051A0C (0x08051A0C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08019CC4 (sub_08019CC4)
    u32 (*slot_10_0x28)(void* self); // -> 0x08037D1E (sub_08037D1E)
};

// VTable at 0x0804B4D8 (10 virtual methods)
// Installed by: sub_0800B608@0800B636;loc_08051A46@08051A50
struct Class_0804B4D8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051A48 (0x08051A48)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800B664 (0x0800B664)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800B6A2 (sub_0800B6A2)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800B820 (0x0800B820)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800B82C (sub_0800B82C)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800B83C (0x0800B83C)
};

// VTable at 0x0804B500 (10 virtual methods)
// Installed by: loc_0800473E@08004748
struct Class_0804B500_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051A9C (0x08051A9C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800BDA0 (sub_0800BDA0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800BE4E (sub_0800BE4E)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800BD86 (sub_0800BD86)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800BD92 (sub_0800BD92)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800BD5A (sub_0800BD5A)
};

// VTable at 0x0804B528 (10 virtual methods)
// Installed by: sub_0800BF4C@0800BF7A
struct Class_0804B528_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051AB4 (sub_08051AB4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800BF94 (sub_0800BF94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800BFCE (sub_0800BFCE)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800C060 (0x0800C060)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800C06C (sub_0800C06C)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800C094 (sub_0800C094)
};

// VTable at 0x0804B550 (11 virtual methods)
// Installed by: sub_08020102@08020104;sub_0802362E@08023692
struct Class_0804B550_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051AF0 (0x08051AF0)
    u32 (*slot_01_0x04)(void* self); // -> 0x08024574 (0x08024574)
    u32 (*slot_02_0x08)(void* self); // -> 0x080245D0 (sub_080245D0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080245D8 (0x080245D8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x080242C2 (sub_080242C2)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802428E (sub_0802428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x0804B57C (12 virtual methods)
// Installed by: sub_08006DEE@08006E04
struct Class_0804B57C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051B08 (sub_08051B08)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08006E0A (sub_08006E0A)
    u32 (*slot_10_0x28)(void* self); // -> 0x080070E4 (0x080070E4)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08007116 (0x08007116)
};

// VTable at 0x0804B5AC (11 virtual methods)
// Installed by: sub_0801E578@0801E5CA;sub_0801E5D4@0801E640;sub_0801E5D4@0801E678;sub_0801FE0C@0801FE22;sub_0801FF04@0801FF30;sub_080201
struct Class_0804B5AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051B28 (sub_08051B28)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801E7B4 (sub_0801E7B4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x0801E84A (sub_0801E84A)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801E774 (0x0801E774)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801E970 (0x0801E970)
};

// VTable at 0x0804B5D8 (11 virtual methods)
// Installed by: sub_0800342A@08003438
struct Class_0804B5D8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051B40 (0x08051B40)
    u32 (*slot_01_0x04)(void* self); // -> 0x08030000 (sub_08030000)
    u32 (*slot_02_0x08)(void* self); // -> 0x08030018 (sub_08030018)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08030038 (sub_08030038)
};

// VTable at 0x0804B604 (11 virtual methods)
// Installed by: sub_0801FD60@0801FDC0
struct Class_0804B604_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051B54 (sub_08051B54)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801EA0C (0x0801EA0C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0801ECE0 (0x0801ECE0)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x0801EC38 (sub_0801EC38)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801EBFE (sub_0801EBFE)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801ED02 (sub_0801ED02)
};

// VTable at 0x0804B630 (4 virtual methods)
// Installed by: sub_08048CAC@08048CB6
struct Class_0804B630_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08037E2C (sub_08037E2C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08037E7A (0x08037E7A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F324 (sub_0804F324)
};

// VTable at 0x0804B640 (10 virtual methods)
// Installed by: sub_0802C6B0@0802C6B2
struct Class_0804B640_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E850 (0x0804E850)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802C6EC (sub_0802C6EC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F328 (sub_0804F328)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08051B5C (0x08051B5C)
    u32 (*slot_09_0x24)(void* self); // -> 0x08035E7C (0x08035E7C)
};

// VTable at 0x0804B668 (4 virtual methods)
// Installed by: sub_08048CC8@08048CD2
struct Class_0804B668_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E85C (sub_0804E85C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050060 (0x08050060)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F330 (sub_0804F330)
};

// VTable at 0x0804B678 (4 virtual methods)
// Installed by: sub_0803C07A@0803C088
struct Class_0804B678_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803BF28 (0x0803BF28)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803BFFC (sub_0803BFFC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0803C04A (sub_0803C04A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F334 (sub_0804F334)
};

// VTable at 0x0804B688 (4 virtual methods)
// Installed by: sub_08048CE4@08048CE8
struct Class_0804B688_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E878 (0x0804E878)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050078 (0x08050078)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F33C (sub_0804F33C)
};

// VTable at 0x0804B698 (14 virtual methods)
// Installed by: sub_0803B2A8@0803B2B6
struct Class_0804B698_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803B240 (List_AppendBounds1)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803B294 (0x0803B294)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F650 (0x0804F650)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F340 (sub_0804F340)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08034EC8 (0x08034EC8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F338 (0x0804F338)
    u32 (*slot_08_0x20)(void* self); // -> 0x08034288 (0x08034288)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803428E (0x0803428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x080342E6 (0x080342E6)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080342FC (0x080342FC)
    u32 (*slot_12_0x30)(void* self); // -> 0x08051B64 (0x08051B64)
    u32 (*slot_13_0x34)(void* self); // -> 0x08029A40 (sub_08029A40)
};

// VTable at 0x0804B6D0 (16 virtual methods)
// Installed by: sub_080191E8@08019208
struct Class_0804B6D0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080190DE (sub_080190DE)
    u32 (*slot_01_0x04)(void* self); // -> 0x08019162 (sub_08019162)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019138 (sub_08019138)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F3BC (sub_0804F3BC)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08051B8C (0x08051B8C)
    u32 (*slot_09_0x24)(void* self); // -> 0x080361A8 (0x080361A8)
    u32 (*slot_10_0x28)(void* self); // -> 0x08034280 (sub_08034280)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08034286 (0x08034286)
    u32 (*slot_12_0x30)(void* self); // -> 0x080342DE (0x080342DE)
    u32 (*slot_13_0x34)(void* self); // -> 0x080342F4 (0x080342F4)
    u32 (*slot_14_0x38)(void* self); // -> 0x08051B8C (0x08051B8C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804EDDC (0x0804EDDC)
};

// VTable at 0x0804B710 (4 virtual methods)
// Installed by: sub_08048ACC@08048AD0
struct Class_0804B710_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E894 (0x0804E894)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050084 (0x08050084)
    u32 (*slot_02_0x08)(void* self); // -> 0x08033908 (0x08033908)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F350 (sub_0804F350)
};

// VTable at 0x0804B720 (4 virtual methods)
// Installed by: sub_0803C72E@0803C73C
struct Class_0804B720_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803C678 (0x0803C678)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803C696 (sub_0803C696)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F354 (sub_0804F354)
};

// VTable at 0x0804B730 (4 virtual methods)
// Installed by: sub_080353FC@080355E2
struct Class_0804B730_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E904 (0x0804E904)
    u32 (*slot_01_0x04)(void* self); // -> 0x080353E2 (sub_080353E2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F35C (sub_0804F35C)
};

// VTable at 0x0804B740 (9 virtual methods)
// Installed by: sub_080486CC@080486D4
struct Class_0804B740_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DEDC (0x0800DEDC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802AD58 (0x0802AD58)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804B764 (18 virtual methods)
// Installed by: sub_08048C34@08048C38
struct Class_0804B764_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08035E3C (0x08035E3C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08035E56 (sub_08035E56)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x080305F4 (0x080305F4)
    u32 (*slot_10_0x28)(void* self); // -> 0x080307D6 (0x080307D6)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0803060C (0x0803060C)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FC94 (0x0804FC94)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FC2C (sub_0804FC2C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804ED20 (0x0804ED20)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F9B0 (0x0804F9B0)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FA6C (0x0804FA6C)
};

// VTable at 0x0804B7AC (19 virtual methods)
// Installed by: sub_08028390@0802848A
struct Class_0804B7AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E920 (0x0804E920)
    u32 (*slot_01_0x04)(void* self); // -> 0x080284AA (0x080284AA)
    u32 (*slot_02_0x08)(void* self); // -> 0x080284C0 (sub_080284C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5E8 (sub_0804F5E8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED48 (0x0804ED48)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804E908 (0x0804E908)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802E254 (0x0802E254)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE88 (0x0804FE88)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FC94 (0x0804FC94)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FC2C (sub_0804FC2C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804ED20 (0x0804ED20)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F9B0 (0x0804F9B0)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FA6C (0x0804FA6C)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FC38 (sub_0804FC38)
};

// VTable at 0x0804B7F8 (9 virtual methods)
// Installed by: loc_08048DD8@08048DDC
struct Class_0804B7F8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803CB44 (0x0803CB44)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803CB50 (sub_0803CB50)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804B81C (9 virtual methods)
// Installed by: sub_08048D78@08048D7C
struct Class_0804B81C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803A5A0 (0x0803A5A0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A5AC (sub_0803A5AC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804B840 (10 virtual methods)
// Installed by: sub_080489A8@080489B0
struct Class_0804B840_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC70 (0x0804FC70)
};

// VTable at 0x0804B868 (11 virtual methods)
// Installed by: sub_080400AC@080400BA
struct Class_0804B868_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051BCC (0x08051BCC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050234 (0x08050234)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F940 (0x0804F940)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08041864 (0x08041864)
    u32 (*slot_04_0x10)(void* self); // -> 0x08041872 (0x08041872)
    u32 (*slot_05_0x14)(void* self); // -> 0x08042204 (sub_08042204)
    u32 (*slot_06_0x18)(void* self); // -> 0x080501FC (sub_080501FC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F93C (0x0804F93C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804ED68 (0x0804ED68)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC10 (0x0804FC10)
    u32 (*slot_10_0x28)(void* self); // -> 0x08050228 (sub_08050228)
};

// VTable at 0x0804B894 (11 virtual methods)
// Installed by: loc_08021174@08021196
struct Class_0804B894_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051BE0 (sub_08051BE0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E6E8 (sub_0804E6E8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FFE0 (sub_0804FFE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB98 (sub_0804FB98)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED18 (sub_0804ED18)
    u32 (*slot_05_0x14)(void* self); // -> 0x080211A8 (sub_080211A8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F074 (sub_0804F074)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F070 (sub_0804F070)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804F068 (sub_0804F068)
    u32 (*slot_09_0x24)(void* self); // -> 0x080211FA (sub_080211FA)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804ED10 (sub_0804ED10)
};

// VTable at 0x0804B954 (4 virtual methods)
// Installed by: loc_0800A17C@0800A19A
struct Class_0804B954_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051C5C (0x08051C5C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08009E18 (0x08009E18)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
};

// VTable at 0x0804B964 (4 virtual methods)
// Installed by: loc_0800A1C2@0800A1CE
struct Class_0804B964_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051C70 (sub_08051C70)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08009E54 (sub_08009E54)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
};

// VTable at 0x0804B974 (8 virtual methods)
// Installed by: sub_0800A77C@0800A786
struct Class_0804B974_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051C84 (sub_08051C84)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800A2A8 (sub_0800A2A8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800A432 (sub_0800A432)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800A526 (sub_0800A526)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800A5A8 (sub_0800A5A8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800A446 (sub_0800A446)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800A46C (sub_0800A46C)
};

// VTable at 0x0804B994 (4 virtual methods)
// Installed by: sub_0804EF20@0804EF38
struct Class_0804B994_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E1AE (sub_0800E1AE)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E638 (sub_0800E638)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804B9A4 (4 virtual methods)
// Installed by: sub_0804EF48@0804EF62
struct Class_0804B9A4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E470 (sub_0800E470)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E4C4 (sub_0800E4C4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804B9B4 (11 virtual methods)
// Installed by: sub_080359F0@080359FE
struct Class_0804B9B4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051C98 (sub_08051C98)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08035B34 (sub_08035B34)
    u32 (*slot_10_0x28)(void* self); // -> 0x08035A80 (sub_08035A80)
};

// VTable at 0x0804B9E0 (10 virtual methods)
// Installed by: sub_0801C486@0801C4E4
struct Class_0804B9E0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051CD4 (0x08051CD4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802A7B4 (0x0802A7B4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802A904 (0x0802A904)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802A950 (sub_0802A950)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802A9A8 (sub_0802A9A8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802A9EC (sub_0802A9EC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802A9C6 (0x0802A9C6)
};

// VTable at 0x0804BA08 (18 virtual methods)
// Installed by: sub_0800FD96@0800FDAA
struct Class_0804BA08_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051D10 (0x08051D10)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800EF08 (loc_0800EF08)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F60E (0x0800F60E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x080102D8 (sub_080102D8)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804ED58 (0x0804ED58)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB84 (0x0804FB84)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
};

// VTable at 0x0804BA50 (10 virtual methods)
// Installed by: loc_08005F4A@08005F50;sub_080215B0@080215E8;sub_080222F8@0802232C;sub_080506AC@080506DC;sub_080507BE@080507EA
struct Class_0804BA50_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051D40 (sub_08051D40)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08021762 (0x08021762)
    u32 (*slot_04_0x10)(void* self); // -> 0x080217AC (sub_080217AC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08021802 (sub_08021802)
};

// VTable at 0x0804BA78 (10 virtual methods)
// Installed by: sub_0800D0BC@0800D0F8
struct Class_0804BA78_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051D7C (0x08051D7C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800CF42 (0x0800CF42)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800CF7A (sub_0800CF7A)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800D128 (0x0800D128)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800D12A (sub_0800D12A)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800CFE0 (sub_0800CFE0)
};

// VTable at 0x0804BAA0 (11 virtual methods)
// Installed by: sub_0802C7AC@0802C7B8
struct Class_0804BAA0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051DA8 (sub_08051DA8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802C8AE (sub_0802C8AE)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802C7EA (sub_0802C7EA)
};

// VTable at 0x0804BACC (10 virtual methods)
// Installed by: sub_0802FCA0@0802FCE6
struct Class_0804BACC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051DE4 (0x08051DE4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802FE36 (sub_0802FE36)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802FEEE (sub_0802FEEE)
};

// VTable at 0x0804BAF4 (10 virtual methods)
// Installed by: sub_08036454@08036484
struct Class_0804BAF4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051E28 (0x08051E28)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0803669E (sub_0803669E)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08036730 (0x08036730)
    u32 (*slot_04_0x10)(void* self); // -> 0x08036804 (sub_08036804)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08036914 (sub_08036914)
};

// VTable at 0x0804BB1C (11 virtual methods)
// Installed by: loc_08019B2E@08019B32
struct Class_0804BB1C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051E64 (0x08051E64)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08019CC4 (sub_08019CC4)
    u32 (*slot_10_0x28)(void* self); // -> 0x08046CAC (sub_08046CAC)
};

// VTable at 0x0804BB48 (11 virtual methods)
// Installed by: sub_08020370@080203AA
struct Class_0804BB48_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051E94 (0x08051E94)
    u32 (*slot_01_0x04)(void* self); // -> 0x08024120 (0x08024120)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802426E (sub_0802426E)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080067F4 (loc_080067F4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x080242C2 (sub_080242C2)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802428E (sub_0802428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x0804BB74 (12 virtual methods)
// Installed by: sub_08006DB0@08006DC8
struct Class_0804BB74_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051EAC (sub_08051EAC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08006DCE (sub_08006DCE)
    u32 (*slot_10_0x28)(void* self); // -> 0x08007132 (sub_08007132)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08007124 (0x08007124)
};

// VTable at 0x0804BBA4 (12 virtual methods)
// Installed by: sub_08005BC0@08005BC4;sub_0805072C@08050736
struct Class_0804BBA4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051ECC (sub_08051ECC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006BA0 (sub_08006BA0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080177D2 (sub_080177D2)
};

// VTable at 0x0804BBD4 (12 virtual methods)
// Installed by: sub_08002460@08002482
struct Class_0804BBD4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051EE0 (sub_08051EE0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006BA0 (sub_08006BA0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0801782C (sub_0801782C)
};

// VTable at 0x0804BC04 (11 virtual methods)
// Installed by: sub_0801FA88@0801FABE;sub_0801FC9E@0801FCDC
struct Class_0804BC04_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051EF4 (sub_08051EF4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801ED34 (0x0801ED34)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801EEAA (sub_0801EEAA)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0801EF8E (0x0801EF8E)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x0801EF5C (0x0801EF5C)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801EECA (sub_0801EECA)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x0804BC30 (18 virtual methods)
// Installed by: sub_0801F270@0801F2C8
struct Class_0804BC30_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051F0C (0x08051F0C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804E504 (sub_0804E504)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F97C (0x0804F97C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801F310 (0x0801F310)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0801F320 (sub_0801F320)
    u32 (*slot_08_0x20)(void* self); // -> 0x08034288 (0x08034288)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803428E (0x0803428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x080342E6 (0x080342E6)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080342FC (0x080342FC)
    u32 (*slot_12_0x30)(void* self); // -> 0x08051F00 (0x08051F00)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804EE04 (0x0804EE04)
    u32 (*slot_14_0x38)(void* self); // -> 0x0802B398 (0x0802B398)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0802B3B2 (0x0802B3B2)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F538 (sub_0804F538)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804F32C (0x0804F32C)
};

// VTable at 0x0804BC78 (4 virtual methods)
// Installed by: sub_08048BFC@08048C06
struct Class_0804BC78_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E938 (sub_0804E938)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050088 (0x08050088)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F65C (0x0804F65C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F36C (sub_0804F36C)
};

// VTable at 0x0804BC88 (8 virtual methods)
// Installed by: sub_08048D04@08048D08
struct Class_0804BC88_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x08039444 (0x08039444)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F370 (sub_0804F370)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080188E4 (0x080188E4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F364 (sub_0804F364)
};

// VTable at 0x0804BCA8 (6 virtual methods)
// Installed by: sub_08034294@08034298
struct Class_0804BCA8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080342A8 (0x080342A8)
    u32 (*slot_01_0x04)(void* self); // -> 0x080342AE (sub_080342AE)
    u32 (*slot_02_0x08)(void* self); // -> 0x08034306 (0x08034306)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0803431C (sub_0803431C)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034294 (sub_08034294)
    u32 (*slot_05_0x14)(void* self); // -> 0x08046CAC (sub_08046CAC)
};

// VTable at 0x0804BCC0 (4 virtual methods)
// Installed by: sub_08048948@0804894C
struct Class_0804BCC0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802E300 (sub_0802E300)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F668 (0x0804F668)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F37C (sub_0804F37C)
};

// VTable at 0x0804BCD0 (4 virtual methods)
// Installed by: loc_080488B8@080488BE
struct Class_0804BCD0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E958 (sub_0804E958)
    u32 (*slot_01_0x04)(void* self); // -> 0x080500A4 (0x080500A4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F380 (sub_0804F380)
};

// VTable at 0x0804BCE0 (4 virtual methods)
// Installed by: sub_080487A4@080487AE
struct Class_0804BCE0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802B844 (sub_0802B844)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802B88A (sub_0802B88A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F384 (sub_0804F384)
};

// VTable at 0x0804BCF0 (4 virtual methods)
// Installed by: sub_08048778@08048782
struct Class_0804BCF0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802B684 (sub_0802B684)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802B6D2 (sub_0802B6D2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F388 (sub_0804F388)
};

// VTable at 0x0804BD00 (4 virtual methods)
// Installed by: sub_08048668@08048672
struct Class_0804BD00_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080299AC (sub_080299AC)
    u32 (*slot_01_0x04)(void* self); // -> 0x080299C0 (sub_080299C0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F38C (sub_0804F38C)
};

// VTable at 0x0804BD10 (10 virtual methods)
// Installed by: sub_08039BFC@08039C0A
struct Class_0804BD10_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E974 (0x0804E974)
    u32 (*slot_01_0x04)(void* self); // -> 0x08039BE0 (0x08039BE0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F390 (sub_0804F390)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08051F28 (0x08051F28)
    u32 (*slot_09_0x24)(void* self); // -> 0x08030074 (0x08030074)
};

// VTable at 0x0804BD38 (4 virtual methods)
// Installed by: sub_08048BB0@08048BBA
struct Class_0804BD38_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E988 (sub_0804E988)
    u32 (*slot_01_0x04)(void* self); // -> 0x08034DE8 (0x08034DE8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F398 (sub_0804F398)
};

// VTable at 0x0804BD48 (4 virtual methods)
// Installed by: sub_08048B4C@08048B56
struct Class_0804BD48_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803467A (sub_0803467A)
    u32 (*slot_01_0x04)(void* self); // -> 0x080346FC (sub_080346FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F39C (sub_0804F39C)
};

// VTable at 0x0804BD58 (4 virtual methods)
// Installed by: sub_08039BBA@08039BC8
struct Class_0804BD58_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E9A4 (0x0804E9A4)
    u32 (*slot_01_0x04)(void* self); // -> 0x08039B74 (loc_08039B74)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F3A0 (sub_0804F3A0)
};

// VTable at 0x0804BD68 (4 virtual methods)
// Installed by: sub_08048BA0@08048BA4
struct Class_0804BD68_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E9AC (sub_0804E9AC)
    u32 (*slot_01_0x04)(void* self); // -> 0x080500B0 (sub_080500B0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F3A8 (sub_0804F3A8)
};

// VTable at 0x0804BD78 (4 virtual methods)
// Installed by: sub_08048A9C@08048AA0
struct Class_0804BD78_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x08032D28 (0x08032D28)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F3AC (sub_0804F3AC)
};

// VTable at 0x0804BD88 (4 virtual methods)
// Installed by: sub_0804882C@08048830
struct Class_0804BD88_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802CD20 (0x0802CD20)
    u32 (*slot_01_0x04)(void* self); // -> 0x080500D4 (sub_080500D4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F3B0 (sub_0804F3B0)
};

// VTable at 0x0804BD98 (4 virtual methods)
// Installed by: sub_0802C446@0802C454
struct Class_0804BD98_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E9E8 (sub_0804E9E8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802C3D2 (0x0802C3D2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F3B4 (sub_0804F3B4)
};

// VTable at 0x0804BDA8 (10 virtual methods)
// Installed by: sub_08019074@0801907C;loc_080190AA@080190B2;sub_0804F3BC@0804F3C6
struct Class_0804BDA8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080190DE (sub_080190DE)
    u32 (*slot_01_0x04)(void* self); // -> 0x08019108 (sub_08019108)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019138 (sub_08019138)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F3BC (sub_0804F3BC)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08051F40 (0x08051F40)
    u32 (*slot_09_0x24)(void* self); // -> 0x080331DC (0x080331DC)
};

// VTable at 0x0804BDD0 (10 virtual methods)
// Installed by: sub_0804F3F4@0804F3FC
struct Class_0804BDD0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EA0C (0x0804EA0C)
    u32 (*slot_01_0x04)(void* self); // -> 0x080500D8 (sub_080500D8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F3F4 (sub_0804F3F4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08051F58 (0x08051F58)
    u32 (*slot_09_0x24)(void* self); // -> 0x08036E94 (0x08036E94)
};

// VTable at 0x0804BDF8 (4 virtual methods)
// Installed by: sub_0803A77E@0803A78C
struct Class_0804BDF8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EA18 (0x0804EA18)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A736 (sub_0803A736)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F408 (sub_0804F408)
};

// VTable at 0x0804BE08 (4 virtual methods)
// Installed by: sub_08048240@08048244
struct Class_0804BE08_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051F80 (0x08051F80)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E520 (sub_0804E520)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F674 (sub_0804F674)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080500E4 (sub_080500E4)
};

// VTable at 0x0804BE18 (9 virtual methods)
// Installed by: sub_08048708@0804870C
struct Class_0804BE18_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802AE24 (0x0802AE24)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802AE3A (0x0802AE3A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804BE3C (9 virtual methods)
// Installed by: sub_08048724@08048728
struct Class_0804BE3C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802AEB4 (0x0802AEB4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802AEC0 (0x0802AEC0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804BE60 (9 virtual methods)
// Installed by: sub_080287EE@08028888
struct Class_0804BE60_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EA20 (0x0804EA20)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4EC (sub_0804E4EC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08028390 (sub_08028390)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5E8 (sub_0804F5E8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED48 (0x0804ED48)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804BE84 (18 virtual methods)
// Installed by: sub_0804897C@08048980
struct Class_0804BE84_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802F5EC (0x0802F5EC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802F5F8 (0x0802F5F8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x08026730 (0x08026730)
    u32 (*slot_10_0x28)(void* self); // -> 0x08026746 (0x08026746)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE88 (0x0804FE88)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FC94 (0x0804FC94)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FC2C (sub_0804FC2C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804ED20 (0x0804ED20)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F9B0 (0x0804F9B0)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FA6C (0x0804FA6C)
};

// VTable at 0x0804BECC (9 virtual methods)
// Installed by: sub_0804E9E8@0804E9FA
struct Class_0804BECC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802C350 (0x0802C350)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802C36A (0x0802C36A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F678 (sub_0804F678)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804BEF0 (9 virtual methods)
// Installed by: sub_08048494@080484A2
struct Class_0804BEF0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x08012FC4 (sub_08012FC4)
    u32 (*slot_02_0x08)(void* self); // -> 0x08012DEE (sub_08012DEE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800E050 (sub_0800E050)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804BF14 (5 virtual methods)
// Installed by: sub_08001670@080016B8
struct Class_0804BF14_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051F94 (sub_08051F94)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802CBB4 (sub_0802CBB4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEBC (sub_0804FEBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB94 (sub_0804FB94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
};

// VTable at 0x0804BF28 (5 virtual methods)
// Installed by: sub_080052C4@08005300;sub_080145D8@080145F4;loc_08016F94@08017010;sub_0801DDA2@0801DEEE
struct Class_0804BF28_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F8EC (0x0804F8EC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F92C (sub_0804F92C)
};

// VTable at 0x0804BF3C (6 virtual methods)
// Installed by: loc_08006898@0800689E
struct Class_0804BF3C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051FAC (0x08051FAC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F8FC (0x0804F8FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x080068B8 (sub_080068B8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x080069E6 (sub_080069E6)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
};

// VTable at 0x0804BF54 (7 virtual methods)
// Installed by: sub_08014046@0801405C
struct Class_0804BF54_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051FC0 (sub_08051FC0)
    u32 (*slot_01_0x04)(void* self); // -> 0x080140B2 (sub_080140B2)
    u32 (*slot_02_0x08)(void* self); // -> 0x080140D2 (sub_080140D2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08014120 (0x08014120)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FDB4 (0x0804FDB4)
};

// VTable at 0x0804BF70 (4 virtual methods)
// Installed by: loc_0800A148@0800A154;loc_0800A17C@0800A188
struct Class_0804BF70_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051FD4 (sub_08051FD4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08009E18 (0x08009E18)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
};

// VTable at 0x0804BF80 (8 virtual methods)
// Installed by: sub_0800A800@0800A80A
struct Class_0804BF80_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051FE8 (sub_08051FE8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800A2A8 (sub_0800A2A8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800A432 (sub_0800A432)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800A492 (0x0800A492)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FCC4 (sub_0804FCC4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800A446 (sub_0800A446)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800A46C (sub_0800A46C)
};

// VTable at 0x0804BFA0 (11 virtual methods)
// Installed by: sub_080293A4@080293B4
struct Class_0804BFA0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08051FFC (sub_08051FFC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08029526 (sub_08029526)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802941E (sub_0802941E)
};

// VTable at 0x0804BFCC (11 virtual methods)
// Installed by: sub_080246CE@080246DA;Object_Destroy14@08024772
struct Class_0804BFCC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08024768 (Object_Destroy14)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x080248DC (sub_080248DC)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08024978 (0x08024978)
    u32 (*slot_10_0x28)(void* self); // -> 0x080247BE (sub_080247BE)
};

// VTable at 0x0804BFF8 (10 virtual methods)
// Installed by: sub_080215B0@0802160E
struct Class_0804BFF8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052038 (0x08052038)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802163A (0x0802163A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08021834 (0x08021834)
    u32 (*slot_04_0x10)(void* self); // -> 0x080217AC (sub_080217AC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08021802 (sub_08021802)
};

// VTable at 0x0804C020 (10 virtual methods)
// Installed by: sub_08030220@08030240
struct Class_0804C020_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052074 (0x08052074)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08030274 (sub_08030274)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
};

// VTable at 0x0804C048 (10 virtual methods)
// Installed by: sub_08026B66@08026B96
struct Class_0804C048_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080520B0 (0x080520B0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08026BBC (0x08026BBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08026C62 (0x08026C62)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
};

// VTable at 0x0804C070 (10 virtual methods)
// Installed by: loc_0800BD20@0800BD24;loc_080520EA@080520F4
struct Class_0804C070_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080520EC (0x080520EC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800B530 (0x0800B530)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800B55C (sub_0800B55C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800B5C2 (0x0800B5C2)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800B5CE (sub_0800B5CE)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800B5DE (0x0800B5DE)
};

// VTable at 0x0804C098 (11 virtual methods)
// Installed by: sub_0803560A@08035634
struct Class_0804C098_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080356B2 (Object_Destroy20)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08035796 (sub_08035796)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080357A6 (0x080357A6)
    u32 (*slot_04_0x10)(void* self); // -> 0x080358A4 (0x080358A4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x080359C2 (sub_080359C2)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08035914 (sub_08035914)
    u32 (*slot_10_0x28)(void* self); // -> 0x080356DC (sub_080356DC)
};

// VTable at 0x0804C0C4 (11 virtual methods)
// Installed by: sub_0801934E@0801935E;sub_08019382@080193A6
struct Class_0804C0C4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052134 (sub_08052134)
    u32 (*slot_01_0x04)(void* self); // -> 0x08006BD0 (sub_08006BD0)
    u32 (*slot_02_0x08)(void* self); // -> 0x08006BE8 (sub_08006BE8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006C18 (sub_08006C18)
};

// VTable at 0x0804C0F0 (11 virtual methods)
// Installed by: sub_0801EC38@0801EC9A
struct Class_0804C0F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052148 (sub_08052148)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801F270 (sub_0801F270)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801F2DE (sub_0801F2DE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0801F2E6 (sub_0801F2E6)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x080242C2 (sub_080242C2)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802428E (sub_0802428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x0804C11C (4 virtual methods)
// Installed by: sub_080074DC@080074E6;sub_08007554@0800755E
struct Class_0804C11C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052160 (sub_08052160)
    u32 (*slot_01_0x04)(void* self); // -> 0x080074EC (sub_080074EC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB90 (0x0804FB90)
};

// VTable at 0x0804C12C (5 virtual methods)
// Installed by: sub_080481EC@080481F2;sub_080481EC@080481F8;sub_080481EC@08048204;sub_080481EC@0804820E
struct Class_0804C12C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F410 (sub_0804F410)
    u32 (*slot_01_0x04)(void* self); // -> 0x080125E8 (0x080125E8)
    u32 (*slot_02_0x08)(void* self); // -> 0x08007714 (sub_08007714)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800773E (sub_0800773E)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FBDC (0x0804FBDC)
};

// VTable at 0x0804C140 (4 virtual methods)
// Installed by: sub_08048DB8@08048DBC
struct Class_0804C140_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803BED0 (sub_0803BED0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803BEF6 (sub_0803BEF6)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F414 (sub_0804F414)
};

// VTable at 0x0804C150 (9 virtual methods)
// Installed by: sub_0803937C@08039380;sub_08052188@08052190
struct Class_0804C150_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EA2C (sub_0804EA2C)
    u32 (*slot_01_0x04)(void* self); // -> 0x080500E8 (sub_080500E8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F680 (sub_0804F680)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F418 (sub_0804F418)
    u32 (*slot_04_0x10)(void* self); // -> 0x08052188 (sub_08052188)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802AC9E (0x0802AC9E)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802AD0E (0x0802AD0E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804F418 (sub_0804F418)
};

// VTable at 0x0804C174 (4 virtual methods)
// Installed by: sub_0803B4C8@0803B4D6
struct Class_0804C174_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803B410 (Object_ClearFields4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803B418 (sub_0803B418)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F430 (sub_0804F430)
};

// VTable at 0x0804C184 (4 virtual methods)
// Installed by: sub_08034A0A@08034A18
struct Class_0804C184_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EA3C (sub_0804EA3C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803481C (sub_0803481C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F438 (sub_0804F438)
};

// VTable at 0x0804C194 (4 virtual methods)
// Installed by: sub_0803A2B6@0803A2C4
struct Class_0804C194_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EA58 (0x0804EA58)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A266 (sub_0803A266)
    u32 (*slot_02_0x08)(void* self); // -> 0x0803A2B4 (sub_0803A2B4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F440 (sub_0804F440)
};

// VTable at 0x0804C1A4 (4 virtual methods)
// Installed by: sub_08048794@08048798
struct Class_0804C1A4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EA60 (sub_0804EA60)
    u32 (*slot_01_0x04)(void* self); // -> 0x080500F8 (0x080500F8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F448 (sub_0804F448)
};

// VTable at 0x0804C1B4 (4 virtual methods)
// Installed by: sub_08048C7C@08048C80
struct Class_0804C1B4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x08036E60 (0x08036E60)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F44C (sub_0804F44C)
};

// VTable at 0x0804C1C4 (4 virtual methods)
// Installed by: sub_080487C0@080487C4
struct Class_0804C1C4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EA84 (0x0804EA84)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050104 (0x08050104)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F690 (0x0804F690)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F450 (sub_0804F450)
};

// VTable at 0x0804C1D4 (10 virtual methods)
// Installed by: sub_08048AEC@08048AF0
struct Class_0804C1D4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EAA0 (0x0804EAA0)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050110 (0x08050110)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F454 (sub_0804F454)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x080521A0 (0x080521A0)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802F934 (0x0802F934)
};

// VTable at 0x0804C1FC (4 virtual methods)
// Installed by: loc_08048868@08048872
struct Class_0804C1FC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802D2F0 (sub_0802D2F0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802D306 (sub_0802D306)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F458 (sub_0804F458)
};

// VTable at 0x0804C20C (4 virtual methods)
// Installed by: sub_0803CE52@0803CE60
struct Class_0804C20C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EAC4 (0x0804EAC4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803CE0E (0x0803CE0E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F45C (sub_0804F45C)
};

// VTable at 0x0804C21C (4 virtual methods)
// Installed by: sub_0802CCFE@0802CD0C
struct Class_0804C21C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802CBD4 (sub_0802CBD4)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050128 (0x08050128)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F464 (sub_0804F464)
};

// VTable at 0x0804C22C (4 virtual methods)
// Installed by: sub_0803A584@0803A592
struct Class_0804C22C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EACC (0x0804EACC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A556 (sub_0803A556)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F46C (sub_0804F46C)
};

// VTable at 0x0804C23C (9 virtual methods)
// Installed by: sub_080486EC@080486F0
struct Class_0804C23C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802ADBC (0x0802ADBC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802ADC8 (sub_0802ADC8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C260 (9 virtual methods)
// Installed by: sub_08048740@08048744
struct Class_0804C260_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802AF04 (0x0802AF04)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802AF10 (0x0802AF10)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C284 (9 virtual methods)
// Installed by: sub_08048A40@08048A4A
struct Class_0804C284_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080304E4 (sub_080304E4)
    u32 (*slot_01_0x04)(void* self); // -> 0x08030584 (0x08030584)
    u32 (*slot_02_0x08)(void* self); // -> 0x08030538 (sub_08030538)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C2A8 (18 virtual methods)
// Installed by: sub_0804875C@08048760
struct Class_0804C2A8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802B214 (0x0802B214)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802B220 (0x0802B220)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804EAB0 (0x0804EAB0)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804E4CC (0x0804E4CC)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08050108 (0x08050108)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F678 (sub_0804F678)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FC94 (0x0804FC94)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FC2C (sub_0804FC2C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804ED24 (0x0804ED24)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F9B0 (0x0804F9B0)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FA6C (0x0804FA6C)
};

// VTable at 0x0804C2F0 (9 virtual methods)
// Installed by: sub_080488D0@080488D4
struct Class_0804C2F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E524 (0x0804E524)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802DF44 (0x0802DF44)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C314 (9 virtual methods)
// Installed by: sub_080298D8@080298EC
struct Class_0804C314_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08029860 (0x08029860)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DEB0 (loc_0800DEB0)
    u32 (*slot_02_0x08)(void* self); // -> 0x080298A2 (0x080298A2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F6B0 (0x0804F6B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800E050 (sub_0800E050)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C338 (9 virtual methods)
// Installed by: sub_0803A1E0@0803A20E;loc_0803A3AC@0803A3C6
struct Class_0804C338_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803A08C (0x0803A08C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A09A (sub_0803A09A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F6BC (sub_0804F6BC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C35C (10 virtual methods)
// Installed by: sub_080482C4@0804832A
struct Class_0804C35C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DEE8 (sub_0800DEE8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800DE94 (sub_0800DE94)
};

// VTable at 0x0804C384 (9 virtual methods)
// Installed by: sub_08048494@08048498
struct Class_0804C384_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DF8A (0x0800DF8A)
    u32 (*slot_02_0x08)(void* self); // -> 0x08012D8A (sub_08012D8A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800DFAC (sub_0800DFAC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C3A8 (9 virtual methods)
// Installed by: sub_08048494@080484B2
struct Class_0804C3A8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DEB0 (loc_0800DEB0)
    u32 (*slot_02_0x08)(void* self); // -> 0x080131BA (sub_080131BA)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800E050 (sub_0800E050)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C3CC (9 virtual methods)
// Installed by: sub_0803399E@08033A12
struct Class_0804C3CC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08033978 (0x08033978)
    u32 (*slot_01_0x04)(void* self); // -> 0x08033984 (0x08033984)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F6C4 (sub_0804F6C4)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C3F0 (29 virtual methods)
// Installed by: sub_08048D58@08048D5C
struct Class_0804C3F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803A498 (0x0803A498)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A4AE (sub_0803A4AE)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x080521A4 (0x080521A4)
    u32 (*slot_10_0x28)(void* self); // -> 0x0803C4B8 (0x0803C4B8)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0803C552 (0x0803C552)
    u32 (*slot_12_0x30)(void* self); // -> 0x0803C638 (0x0803C638)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804ECF0 (0x0804ECF0)
    u32 (*slot_14_0x38)(void* self); // -> 0x080521A8 (loc_080521A8)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0803C08C (sub_0803C08C)
    u32 (*slot_16_0x40)(void* self); // -> 0x0803C10C (0x0803C10C)
    u32 (*slot_17_0x44)(void* self); // -> 0x0803C178 (0x0803C178)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804ECDC (0x0804ECDC)
    u32 (*slot_19_0x4C)(void* self); // -> 0x080521AC (0x080521AC)
    u32 (*slot_20_0x50)(void* self); // -> 0x08027C44 (0x08027C44)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FE70 (loc_0804FE70)
    u32 (*slot_22_0x58)(void* self); // -> 0x0804FB48 (0x0804FB48)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0804ECC8 (sub_0804ECC8)
    u32 (*slot_24_0x60)(void* self); // -> 0x080521B0 (0x080521B0)
    u32 (*slot_25_0x64)(void* self); // -> 0x080159A4 (0x080159A4)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804FE5C (0x0804FE5C)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804FB34 (0x0804FB34)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECB4 (0x0804ECB4)
};

// VTable at 0x0804C464 (4 virtual methods)
// Installed by: sub_08048378@0804837E
struct Class_0804C464_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EEAC (sub_0804EEAC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4F4 (sub_0804E4F4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F554 (sub_0804F554)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804C474 (4 virtual methods)
// Installed by: sub_08048378@08048398
struct Class_0804C474_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EED0 (sub_0804EED0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4F4 (sub_0804E4F4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F554 (sub_0804F554)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804C484 (33 virtual methods)
// Installed by: sub_0800F6AE@0800F6CC;sub_0800F76E@0800F776
struct Class_0804C484_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800F76E (sub_0800F76E)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800FAE6 (sub_0800FAE6)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F60E (0x0800F60E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800FAFA (sub_0800FAFA)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0800FAB6 (0x0800FAB6)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x0800FAC6 (sub_0800FAC6)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0800FD34 (sub_0800FD34)
    u32 (*slot_16_0x40)(void* self); // -> 0x0800FD44 (sub_0800FD44)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
    u32 (*slot_18_0x48)(void* self); // -> 0x0800F740 (sub_0800F740)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0800F9A2 (sub_0800F9A2)
    u32 (*slot_20_0x50)(void* self); // -> 0x0800F9C2 (0x0800F9C2)
    u32 (*slot_21_0x54)(void* self); // -> 0x0800F9EE (0x0800F9EE)
    u32 (*slot_22_0x58)(void* self); // -> 0x0800FA2A (Battle_ApplyDamage)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0800E970 (sub_0800E970)
    u32 (*slot_24_0x60)(void* self); // -> 0x0800FA80 (sub_0800FA80)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F874 (0x0804F874)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804ECB0 (0x0804ECB0)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804EC8C (0x0804EC8C)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECD4 (0x0804ECD4)
    u32 (*slot_29_0x74)(void* self); // -> 0x0800F866 (sub_0800F866)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804F860 (0x0804F860)
    u32 (*slot_31_0x7C)(void* self); // -> 0x0804FC1C (0x0804FC1C)
    u32 (*slot_32_0x80)(void* self); // -> 0x0804F8B8 (0x0804F8B8)
};

// VTable at 0x0804C508 (11 virtual methods)
// Installed by: sub_0800DCF8@0800DD06
struct Class_0804C508_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052228 (sub_08052228)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800D538 (0x0800D538)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800D6D2 (sub_0800D6D2)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800DB1C (sub_0800DB1C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800D8D2 (sub_0800D8D2)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800D894 (sub_0800D894)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800D78A (sub_0800D78A)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800DD10 (sub_0800DD10)
};

// VTable at 0x0804C534 (10 virtual methods)
// Installed by: sub_0801856C@08018598;Object_Destroy11@080185C0
struct Class_0804C534_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080185B8 (Object_Destroy11)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08018614 (loc_08018614)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080186D4 (sub_080186D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x08018696 (sub_08018696)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801870E (loc_0801870E)
};

// VTable at 0x0804C55C (11 virtual methods)
// Installed by: sub_080383EE@0803841A
struct Class_0804C55C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08038498 (Object_Destroy23)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080385F2 (sub_080385F2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08038602 (0x08038602)
    u32 (*slot_04_0x10)(void* self); // -> 0x0803870C (0x0803870C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x080387C6 (sub_080387C6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803878E (0x0803878E)
    u32 (*slot_10_0x28)(void* self); // -> 0x080384C2 (sub_080384C2)
};

// VTable at 0x0804C588 (12 virtual methods)
// Installed by: loc_080021DA@0800220C;loc_0800227E@080022A4;sub_080022B4@080022D6;sub_08002438@08002452
struct Class_0804C588_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052240 (sub_08052240)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006BA0 (sub_08006BA0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08017806 (sub_08017806)
};

// VTable at 0x0804C5B8 (12 virtual methods)
// Installed by: sub_08002496@080024B0
struct Class_0804C5B8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052254 (sub_08052254)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006BA0 (sub_08006BA0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0801785C (sub_0801785C)
};

// VTable at 0x0804C5E8 (14 virtual methods)
// Installed by: sub_0801F084@0801F0E4
struct Class_0804C5E8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052268 (sub_08052268)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802277A (sub_0802277A)
    u32 (*slot_02_0x08)(void* self); // -> 0x080226C0 (sub_080226C0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801F22A (sub_0801F22A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F984 (0x0804F984)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801F120 (0x0801F120)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0801F184 (sub_0801F184)
    u32 (*slot_08_0x20)(void* self); // -> 0x08034288 (0x08034288)
    u32 (*slot_09_0x24)(void* self); // -> 0x0803428E (0x0803428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x080342E6 (0x080342E6)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080342FC (0x080342FC)
    u32 (*slot_12_0x30)(void* self); // -> 0x0805225C (0x0805225C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804EE14 (0x0804EE14)
};

// VTable at 0x0804C620 (4 virtual methods)
// Installed by: sub_080489BC@080489C6
struct Class_0804C620_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EAF4 (sub_0804EAF4)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050130 (0x08050130)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F474 (sub_0804F474)
};

// VTable at 0x0804C630 (4 virtual methods)
// Installed by: sub_0803A474@0803A482
struct Class_0804C630_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EB10 (0x0804EB10)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A41E (sub_0803A41E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0803A472 (sub_0803A472)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F478 (sub_0804F478)
};

// VTable at 0x0804C640 (4 virtual methods)
// Installed by: sub_08029E5C@08029E6C
struct Class_0804C640_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08029D40 (0x08029D40)
    u32 (*slot_01_0x04)(void* self); // -> 0x08029DAE (sub_08029DAE)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F480 (sub_0804F480)
};

// VTable at 0x0804C650 (4 virtual methods)
// Installed by: loc_08048884@08048888
struct Class_0804C650_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802D3BC (0x0802D3BC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050148 (0x08050148)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F488 (sub_0804F488)
};

// VTable at 0x0804C660 (8 virtual methods)
// Installed by: sub_08048B1C@08048B20
struct Class_0804C660_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EB18 (sub_0804EB18)
    u32 (*slot_01_0x04)(void* self); // -> 0x0805014C (0x0805014C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F6CC (sub_0804F6CC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F48C (sub_0804F48C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804E4F0 (sub_0804E4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802CDD8 (0x0802CDD8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F480 (sub_0804F480)
};

// VTable at 0x0804C680 (4 virtual methods)
// Installed by: sub_08048D88@08048D8C
struct Class_0804C680_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EB34 (0x0804EB34)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A638 (sub_0803A638)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F498 (sub_0804F498)
};

// VTable at 0x0804C690 (9 virtual methods)
// Installed by: sub_08032FE0@08032FFA
struct Class_0804C690_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08033002 (sub_08033002)
    u32 (*slot_01_0x04)(void* self); // -> 0x080330AA (sub_080330AA)
    u32 (*slot_02_0x08)(void* self); // -> 0x08033092 (sub_08033092)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0803311C (sub_0803311C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCBC (sub_0804FCBC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FA08 (0x0804FA08)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FADC (sub_0804FADC)
};

// VTable at 0x0804C6B4 (9 virtual methods)
// Installed by: sub_0803CAD8@0803CAE6
struct Class_0804C6B4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803C8F0 (0x0803C8F0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803C9F8 (sub_0803C9F8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F6E8 (sub_0804F6E8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C6D8 (9 virtual methods)
// Installed by: sub_08048C60@08048C64
struct Class_0804C6D8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08035F8C (0x08035F8C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08035F9E (sub_08035F9E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C6FC (9 virtual methods)
// Installed by: sub_080485B8@080485BC
struct Class_0804C6FC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08023EF8 (sub_08023EF8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08023F0E (sub_08023F0E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08023F8A (0x08023F8A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C720 (9 virtual methods)
// Installed by: sub_080482C4@080482E8;sub_080482C4@080482EE
struct Class_0804C720_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DEB0 (loc_0800DEB0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C744 (9 virtual methods)
// Installed by: sub_08013022@0801305E;sub_080131BA@080131F2
struct Class_0804C744_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08012B90 (sub_08012B90)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x08012BC6 (sub_08012BC6)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08012BA2 (sub_08012BA2)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C768 (10 virtual methods)
// Installed by: loc_0801078E@080107A6
struct Class_0804C768_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08012D24 (sub_08012D24)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F6F0 (sub_0804F6F0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800DED0 (sub_0800DED0)
};

// VTable at 0x0804C790 (9 virtual methods)
// Installed by: sub_08048494@080484A8
struct Class_0804C790_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08012FE6 (sub_08012FE6)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DFD4 (sub_0800DFD4)
    u32 (*slot_02_0x08)(void* self); // -> 0x08013022 (sub_08013022)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804C7B4 (14 virtual methods)
// Installed by: sub_08048C8C@08048C94
struct Class_0804C7B4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x08037A2C (0x08037A2C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800E050 (sub_0800E050)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x08052270 (0x08052270)
    u32 (*slot_10_0x28)(void* self); // -> 0x0803C3EC (0x0803C3EC)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0803C412 (0x0803C412)
    u32 (*slot_12_0x30)(void* self); // -> 0x0803C486 (0x0803C486)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804ECF0 (0x0804ECF0)
};

// VTable at 0x0804C7EC (5 virtual methods)
// Installed by: sub_08001F00@08001F1E
struct Class_0804C7EC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080522AC (sub_080522AC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08036D84 (0x08036D84)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEBC (sub_0804FEBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB94 (sub_0804FB94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED30 (0x0804ED30)
};

// VTable at 0x0804C800 (30 virtual methods)
// Installed by: loc_08001346@08001358
struct Class_0804C800_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080522C4 (sub_080522C4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E548 (sub_0804E548)
    u32 (*slot_02_0x08)(void* self); // -> 0x08015A30 (sub_08015A30)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08015A50 (0x08015A50)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
    u32 (*slot_05_0x14)(void* self); // -> 0x080522C8 (0x080522C8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802BDB8 (0x0802BDB8)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FEA8 (0x0804FEA8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FB80 (sub_0804FB80)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804ED00 (0x0804ED00)
    u32 (*slot_10_0x28)(void* self); // -> 0x080522CC (0x080522CC)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08015A80 (0x08015A80)
    u32 (*slot_12_0x30)(void* self); // -> 0x08015A8C (0x08015A8C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB88 (0x0804FB88)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804ECEC (sub_0804ECEC)
    u32 (*slot_15_0x3C)(void* self); // -> 0x080522D0 (0x080522D0)
    u32 (*slot_16_0x40)(void* self); // -> 0x0802BC34 (0x0802BC34)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FE80 (0x0804FE80)
    u32 (*slot_18_0x48)(void* self); // -> 0x0802BCC8 (0x0802BCC8)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804ECD8 (0x0804ECD8)
    u32 (*slot_20_0x50)(void* self); // -> 0x080522D4 (0x080522D4)
    u32 (*slot_21_0x54)(void* self); // -> 0x0801627C (0x0801627C)
    u32 (*slot_22_0x58)(void* self); // -> 0x0804FE6C (0x0804FE6C)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0804FB70 (0x0804FB70)
    u32 (*slot_24_0x60)(void* self); // -> 0x0804ECC4 (0x0804ECC4)
    u32 (*slot_25_0x64)(void* self); // -> 0x080522D8 (0x080522D8)
    u32 (*slot_26_0x68)(void* self); // -> 0x0803C294 (0x0803C294)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0803C314 (0x0803C314)
    u32 (*slot_28_0x70)(void* self); // -> 0x0803C37A (0x0803C37A)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804ECB0 (0x0804ECB0)
};

// VTable at 0x0804C878 (4 virtual methods)
// Installed by: sub_0804EF6C@0804EF84
struct Class_0804C878_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E344 (sub_0800E344)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E3B0 (0x0800E3B0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804C888 (31 virtual methods)
// Installed by: sub_0800E776@0800E78A;sub_0800E814@0800E82A;Object_Destroy6@0800E866
struct Class_0804C888_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E85E (Object_Destroy6)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800EF08 (loc_0800EF08)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F60E (0x0800F60E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x080102D8 (sub_080102D8)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804ED58 (0x0804ED58)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB84 (0x0804FB84)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FE7C (sub_0804FE7C)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FE78 (sub_0804FE78)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FC18 (0x0804FC18)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FC14 (0x0804FC14)
    u32 (*slot_22_0x58)(void* self); // -> 0x0800E8E6 (Battle_SpawnDamageObject)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0800E970 (sub_0800E970)
    u32 (*slot_24_0x60)(void* self); // -> 0x0800E97E (loc_0800E97E)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F894 (0x0804F894)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804ECC0 (0x0804ECC0)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804EC9C (0x0804EC9C)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECE4 (0x0804ECE4)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FDE4 (sub_0804FDE4)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804F86C (0x0804F86C)
};

// VTable at 0x0804C904 (10 virtual methods)
// Installed by: sub_0800ABE6@0800AC16
struct Class_0804C904_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052354 (sub_08052354)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800AC40 (sub_0800AC40)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800AC64 (sub_0800AC64)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800ACB6 (sub_0800ACB6)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800AD10 (sub_0800AD10)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800AD14 (sub_0800AD14)
};

// VTable at 0x0804C92C (18 virtual methods)
// Installed by: sub_08017C3E@08017C50;Object_Destroy10@08017C98
struct Class_0804C92C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08017C90 (Object_Destroy10)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08011192 (sub_08011192)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F60E (0x0800F60E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x08017CE2 (sub_08017CE2)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08011162 (sub_08011162)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x08011172 (sub_08011172)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x08017DCA (sub_08017DCA)
    u32 (*slot_16_0x40)(void* self); // -> 0x08017DF4 (sub_08017DF4)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
};

// VTable at 0x0804C974 (10 virtual methods)
// Installed by: sub_080178E4@08017912
struct Class_0804C974_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052390 (0x08052390)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801794C (sub_0801794C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801796A (sub_0801796A)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
};

// VTable at 0x0804C99C (11 virtual methods)
// Installed by: sub_0802DB6C@0802DBA0;sub_0802DB6C@0802DBE6
struct Class_0804C99C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802DBDE (0x0802DBDE)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08019CC4 (sub_08019CC4)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802DC1A (sub_0802DC1A)
};

// VTable at 0x0804C9C8 (10 virtual methods)
// Installed by: sub_0802815C@0802818A
struct Class_0804C9C8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080523CC (0x080523CC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802821A (sub_0802821A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08028224 (sub_08028224)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
};

// VTable at 0x0804C9F0 (36 virtual methods)
// Installed by: sub_080109C8@080109D8;sub_08010B42@08010B8A;sub_08052B20@08052B2A
struct Class_0804C9F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08010B80 (0x08010B80)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08010BD2 (sub_08010BD2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x08011050 (sub_08011050)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x08010DDE (sub_08010DDE)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08010974 (sub_08010974)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x08010D26 (sub_08010D26)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FE7C (sub_0804FE7C)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FE78 (sub_0804FE78)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FC18 (0x0804FC18)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FC14 (0x0804FC14)
    u32 (*slot_22_0x58)(void* self); // -> 0x08010CB4 (sub_08010CB4)
    u32 (*slot_23_0x5C)(void* self); // -> 0x08010BF2 (sub_08010BF2)
    u32 (*slot_24_0x60)(void* self); // -> 0x08010CD0 (sub_08010CD0)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F898 (sub_0804F898)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804ECC0 (0x0804ECC0)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804EC9C (0x0804EC9C)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECE4 (0x0804ECE4)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FDE4 (sub_0804FDE4)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804F86C (0x0804F86C)
    u32 (*slot_31_0x7C)(void* self); // -> 0x08010C9C (0x08010C9C)
    u32 (*slot_32_0x80)(void* self); // -> 0x0804F840 (sub_0804F840)
    u32 (*slot_33_0x84)(void* self); // -> 0x0804F8C8 (sub_0804F8C8)
    u32 (*slot_34_0x88)(void* self); // -> 0x0804FBF0 (sub_0804FBF0)
    u32 (*slot_35_0x8C)(void* self); // -> 0x0804FC20 (0x0804FC20)
};

// VTable at 0x0804CA80 (10 virtual methods)
// Installed by: sub_080215B0@08021608;sub_080222F8@0802234C;sub_080507BE@08050808
struct Class_0804CA80_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052418 (0x08052418)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08021834 (0x08021834)
    u32 (*slot_04_0x10)(void* self); // -> 0x080217AC (sub_080217AC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08021802 (sub_08021802)
};

// VTable at 0x0804CAA8 (11 virtual methods)
// Installed by: sub_08020102@0802012E;sub_080236D8@080236F8
struct Class_0804CAA8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052454 (0x08052454)
    u32 (*slot_01_0x04)(void* self); // -> 0x08022B6C (sub_08022B6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08022D68 (sub_08022D68)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802361A (sub_0802361A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802362E (sub_0802362E)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x080232A6 (sub_080232A6)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802309C (0x0802309C)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x0804CAD4 (11 virtual methods)
// Installed by: sub_0801FD60@0801FD96
struct Class_0804CAD4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805246C (sub_0805246C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801F084 (sub_0801F084)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801F0F6 (sub_0801F0F6)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080067D6 (0x080067D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0801F0FE (sub_0801F0FE)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080067A0 (sub_080067A0)
    u32 (*slot_08_0x20)(void* self); // -> 0x080242C2 (sub_080242C2)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802428E (sub_0802428E)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FDC4 (sub_0804FDC4)
};

// VTable at 0x0804CB00 (4 virtual methods)
// Installed by: sub_08048CF4@08048CF8
struct Class_0804CB00_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050164 (0x08050164)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F49C (sub_0804F49C)
};

// VTable at 0x0804CB10 (14 virtual methods)
// Installed by: sub_0803C8BE@0803C8CC
struct Class_0804CB10_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803C82C (0x0803C82C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803C8BA (sub_0803C8BA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F4A0 (sub_0804F4A0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x08052474 (0x08052474)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804EE30 (0x0804EE30)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804EB10 (0x0804EB10)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0802E018 (0x0802E018)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F548 (0x0804F548)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804F480 (sub_0804F480)
};

// VTable at 0x0804CB48 (10 virtual methods)
// Installed by: sub_0803B356@0803B364
struct Class_0804CB48_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EB54 (0x0804EB54)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803B30E (sub_0803B30E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F4AC (sub_0804F4AC)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0805248C (0x0805248C)
    u32 (*slot_09_0x24)(void* self); // -> 0x08034564 (0x08034564)
};

// VTable at 0x0804CB70 (4 virtual methods)
// Installed by: sub_08048B84@08048B8E
struct Class_0804CB70_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08034B46 (sub_08034B46)
    u32 (*slot_01_0x04)(void* self); // -> 0x08034B94 (sub_08034B94)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F4B4 (sub_0804F4B4)
};

// VTable at 0x0804CB80 (8 virtual methods)
// Installed by: sub_08031228@08031236
struct Class_0804CB80_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EB5C (0x0804EB5C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08031004 (0x08031004)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F4B8 (sub_0804F4B8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804EB68 (0x0804EB68)
    u32 (*slot_05_0x14)(void* self); // -> 0x080314CC (0x080314CC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F4B0 (0x0804F4B0)
};

// VTable at 0x0804CBA0 (10 virtual methods)
// Installed by: sub_0804890C@08048916
struct Class_0804CBA0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802E1D8 (sub_0802E1D8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802E242 (sub_0802E242)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F4C4 (sub_0804F4C4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x080524A4 (0x080524A4)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804EE4C (0x0804EE4C)
};

// VTable at 0x0804CBC8 (9 virtual methods)
// Installed by: sub_08048C18@08048C1C
struct Class_0804CBC8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08035DE0 (0x08035DE0)
    u32 (*slot_01_0x04)(void* self); // -> 0x08035DEC (sub_08035DEC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804CBEC (9 virtual methods)
// Installed by: sub_080489D8@080489DC
struct Class_0804CBEC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802FF70 (0x0802FF70)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802FF7C (sub_0802FF7C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804CC10 (9 virtual methods)
// Installed by: sub_08048600@08048604
struct Class_0804CC10_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802660C (0x0802660C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08026618 (sub_08026618)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804CC34 (9 virtual methods)
// Installed by: sub_08048D24@08048D28
struct Class_0804CC34_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080398D0 (0x080398D0)
    u32 (*slot_01_0x04)(void* self); // -> 0x080398DC (sub_080398DC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804CC58 (10 virtual methods)
// Installed by: sub_08048520@08048528
struct Class_0804CC58_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801C1F6 (0x0801C1F6)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801C2AC (0x0801C2AC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED4C (0x0804ED4C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801C206 (0x0801C206)
};

// VTable at 0x0804CC80 (9 virtual methods)
// Installed by: sub_08048968@08048970
struct Class_0804CC80_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802F224 (0x0802F224)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800E050 (sub_0800E050)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804CCA4 (10 virtual methods)
// Installed by: sub_08048AFC@08048B00
struct Class_0804CCA4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EB94 (0x0804EB94)
    u32 (*slot_01_0x04)(void* self); // -> 0x08033CF0 (sub_08033CF0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC78 (sub_0804FC78)
};

// VTable at 0x0804CCCC (10 virtual methods)
// Installed by: sub_0804880C@08048814
struct Class_0804CCCC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC8C (sub_0804FC8C)
};

// VTable at 0x0804CCF4 (32 virtual methods)
// Installed by: sub_0804884C@08048850
struct Class_0804CCF4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802D0B0 (0x0802D0B0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802D0DC (sub_0802D0DC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802C050 (0x0802C050)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802C066 (sub_0802C066)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE88 (0x0804FE88)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FC94 (0x0804FC94)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FC2C (sub_0804FC2C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804ED20 (0x0804ED20)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F9B0 (0x0804F9B0)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FA6C (0x0804FA6C)
    u32 (*slot_18_0x48)(void* self); // -> 0x08035028 (0x08035028)
    u32 (*slot_19_0x4C)(void* self); // -> 0x08035034 (0x08035034)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FE64 (0x0804FE64)
    u32 (*slot_21_0x54)(void* self); // -> 0x080350F0 (0x080350F0)
    u32 (*slot_22_0x58)(void* self); // -> 0x0804FC70 (0x0804FC70)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0804FC08 (0x0804FC08)
    u32 (*slot_24_0x60)(void* self); // -> 0x0804ECFC (sub_0804ECFC)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F98C (0x0804F98C)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804FA48 (0x0804FA48)
    u32 (*slot_27_0x6C)(void* self); // -> 0x08052460 (0x08052460)
    u32 (*slot_28_0x70)(void* self); // -> 0x0802CA4C (0x0802CA4C)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FE50 (0x0804FE50)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804FB28 (0x0804FB28)
    u32 (*slot_31_0x7C)(void* self); // -> 0x0804ECC8 (sub_0804ECC8)
};

// VTable at 0x0804CD74 (3 virtual methods)
// Installed by: sub_08011FF2@0801200C
struct Class_0804CD74_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080524E4 (sub_080524E4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F9D0 (sub_0804F9D0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEA8 (0x0804FEA8)
};

// VTable at 0x0804CD80 (3 virtual methods)
// Installed by: loc_08012298@080122AE
struct Class_0804CD80_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080524F8 (sub_080524F8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F9CC (sub_0804F9CC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08012166 (sub_08012166)
};

// VTable at 0x0804CD8C (4 virtual methods)
// Installed by: sub_08048378@0804839E
struct Class_0804CD8C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EEDC (sub_0804EEDC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4F4 (sub_0804E4F4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F554 (sub_0804F554)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804CD9C (4 virtual methods)
// Installed by: loc_0804EF88@0804EFA8
struct Class_0804CD9C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E470 (sub_0800E470)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E4C2 (sub_0800E4C2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804CDAC (10 virtual methods)
// Installed by: loc_0800CF08@0800CF12;sub_0800D0BC@0800D0C6
struct Class_0804CDAC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805250C (sub_0805250C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800CF42 (0x0800CF42)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800CF7A (sub_0800CF7A)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FE1C (0x0804FE1C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4D8 (sub_0804E4D8)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800CFE0 (sub_0800CFE0)
};

// VTable at 0x0804CDD4 (11 virtual methods)
// Installed by: sub_08028C22@08028C4C
struct Class_0804CDD4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08028CCA (Object_Destroy18)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08028DAE (sub_08028DAE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08028DBE (0x08028DBE)
    u32 (*slot_04_0x10)(void* self); // -> 0x08028EBC (0x08028EBC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x08028FFE (sub_08028FFE)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08028F2C (sub_08028F2C)
    u32 (*slot_10_0x28)(void* self); // -> 0x08028CF4 (sub_08028CF4)
};

// VTable at 0x0804CE00 (10 virtual methods)
// Installed by: sub_0800C680@0800C682;Object_Destroy2@0800C7BE
struct Class_0804CE00_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800C7B6 (Object_Destroy2)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800C858 (0x0800C858)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800C8C2 (sub_0800C8C2)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800C8D2 (sub_0800C8D2)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800C8E2 (sub_0800C8E2)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800C8F2 (sub_0800C8F2)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800C902 (sub_0800C902)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800CA0A (sub_0800CA0A)
};

// VTable at 0x0804CE28 (10 virtual methods)
// Installed by: sub_080195C4@080195F2
struct Class_0804CE28_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052538 (sub_08052538)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019628 (sub_08019628)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019658 (sub_08019658)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801978C (sub_0801978C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801971E (sub_0801971E)
};

// VTable at 0x0804CE50 (11 virtual methods)
// Installed by: sub_08033F48@08033F56
struct Class_0804CE50_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052574 (0x08052574)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08019CC4 (sub_08019CC4)
    u32 (*slot_10_0x28)(void* self); // -> 0x08033FA4 (0x08033FA4)
};

// VTable at 0x0804CE7C (15 virtual methods)
// Installed by: sub_08027306@0802731A
struct Class_0804CE7C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080525B0 (0x080525B0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08027336 (sub_08027336)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802732C (sub_0802732C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F4C0 (sub_0800F4C0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800F40E (loc_0800F40E)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802735C (sub_0802735C)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804ED58 (0x0804ED58)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB84 (0x0804FB84)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800EF66 (0x0800EF66)
};

// VTable at 0x0804CEB8 (15 virtual methods)
// Installed by: sub_080273AA@080273C4
struct Class_0804CEB8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080525C8 (sub_080525C8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800EF08 (loc_0800EF08)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800EF38 (0x0800EF38)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F4C0 (sub_0800F4C0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800F40E (loc_0800F40E)
    u32 (*slot_10_0x28)(void* self); // -> 0x08027468 (sub_08027468)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804ED58 (0x0804ED58)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB84 (0x0804FB84)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800EF66 (0x0800EF66)
};

// VTable at 0x0804CEF4 (18 virtual methods)
// Installed by: sub_080110FA@0801110C;sub_0801113C@08011152;sub_080111D0@080111E4
struct Class_0804CEF4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080525E0 (sub_080525E0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08011192 (sub_08011192)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F60E (0x0800F60E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x080102D8 (sub_080102D8)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08011162 (sub_08011162)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x08011172 (sub_08011172)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
};

// VTable at 0x0804CF3C (10 virtual methods)
// Installed by: sub_0802A83A@0802A868
struct Class_0804CF3C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052624 (sub_08052624)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802A8AA (Object_ClearFields5)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802A904 (0x0802A904)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802A950 (sub_0802A950)
    u32 (*slot_05_0x14)(void* self); // -> 0x0802A9A8 (sub_0802A9A8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802A9EC (sub_0802A9EC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0802A9C6 (0x0802A9C6)
};

// VTable at 0x0804CF64 (12 virtual methods)
// Installed by: sub_080026D4@080026E2
struct Class_0804CF64_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052660 (0x08052660)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006BA0 (sub_08006BA0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0801957C (0x0801957C)
};

// VTable at 0x0804CF94 (5 virtual methods)
// Installed by: sub_080125FA@0801260A
struct Class_0804CF94_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F4C8 (sub_0804F4C8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804FD74 (sub_0804FD74)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804ED54 (0x0804ED54)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F9C0 (0x0804F9C0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FBD0 (0x0804FBD0)
};

// VTable at 0x0804CFA8 (4 virtual methods)
// Installed by: sub_08048C50@08048C54
struct Class_0804CFA8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08035F08 (sub_08035F08)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050174 (sub_08050174)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F4E4 (sub_0804F4E4)
};

// VTable at 0x0804CFB8 (5 virtual methods)
// Installed by: sub_080393EC@080393F0;sub_08052674@0805267C
struct Class_0804CFB8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EB9C (sub_0804EB9C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050178 (sub_08050178)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F6F8 (sub_0804F6F8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F4E8 (sub_0804F4E8)
    u32 (*slot_04_0x10)(void* self); // -> 0x08052674 (sub_08052674)
};

// VTable at 0x0804CFCC (4 virtual methods)
// Installed by: sub_080489F4@080489FE
struct Class_0804CFCC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EBAC (sub_0804EBAC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08050188 (0x08050188)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F4FC (sub_0804F4FC)
};

// VTable at 0x0804CFDC (5 virtual methods)
// Installed by: sub_080314A6@080314B6
struct Class_0804CFDC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08031388 (sub_08031388)
    u32 (*slot_01_0x04)(void* self); // -> 0x080313EA (sub_080313EA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F500 (sub_0804F500)
    u32 (*slot_04_0x10)(void* self); // -> 0x0803125C (sub_0803125C)
};

// VTable at 0x0804CFF0 (9 virtual methods)
// Installed by: sub_08048CAC@08048CB0
struct Class_0804CFF0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08037D58 (0x08037D58)
    u32 (*slot_01_0x04)(void* self); // -> 0x08037D64 (sub_08037D64)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D014 (9 virtual methods)
// Installed by: sub_08048CC8@08048CCC
struct Class_0804D014_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08039260 (0x08039260)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803926C (sub_0803926C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D038 (9 virtual methods)
// Installed by: loc_0801050E@0801052A;sub_08010548@08010558
struct Class_0804D038_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08010388 (0x08010388)
    u32 (*slot_01_0x04)(void* self); // -> 0x08010398 (0x08010398)
    u32 (*slot_02_0x08)(void* self); // -> 0x080103A6 (sub_080103A6)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F708 (sub_0804F708)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D05C (9 virtual methods)
// Installed by: sub_08019DA8@08019DC2
struct Class_0804D05C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801A7C0 (sub_0801A7C0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801A80E (sub_0801A80E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801A83E (sub_0801A83E)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801A8B0 (sub_0801A8B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801A8CE (sub_0801A8CE)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D8 (sub_0804F9D8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA94 (sub_0804FA94)
};

// VTable at 0x0804D080 (9 virtual methods)
// Installed by: sub_0801A414@0801A448
struct Class_0804D080_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801C0BA (sub_0801C0BA)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801C168 (sub_0801C168)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801C16A (sub_0801C16A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801C1CC (0x0801C1CC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9E8 (0x0804F9E8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FAAC (sub_0804FAAC)
};

// VTable at 0x0804D0A4 (6 virtual methods)
// Installed by: loc_08050842@0805084E
struct Class_0804D0A4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805269C (sub_0805269C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08020610 (sub_08020610)
    u32 (*slot_02_0x08)(void* self); // -> 0x080205A4 (sub_080205A4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FBA8 (sub_0804FBA8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
    u32 (*slot_05_0x14)(void* self); // -> 0x080205F0 (sub_080205F0)
};

// VTable at 0x0804D0BC (3 virtual methods)
// Installed by: sub_080121F6@0801222A
struct Class_0804D0BC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080526B4 (0x080526B4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F9CC (sub_0804F9CC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08012166 (sub_08012166)
};

// VTable at 0x0804D0C8 (8 virtual methods)
// Installed by: sub_0800A6D0@0800A6DA
struct Class_0804D0C8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080526C8 (sub_080526C8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800A2A8 (sub_0800A2A8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800A432 (sub_0800A432)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800A6EE (sub_0800A6EE)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800A692 (sub_0800A692)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800A446 (sub_0800A446)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800A46C (sub_0800A46C)
};

// VTable at 0x0804D0E8 (4 virtual methods)
// Installed by: loc_0804EFAC@0804EFD0
struct Class_0804D0E8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E344 (sub_0800E344)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E686 (sub_0800E686)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804D0F8 (31 virtual methods)
// Installed by: sub_0800E6D6@0800E6E4;Object_Destroy5@0800E702
struct Class_0804D0F8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E6F8 (Object_Destroy5)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800EF08 (loc_0800EF08)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F60E (0x0800F60E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x080102D8 (sub_080102D8)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804ED58 (0x0804ED58)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB84 (0x0804FB84)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FE7C (sub_0804FE7C)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FE78 (sub_0804FE78)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FC18 (0x0804FC18)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FC14 (0x0804FC14)
    u32 (*slot_22_0x58)(void* self); // -> 0x0800E8E6 (Battle_SpawnDamageObject)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0800E970 (sub_0800E970)
    u32 (*slot_24_0x60)(void* self); // -> 0x0800E97E (loc_0800E97E)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F894 (0x0804F894)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804ECC0 (0x0804ECC0)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804EC9C (0x0804EC9C)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECE4 (0x0804ECE4)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FDE4 (sub_0804FDE4)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804F86C (0x0804F86C)
};

// VTable at 0x0804D174 (17 virtual methods)
// Installed by: loc_0800F5A8@0800F5BE
struct Class_0804D174_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080526DC (sub_080526DC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800EF08 (loc_0800EF08)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800EF38 (0x0800EF38)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F60E (0x0800F60E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800F5C6 (sub_0800F5C6)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804ED58 (0x0804ED58)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB84 (0x0804FB84)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800EF66 (0x0800EF66)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
};

// VTable at 0x0804D1B8 (11 virtual methods)
// Installed by: sub_08038AF8@08038B0C
struct Class_0804D1B8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08038BB2 (Object_Destroy24)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08038EC6 (sub_08038EC6)
    u32 (*slot_04_0x10)(void* self); // -> 0x08038ED2 (sub_08038ED2)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08019CC4 (sub_08019CC4)
    u32 (*slot_10_0x28)(void* self); // -> 0x08038C32 (sub_08038C32)
};

// VTable at 0x0804D1E4 (10 virtual methods)
// Installed by: sub_0800D172@0800D17E;sub_0800D1BC@0800D1C4
struct Class_0804D1E4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800D1BC (sub_0800D1BC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800CF42 (0x0800CF42)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800CF7A (sub_0800CF7A)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800D1F8 (sub_0800D1F8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800D20E (sub_0800D20E)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800D232 (sub_0800D232)
};

// VTable at 0x0804D20C (10 virtual methods)
// Installed by: sub_08030A0C@08030A16
struct Class_0804D20C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805270C (sub_0805270C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08030A4C (0x08030A4C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08030A2C (0x08030A2C)
    u32 (*slot_04_0x10)(void* self); // -> 0x08030274 (sub_08030274)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
};

// VTable at 0x0804D234 (11 virtual methods)
// Installed by: sub_08027CD8@08027CE6
struct Class_0804D234_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052748 (0x08052748)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08019BE4 (sub_08019BE4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08019BF4 (0x08019BF4)
    u32 (*slot_04_0x10)(void* self); // -> 0x08019C44 (sub_08019C44)
    u32 (*slot_05_0x14)(void* self); // -> 0x08019CA6 (sub_08019CA6)
    u32 (*slot_06_0x18)(void* self); // -> 0x08019D00 (sub_08019D00)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08019CC4 (sub_08019CC4)
    u32 (*slot_10_0x28)(void* self); // -> 0x08027D48 (sub_08027D48)
};

// VTable at 0x0804D260 (7 virtual methods)
// Installed by: sub_080220F8@080220FC
struct Class_0804D260_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052784 (0x08052784)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802214A (0x0802214A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802214C (sub_0802214C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08022186 (sub_08022186)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x080222C2 (sub_080222C2)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
};

// VTable at 0x0804D27C (15 virtual methods)
// Installed by: loc_08015B82@08015B88
struct Class_0804D27C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052798 (sub_08052798)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4FC (sub_0804E4FC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08015B9E (sub_08015B9E)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804E4D4 (0x0804E4D4)
    u32 (*slot_12_0x30)(void* self); // -> 0x08038F00 (0x08038F00)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804F544 (0x0804F544)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804F4DC (loc_0804F4DC)
};

// VTable at 0x0804D2B8 (4 virtual methods)
// Installed by: sub_0803C7FE@0803C80E
struct Class_0804D2B8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803C74C (0x0803C74C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803C7FA (sub_0803C7FA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F510 (sub_0804F510)
};

// VTable at 0x0804D2C8 (4 virtual methods)
// Installed by: sub_080488EC@080488F0
struct Class_0804D2C8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EBC8 (0x0804EBC8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802DFD8 (sub_0802DFD8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F518 (sub_0804F518)
};

// VTable at 0x0804D2D8 (14 virtual methods)
// Installed by: sub_08048DF4@08048DF8
struct Class_0804D2D8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E500 (0x0804E500)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803D0C4 (0x0803D0C4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F51C (sub_0804F51C)
    u32 (*slot_04_0x10)(void* self); // -> 0x08034298 (0x08034298)
    u32 (*slot_05_0x14)(void* self); // -> 0x0803429E (0x0803429E)
    u32 (*slot_06_0x18)(void* self); // -> 0x080342F6 (0x080342F6)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0803430C (0x0803430C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0805279C (0x0805279C)
    u32 (*slot_09_0x24)(void* self); // -> 0x080327D0 (0x080327D0)
    u32 (*slot_10_0x28)(void* self); // -> 0x0805279C (0x0805279C)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_13_0x34)(void* self); // -> 0x080077C4 (0x080077C4)
};

// VTable at 0x0804D310 (18 virtual methods)
// Installed by: sub_08048BFC@08048C00
struct Class_0804D310_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08035BD8 (0x08035BD8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08035BE4 (sub_08035BE4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804EBC0 (0x0804EBC0)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802DE58 (0x0802DE58)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE88 (0x0804FE88)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FC94 (0x0804FC94)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FC2C (sub_0804FC2C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804ED20 (0x0804ED20)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F9B0 (0x0804F9B0)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FA6C (0x0804FA6C)
};

// VTable at 0x0804D358 (9 virtual methods)
// Installed by: sub_080487A4@080487A8
struct Class_0804D358_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802B7E8 (0x0802B7E8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802B7FE (0x0802B7FE)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D37C (9 virtual methods)
// Installed by: sub_08048778@0804877C
struct Class_0804D37C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802B5D4 (0x0802B5D4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802B5EA (sub_0802B5EA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D3A0 (10 virtual methods)
// Installed by: sub_08048D34@08048D3C
struct Class_0804D3A0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EBEC (sub_0804EBEC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FCA8 (0x0804FCA8)
};

// VTable at 0x0804D3C8 (18 virtual methods)
// Installed by: loc_08039B74@08039B8E
struct Class_0804D3C8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080399F8 (0x080399F8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08039A16 (sub_08039A16)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F710 (0x0804F710)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x08034B9C (0x08034B9C)
    u32 (*slot_10_0x28)(void* self); // -> 0x08034BBA (0x08034BBA)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE88 (0x0804FE88)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F6FC (0x0804F6FC)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FC94 (0x0804FC94)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FC2C (sub_0804FC2C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804ED20 (0x0804ED20)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F9B0 (0x0804F9B0)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FA6C (0x0804FA6C)
};

// VTable at 0x0804D410 (10 virtual methods)
// Installed by: sub_0801A464@0801A48A
struct Class_0804D410_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801C62C (sub_0801C62C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801C5CE (sub_0801C5CE)
};

// VTable at 0x0804D438 (9 virtual methods)
// Installed by: loc_0803A74C@0803A762
struct Class_0804D438_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EBFC (0x0804EBFC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A6A0 (0x0803A6A0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F730 (sub_0804F730)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D45C (9 virtual methods)
// Installed by: sub_08048BDC@08048BE0
struct Class_0804D45C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08035220 (0x08035220)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803522C (sub_0803522C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F750 (0x0804F750)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D480 (5 virtual methods)
// Installed by: sub_08001F60@08001F88
struct Class_0804D480_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080527D8 (sub_080527D8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08036DF2 (sub_08036DF2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEBC (sub_0804FEBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB94 (sub_0804FB94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED38 (0x0804ED38)
};

// VTable at 0x0804D494 (5 virtual methods)
// Installed by: sub_08001F9C@08001FCE
struct Class_0804D494_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080527F0 (sub_080527F0)
    u32 (*slot_01_0x04)(void* self); // -> 0x08036E2A (Ram_ShiftWords1)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEBC (sub_0804FEBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB94 (sub_0804FB94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED3C (0x0804ED3C)
};

// VTable at 0x0804D4A8 (5 virtual methods)
// Installed by: sub_0802B8F0@0802B908
struct Class_0804D4A8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052808 (sub_08052808)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802B960 (sub_0802B960)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEBC (sub_0804FEBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB94 (sub_0804FB94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
};

// VTable at 0x0804D4BC (10 virtual methods)
// Installed by: loc_08015B04@08015B12
struct Class_0804D4BC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052834 (sub_08052834)
    u32 (*slot_01_0x04)(void* self); // -> 0x08015B1E (sub_08015B1E)
    u32 (*slot_02_0x08)(void* self); // -> 0x080205A4 (sub_080205A4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FBA8 (sub_0804FBA8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
    u32 (*slot_05_0x14)(void* self); // -> 0x080205F0 (sub_080205F0)
    u32 (*slot_06_0x18)(void* self); // -> 0x08052848 (0x08052848)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F064 (0x0804F064)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800A200 (0x0800A200)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FE80 (0x0804FE80)
};

// VTable at 0x0804D4E4 (8 virtual methods)
// Installed by: sub_0800A606@0800A610;sub_0800A7C0@0800A7CA
struct Class_0804D4E4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052874 (sub_08052874)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800A2A8 (sub_0800A2A8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800A432 (sub_0800A432)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800A624 (sub_0800A624)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800A5A8 (sub_0800A5A8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800A446 (sub_0800A446)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800A46C (sub_0800A46C)
};

// VTable at 0x0804D504 (4 virtual methods)
// Installed by: loc_0804EFD4@0804EFF8
struct Class_0804D504_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E470 (sub_0800E470)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E69A (sub_0800E69A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804D514 (32 virtual methods)
// Installed by: sub_08039152@08039168;Object_Destroy25@0803918A
struct Class_0804D514_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08039182 (Object_Destroy25)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080391EC (sub_080391EC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800F60E (0x0800F60E)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x08039200 (sub_08039200)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x080391C0 (0x080391C0)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x080391CE (sub_080391CE)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FE7C (sub_0804FE7C)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FE78 (sub_0804FE78)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FC18 (0x0804FC18)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FC14 (0x0804FC14)
    u32 (*slot_22_0x58)(void* self); // -> 0x080391BA (sub_080391BA)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0800E970 (sub_0800E970)
    u32 (*slot_24_0x60)(void* self); // -> 0x080391BE (0x080391BE)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F894 (0x0804F894)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804ECC4 (0x0804ECC4)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804ECA0 (0x0804ECA0)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECE8 (0x0804ECE8)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FDE4 (sub_0804FDE4)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804F86C (0x0804F86C)
    u32 (*slot_31_0x7C)(void* self); // -> 0x0804FC24 (0x0804FC24)
};

// VTable at 0x0804D594 (20 virtual methods)
// Installed by: sub_08026F04@08026F16
struct Class_0804D594_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052888 (sub_08052888)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08026E6A (sub_08026E6A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08026F2A (sub_08026F2A)
    u32 (*slot_04_0x10)(void* self); // -> 0x08026EA4 (0x08026EA4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
    u32 (*slot_10_0x28)(void* self); // -> 0x0805289C (0x0805289C)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804F514 (0x0804F514)
    u32 (*slot_12_0x30)(void* self); // -> 0x08030190 (0x08030190)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FC18 (0x0804FC18)
    u32 (*slot_14_0x38)(void* self); // -> 0x0803024C (0x0803024C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804FE74 (sub_0804FE74)
    u32 (*slot_16_0x40)(void* self); // -> 0x08011534 (0x08011534)
    u32 (*slot_17_0x44)(void* self); // -> 0x08011540 (0x08011540)
    u32 (*slot_18_0x48)(void* self); // -> 0x080117F0 (0x080117F0)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FC24 (0x0804FC24)
};

// VTable at 0x0804D5E4 (10 virtual methods)
// Installed by: sub_08026FA8@08026FD6
struct Class_0804D5E4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052900 (0x08052900)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08027020 (0x08027020)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08027154 (0x08027154)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
};

// VTable at 0x0804D60C (10 virtual methods)
// Installed by: sub_080271AE@08027212
struct Class_0804D60C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0805293C (0x0805293C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08027234 (sub_08027234)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x0802726C (0x0802726C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
};

// VTable at 0x0804D634 (22 virtual methods)
// Installed by: sub_08026E24@08026E2C
struct Class_0804D634_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052978 (0x08052978)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08026E6A (sub_08026E6A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08026EA4 (0x08026EA4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
    u32 (*slot_10_0x28)(void* self); // -> 0x08034280 (sub_08034280)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08034286 (0x08034286)
    u32 (*slot_12_0x30)(void* self); // -> 0x080342DE (0x080342DE)
    u32 (*slot_13_0x34)(void* self); // -> 0x080342F4 (0x080342F4)
    u32 (*slot_14_0x38)(void* self); // -> 0x0805298C (0x0805298C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x08039074 (0x08039074)
    u32 (*slot_16_0x40)(void* self); // -> 0x08034268 (0x08034268)
    u32 (*slot_17_0x44)(void* self); // -> 0x0803426E (0x0803426E)
    u32 (*slot_18_0x48)(void* self); // -> 0x080342C6 (0x080342C6)
    u32 (*slot_19_0x4C)(void* self); // -> 0x080342DC (0x080342DC)
    u32 (*slot_20_0x50)(void* self); // -> 0x0805298C (0x0805298C)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804EE30 (0x0804EE30)
};

// VTable at 0x0804D68C (4 virtual methods)
// Installed by: sub_08048D48@08048D4C
struct Class_0804D68C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EC04 (sub_0804EC04)
    u32 (*slot_01_0x04)(void* self); // -> 0x08039C14 (sub_08039C14)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F520 (sub_0804F520)
};

// VTable at 0x0804D69C (8 virtual methods)
// Installed by: sub_08048B3C@08048B40
struct Class_0804D69C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080344CA (0x080344CA)
    u32 (*slot_01_0x04)(void* self); // -> 0x08034502 (0x08034502)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F524 (sub_0804F524)
    u32 (*slot_04_0x10)(void* self); // -> 0x08033E68 (0x08033E68)
    u32 (*slot_05_0x14)(void* self); // -> 0x08033EC6 (0x08033EC6)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804F560 (0x0804F560)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F518 (sub_0804F518)
};

// VTable at 0x0804D6BC (4 virtual methods)
// Installed by: sub_08048684@08048688
struct Class_0804D6BC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EC08 (sub_0804EC08)
    u32 (*slot_01_0x04)(void* self); // -> 0x080501A0 (0x080501A0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F52C (sub_0804F52C)
};

// VTable at 0x0804D6CC (9 virtual methods)
// Installed by: sub_0803BED0@0803BEE0
struct Class_0804D6CC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803BD94 (0x0803BD94)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803BE02 (sub_0803BE02)
    u32 (*slot_02_0x08)(void* self); // -> 0x0803BE04 (sub_0803BE04)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0803BEB2 (sub_0803BEB2)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D6F0 (9 virtual methods)
// Installed by: sub_080486B0@080486B4
struct Class_0804D6F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802AB10 (0x0802AB10)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802AB1C (sub_0802AB1C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802AC80 (0x0802AC80)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D714 (9 virtual methods)
// Installed by: sub_0803B46A@0803B4A0
struct Class_0804D714_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803B370 (0x0803B370)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803B37E (sub_0803B37E)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F75C (sub_0804F75C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D738 (9 virtual methods)
// Installed by: sub_0803A266@0803A28A
struct Class_0804D738_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803A138 (0x0803A138)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A1E0 (sub_0803A1E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0803A146 (sub_0803A146)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D75C (10 virtual methods)
// Installed by: sub_08010862@08010874;sub_08012F0C@08012F34
struct Class_0804D75C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08012D64 (sub_08012D64)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800DF1C (sub_0800DF1C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08012D78 (0x08012D78)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800DE94 (sub_0800DE94)
};

// VTable at 0x0804D784 (10 virtual methods)
// Installed by: sub_080482C4@080482D2;sub_080482C4@080482DC
struct Class_0804D784_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800DE94 (sub_0800DE94)
};

// VTable at 0x0804D7AC (9 virtual methods)
// Installed by: loc_08048868@0804886C
struct Class_0804D7AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802D1E8 (0x0802D1E8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802D214 (0x0802D214)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D7D0 (9 virtual methods)
// Installed by: loc_0803CE0C@0803CE28
struct Class_0804D7D0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803CD44 (0x0803CD44)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803CD52 (sub_0803CD52)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F764 (sub_0804F764)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D7F4 (9 virtual methods)
// Installed by: sub_08048D68@08048D6C
struct Class_0804D7F4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803A52C (0x0803A52C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A538 (sub_0803A538)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D818 (5 virtual methods)
// Installed by: sub_08000D62@08000D90
struct Class_0804D818_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080529E4 (sub_080529E4)
    u32 (*slot_01_0x04)(void* self); // -> 0x08015944 (0x08015944)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEBC (sub_0804FEBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08015958 (sub_08015958)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
};

// VTable at 0x0804D82C (7 virtual methods)
// Installed by: sub_08050896@080508BA
struct Class_0804D82C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080529FC (sub_080529FC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08006248 (sub_08006248)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800620C (sub_0800620C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08005FD4 (sub_08005FD4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
    u32 (*slot_06_0x18)(void* self); // -> 0x08006182 (sub_08006182)
};

// VTable at 0x0804D848 (8 virtual methods)
// Installed by: sub_0800A4BC@0800A4C6
struct Class_0804D848_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052A10 (sub_08052A10)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F07C (sub_0804F07C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800A2A8 (sub_0800A2A8)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800A432 (sub_0800A432)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800A4F0 (0x0800A4F0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FCC4 (sub_0804FCC4)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800A446 (sub_0800A446)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800A46C (sub_0800A46C)
};

// VTable at 0x0804D868 (4 virtual methods)
// Installed by: sub_08048378@080483A4
struct Class_0804D868_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EEFC (sub_0804EEFC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800E3B2 (sub_0800E3B2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E3CE (0x0800E3CE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804D878 (10 virtual methods)
// Installed by: sub_0800C318@0800C346
struct Class_0804D878_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052A24 (sub_08052A24)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800C368 (sub_0800C368)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800C378 (0x0800C378)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0800C3EC (0x0800C3EC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800C3F8 (sub_0800C3F8)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800C408 (sub_0800C408)
};

// VTable at 0x0804D8A0 (10 virtual methods)
// Installed by: sub_080279F8@08027A26
struct Class_0804D8A0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052A60 (0x08052A60)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08027A74 (sub_08027A74)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08027B18 (sub_08027B18)
};

// VTable at 0x0804D8C8 (10 virtual methods)
// Installed by: loc_0800C104@0800C10A
struct Class_0804D8C8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052A9C (0x08052A9C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800C1BC (sub_0800C1BC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800C1D2 (sub_0800C1D2)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800C1E0 (0x0800C1E0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800C254 (sub_0800C254)
};

// VTable at 0x0804D8F0 (17 virtual methods)
// Installed by: sub_080303A0@080303A4
struct Class_0804D8F0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052AE0 (0x08052AE0)
    u32 (*slot_01_0x04)(void* self); // -> 0x080303C4 (sub_080303C4)
    u32 (*slot_02_0x08)(void* self); // -> 0x080303DC (sub_080303DC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08030404 (sub_08030404)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0803427C (0x0803427C)
    u32 (*slot_12_0x30)(void* self); // -> 0x08034282 (0x08034282)
    u32 (*slot_13_0x34)(void* self); // -> 0x080342DA (0x080342DA)
    u32 (*slot_14_0x38)(void* self); // -> 0x080342F0 (0x080342F0)
    u32 (*slot_15_0x3C)(void* self); // -> 0x08052AC8 (0x08052AC8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804EE64 (0x0804EE64)
};

// VTable at 0x0804D934 (4 virtual methods)
// Installed by: sub_08048B68@08048B72
struct Class_0804D934_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EC0C (sub_0804EC0C)
    u32 (*slot_01_0x04)(void* self); // -> 0x080501B0 (sub_080501B0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F530 (sub_0804F530)
};

// VTable at 0x0804D944 (9 virtual methods)
// Installed by: sub_080489BC@080489C0
struct Class_0804D944_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802FF28 (0x0802FF28)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802FF36 (sub_0802FF36)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D968 (9 virtual methods)
// Installed by: sub_08048B4C@08048B50
struct Class_0804D968_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08034624 (0x08034624)
    u32 (*slot_01_0x04)(void* self); // -> 0x08034630 (0x08034630)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F784 (0x0804F784)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D98C (9 virtual methods)
// Installed by: sub_0803A41E@0803A448
struct Class_0804D98C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0803A2C8 (0x0803A2C8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A398 (sub_0803A398)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0803A2D6 (sub_0803A2D6)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D9B0 (9 virtual methods)
// Installed by: sub_08019EB8@08019ED0
struct Class_0804D9B0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801AB7C (0x0801AB7C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801ABBE (sub_0801ABBE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801AB96 (sub_0801AB96)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801AD96 (0x0801AD96)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804D9D4 (9 virtual methods)
// Installed by: sub_0801A0D0@0801A0EA
struct Class_0804D9D4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801B482 (0x0801B482)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801B4EC (sub_0801B4EC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801B4A4 (sub_0801B4A4)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801B626 (0x0801B626)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9F8 (0x0804F9F8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FAC4 (sub_0804FAC4)
};

// VTable at 0x0804D9F8 (9 virtual methods)
// Installed by: sub_0801A35A@0801A374
struct Class_0804D9F8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801BDD4 (sub_0801BDD4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801BE40 (sub_0801BE40)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801BE2E (sub_0801BE2E)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801BF2C (0x0801BF2C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FA08 (0x0804FA08)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FADC (sub_0804FADC)
};

// VTable at 0x0804DA1C (9 virtual methods)
// Installed by: sub_0801A3B6@0801A3D0
struct Class_0804DA1C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801BF3E (sub_0801BF3E)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801BFAC (sub_0801BFAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801BF9A (sub_0801BF9A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801C0A8 (0x0801C0A8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FA1C (sub_0804FA1C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FAF4 (sub_0804FAF4)
};

// VTable at 0x0804DA40 (4 virtual methods)
// Installed by: sub_08048378@08048386
struct Class_0804DA40_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EF20 (sub_0804EF20)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4F4 (sub_0804E4F4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F554 (sub_0804F554)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E66E (sub_0800E66E)
};

// VTable at 0x0804DA50 (14 virtual methods)
// Installed by: sub_08048378@080483AC
struct Class_0804DA50_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EF48 (sub_0804EF48)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800E3B2 (sub_0800E3B2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E3CE (0x0800E3CE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08052AFC (0x08052AFC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804F52C (sub_0804F52C)
    u32 (*slot_06_0x18)(void* self); // -> 0x080501D0 (sub_080501D0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08026CCA (0x08026CCA)
    u32 (*slot_08_0x20)(void* self); // -> 0x08026D04 (0x08026D04)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FE8C (0x0804FE8C)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801154C (0x0801154C)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE0C (0x0804FE0C)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804E4C8 (0x0804E4C8)
    u32 (*slot_13_0x34)(void* self); // -> 0x08026D6C (0x08026D6C)
};

// VTable at 0x0804DA88 (36 virtual methods)
// Installed by: sub_08010A5C@08010A6C
struct Class_0804DA88_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052B20 (sub_08052B20)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08010BD2 (sub_08010BD2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x08011050 (sub_08011050)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x08011058 (sub_08011058)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08010974 (sub_08010974)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x08010D26 (sub_08010D26)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FE7C (sub_0804FE7C)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FE78 (sub_0804FE78)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FC18 (0x0804FC18)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FC14 (0x0804FC14)
    u32 (*slot_22_0x58)(void* self); // -> 0x08010CB4 (sub_08010CB4)
    u32 (*slot_23_0x5C)(void* self); // -> 0x08010BF2 (sub_08010BF2)
    u32 (*slot_24_0x60)(void* self); // -> 0x08010CD0 (sub_08010CD0)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F898 (sub_0804F898)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804ECC0 (0x0804ECC0)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804EC9C (0x0804EC9C)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECE4 (0x0804ECE4)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FDE4 (sub_0804FDE4)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804F86C (0x0804F86C)
    u32 (*slot_31_0x7C)(void* self); // -> 0x08010C9C (0x08010C9C)
    u32 (*slot_32_0x80)(void* self); // -> 0x0804F858 (0x0804F858)
    u32 (*slot_33_0x84)(void* self); // -> 0x0804F8C8 (sub_0804F8C8)
    u32 (*slot_34_0x88)(void* self); // -> 0x0804FBF0 (sub_0804FBF0)
    u32 (*slot_35_0x8C)(void* self); // -> 0x0804FC20 (0x0804FC20)
};

// VTable at 0x0804DB18 (36 virtual methods)
// Installed by: sub_08008E70@08008EF0;loc_08008F58@08008F70
struct Class_0804DB18_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052B60 (sub_08052B60)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08010BD2 (sub_08010BD2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x08011050 (sub_08011050)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x08011058 (sub_08011058)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08010974 (sub_08010974)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x08010D26 (sub_08010D26)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FE7C (sub_0804FE7C)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FE78 (sub_0804FE78)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FC18 (0x0804FC18)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FC14 (0x0804FC14)
    u32 (*slot_22_0x58)(void* self); // -> 0x08010CB4 (sub_08010CB4)
    u32 (*slot_23_0x5C)(void* self); // -> 0x08010BF2 (sub_08010BF2)
    u32 (*slot_24_0x60)(void* self); // -> 0x08010CD0 (sub_08010CD0)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F898 (sub_0804F898)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804ECC0 (0x0804ECC0)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804EC9C (0x0804EC9C)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECE4 (0x0804ECE4)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FDE4 (sub_0804FDE4)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804F86C (0x0804F86C)
    u32 (*slot_31_0x7C)(void* self); // -> 0x08010C9C (0x08010C9C)
    u32 (*slot_32_0x80)(void* self); // -> 0x0804F858 (0x0804F858)
    u32 (*slot_33_0x84)(void* self); // -> 0x0804F8D4 (0x0804F8D4)
    u32 (*slot_34_0x88)(void* self); // -> 0x0804FBF4 (0x0804FBF4)
    u32 (*slot_35_0x8C)(void* self); // -> 0x0804FC20 (0x0804FC20)
};

// VTable at 0x0804DBA8 (9 virtual methods)
// Installed by: loc_0803B324@0803B338
struct Class_0804DBA8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804E524 (0x0804E524)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803B2EC (0x0803B2EC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F790 (sub_0804F790)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804DBCC (9 virtual methods)
// Installed by: sub_08048B84@08048B88
struct Class_0804DBCC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08034AAC (0x08034AAC)
    u32 (*slot_01_0x04)(void* self); // -> 0x08034AB8 (0x08034AB8)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804DBF0 (9 virtual methods)
// Installed by: sub_0804890C@08048910
struct Class_0804DBF0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802E130 (0x0802E130)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802E146 (0x0802E146)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0802E1BA (0x0802E1BA)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804DC14 (18 virtual methods)
// Installed by: Bios_Diff16Unfilter@08019FA4
struct Class_0804DC14_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801AF2E (sub_0801AF2E)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801AF3C (sub_0801AF3C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801AFE2 (sub_0801AFE2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801B002 (sub_0801B002)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FA30 (sub_0804FA30)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FB0C (sub_0804FB0C)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801B236 (0x0801B236)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804E4BC (0x0804E4BC)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0801B272 (0x0801B272)
    u32 (*slot_12_0x30)(void* self); // -> 0x0801B256 (0x0801B256)
    u32 (*slot_13_0x34)(void* self); // -> 0x0801B44C (0x0801B44C)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FC2C (sub_0804FC2C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804ED20 (0x0804ED20)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F9B0 (0x0804F9B0)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FA6C (0x0804FA6C)
};

// VTable at 0x0804DC5C (9 virtual methods)
// Installed by: sub_0801A07E@0801A08E
struct Class_0804DC5C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801B00A (sub_0801B00A)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801B086 (sub_0801B086)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801B088 (sub_0801B088)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801B04A (sub_0801B04A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801B248 (0x0801B248)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804DC80 (9 virtual methods)
// Installed by: sub_0801A1E4@0801A1FA
struct Class_0804DC80_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801B874 (0x0801B874)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801B914 (sub_0801B914)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801B916 (sub_0801B916)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801B880 (sub_0801B880)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801BA98 (0x0801BA98)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804DCA4 (10 virtual methods)
// Installed by: sub_08048520@08048532
struct Class_0804DCA4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801C3EC (0x0801C3EC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801C4F4 (Math_Divide5)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801C552 (sub_0801C552)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801C5BC (sub_0801C5BC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801C312 (0x0801C312)
};

// VTable at 0x0804DCCC (10 virtual methods)
// Installed by: sub_08001E2C@08001E5C
struct Class_0804DCCC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052B78 (sub_08052B78)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802111C (0x0802111C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FFDC (sub_0804FFDC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x080159F4 (sub_080159F4)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
    u32 (*slot_05_0x14)(void* self); // -> 0x08052B7C (0x08052B7C)
    u32 (*slot_06_0x18)(void* self); // -> 0x08027BD2 (0x08027BD2)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08027BB8 (0x08027BB8)
    u32 (*slot_08_0x20)(void* self); // -> 0x08027BBA (0x08027BBA)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804ED00 (0x0804ED00)
};

// VTable at 0x0804DCF4 (30 virtual methods)
// Installed by: sub_08000F78@08000FB6
struct Class_0804DCF4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052BA8 (sub_08052BA8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08027C20 (sub_08027C20)
    u32 (*slot_02_0x08)(void* self); // -> 0x08027BCC (sub_08027BCC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08027BCE (sub_08027BCE)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
    u32 (*slot_05_0x14)(void* self); // -> 0x08052BAC (0x08052BAC)
    u32 (*slot_06_0x18)(void* self); // -> 0x0802BDE0 (0x0802BDE0)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0802BE46 (0x0802BE46)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FBB0 (sub_0804FBB0)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804ED00 (0x0804ED00)
    u32 (*slot_10_0x28)(void* self); // -> 0x08052BB0 (0x08052BB0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08020678 (sub_08020678)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FE94 (0x0804FE94)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FB6C (sub_0804FB6C)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804ECEC (sub_0804ECEC)
    u32 (*slot_15_0x3C)(void* self); // -> 0x08052BB4 (0x08052BB4)
    u32 (*slot_16_0x40)(void* self); // -> 0x0802B940 (0x0802B940)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FE80 (0x0804FE80)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FB58 (0x0804FB58)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804ECD8 (0x0804ECD8)
    u32 (*slot_20_0x50)(void* self); // -> 0x08052BB8 (0x08052BB8)
    u32 (*slot_21_0x54)(void* self); // -> 0x08016296 (0x08016296)
    u32 (*slot_22_0x58)(void* self); // -> 0x0804FE6C (0x0804FE6C)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0804FB44 (0x0804FB44)
    u32 (*slot_24_0x60)(void* self); // -> 0x0804ECC4 (0x0804ECC4)
    u32 (*slot_25_0x64)(void* self); // -> 0x08052BBC (0x08052BBC)
    u32 (*slot_26_0x68)(void* self); // -> 0x0803C17C (0x0803C17C)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0803C1FC (0x0803C1FC)
    u32 (*slot_28_0x70)(void* self); // -> 0x0803C262 (0x0803C262)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804ECB0 (0x0804ECB0)
};

// VTable at 0x0804DD6C (10 virtual methods)
// Installed by: sub_080388A0@080388D0
struct Class_0804DD6C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052C38 (sub_08052C38)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501D4 (sub_080501D4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x0803893E (sub_0803893E)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08038A84 (0x08038A84)
};

// VTable at 0x0804DD94 (36 virtual methods)
// Installed by: sub_08008EF4@08008F0E;sub_08008F10@08008F52
struct Class_0804DD94_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052C74 (0x08052C74)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08010BD2 (sub_08010BD2)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x08011050 (sub_08011050)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x08011058 (sub_08011058)
    u32 (*slot_10_0x28)(void* self); // -> 0x0800ECF0 (sub_0800ECF0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08010974 (sub_08010974)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x08010D26 (sub_08010D26)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010010 (0x08010010)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FE7C (sub_0804FE7C)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FE78 (sub_0804FE78)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FC18 (0x0804FC18)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FC14 (0x0804FC14)
    u32 (*slot_22_0x58)(void* self); // -> 0x08010CB4 (sub_08010CB4)
    u32 (*slot_23_0x5C)(void* self); // -> 0x08010BF2 (sub_08010BF2)
    u32 (*slot_24_0x60)(void* self); // -> 0x08010CD0 (sub_08010CD0)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F898 (sub_0804F898)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804ECC0 (0x0804ECC0)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804EC9C (0x0804EC9C)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECE4 (0x0804ECE4)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FDE4 (sub_0804FDE4)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804F86C (0x0804F86C)
    u32 (*slot_31_0x7C)(void* self); // -> 0x08010C9C (0x08010C9C)
    u32 (*slot_32_0x80)(void* self); // -> 0x0804F858 (0x0804F858)
    u32 (*slot_33_0x84)(void* self); // -> 0x0804F8E0 (0x0804F8E0)
    u32 (*slot_34_0x88)(void* self); // -> 0x0804FBF8 (0x0804FBF8)
    u32 (*slot_35_0x8C)(void* self); // -> 0x0804FC20 (0x0804FC20)
};

// VTable at 0x0804DE24 (4 virtual methods)
// Installed by: sub_08048D98@08048D9C
struct Class_0804DE24_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EC1C (sub_0804EC1C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0803A7CC (sub_0803A7CC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F534 (sub_0804F534)
};

// VTable at 0x0804DE34 (9 virtual methods)
// Installed by: sub_080489F4@080489F8
struct Class_0804DE34_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802FFA0 (0x0802FFA0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802FFAE (0x0802FFAE)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804DE58 (9 virtual methods)
// Installed by: loc_0802CB64@0802CB7E
struct Class_0804DE58_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0802CAF8 (sub_0802CAF8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802CB04 (sub_0802CB04)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F798 (sub_0804F798)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804DE7C (24 virtual methods)
// Installed by: sub_08019D42@08019D5C
struct Class_0804DE7C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801A664 (sub_0801A664)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801A6CC (sub_0801A6CC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801A6BA (sub_0801A6BA)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801A7AE (0x0801A7AE)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FA44 (sub_0804FA44)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FB24 (sub_0804FB24)
    u32 (*slot_09_0x24)(void* self); // -> 0x08052C68 (0x08052C68)
    u32 (*slot_10_0x28)(void* self); // -> 0x0801840E (0x0801840E)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE98 (sub_0804FE98)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FB70 (0x0804FB70)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804ECF0 (0x0804ECF0)
    u32 (*slot_14_0x38)(void* self); // -> 0x08052C6C (0x08052C6C)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0801943C (loc_0801943C)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804FE84 (sub_0804FE84)
    u32 (*slot_17_0x44)(void* self); // -> 0x0804FB5C (0x0804FB5C)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804ECDC (0x0804ECDC)
    u32 (*slot_19_0x4C)(void* self); // -> 0x08052C70 (0x08052C70)
    u32 (*slot_20_0x50)(void* self); // -> 0x08015A54 (0x08015A54)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FE70 (loc_0804FE70)
    u32 (*slot_22_0x58)(void* self); // -> 0x0804FB48 (0x0804FB48)
    u32 (*slot_23_0x5C)(void* self); // -> 0x0804ECC8 (sub_0804ECC8)
};

// VTable at 0x0804DEDC (4 virtual methods)
// Installed by: sub_0804F016@0804F01E
struct Class_0804DEDC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E5C0 (sub_0800E5C0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E5F4 (sub_0800E5F4)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804DEEC (11 virtual methods)
// Installed by: sub_08000CA6@08000CCE
struct Class_0804DEEC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052CD4 (0x08052CD4)
    u32 (*slot_01_0x04)(void* self); // -> 0x08006C3E (sub_08006C3E)
    u32 (*slot_02_0x08)(void* self); // -> 0x08006C74 (sub_08006C74)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800700C (sub_0800700C)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08007040 (sub_08007040)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FDD8 (sub_0804FDD8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FDB8 (sub_0804FDB8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08007064 (0x08007064)
    u32 (*slot_10_0x28)(void* self); // -> 0x08006CE0 (sub_08006CE0)
};

// VTable at 0x0804DF18 (9 virtual methods)
// Installed by: sub_08019E52@08019E86
struct Class_0804DF18_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801AA90 (sub_0801AA90)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801AAEA (sub_0801AAEA)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801AAEC (sub_0801AAEC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801AB3E (sub_0801AB3E)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801AB5C (sub_0801AB5C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FA58 (sub_0804FA58)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FB3C (sub_0804FB3C)
};

// VTable at 0x0804DF3C (4 virtual methods)
// Installed by: sub_08048378@080483A8
struct Class_0804DF3C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EF6C (sub_0804EF6C)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800E3B2 (sub_0800E3B2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E3CE (0x0800E3CE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804DF4C (10 virtual methods)
// Installed by: sub_0800CD94@0800CDA2
struct Class_0804DF4C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052CE8 (sub_08052CE8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800CBA8 (sub_0800CBA8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800CC6C (sub_0800CC6C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800CDE8 (0x0800CDE8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800CDEA (sub_0800CDEA)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800CFE0 (sub_0800CFE0)
};

// VTable at 0x0804DF74 (4 virtual methods)
// Installed by: sub_08048D14@08048D18
struct Class_0804DF74_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EC20 (sub_0804EC20)
    u32 (*slot_01_0x04)(void* self); // -> 0x080398A4 (sub_080398A4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F570 (sub_0804F570)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F538 (sub_0804F538)
};

// VTable at 0x0804DF84 (15 virtual methods)
// Installed by: sub_08036328@0803634A
struct Class_0804DF84_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x080342A8 (0x080342A8)
    u32 (*slot_01_0x04)(void* self); // -> 0x080342AE (sub_080342AE)
    u32 (*slot_02_0x08)(void* self); // -> 0x08034306 (0x08034306)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0803431C (sub_0803431C)
    u32 (*slot_04_0x10)(void* self); // -> 0x08052D14 (sub_08052D14)
    u32 (*slot_05_0x14)(void* self); // -> 0x080361B8 (sub_080361B8)
    u32 (*slot_06_0x18)(void* self); // -> 0x08034390 (0x08034390)
    u32 (*slot_07_0x1C)(void* self); // -> 0x080343AE (0x080343AE)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FE94 (0x0804FE94)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804F788 (0x0804F788)
    u32 (*slot_10_0x28)(void* self); // -> 0x0804FCA0 (0x0804FCA0)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FC38 (sub_0804FC38)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804ED2C (sub_0804ED2C)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804F9BC (sub_0804F9BC)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804FA78 (sub_0804FA78)
};

// VTable at 0x0804DFC0 (10 virtual methods)
// Installed by: sub_0801A464@0801A4AE
struct Class_0804DFC0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801C30A (sub_0801C30A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801C2AE (sub_0801C2AE)
};

// VTable at 0x0804DFE8 (9 virtual methods)
// Installed by: sub_0801A624@0801A63C
struct Class_0804DFE8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801C634 (sub_0801C634)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801C63C (sub_0801C63C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801C63E (sub_0801C63E)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801C6C8 (sub_0801C6C8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801C6D0 (sub_0801C6D0)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804E00C (9 virtual methods)
// Installed by: sub_08048494@080484BC
struct Class_0804E00C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08013340 (0x08013340)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DEB0 (loc_0800DEB0)
    u32 (*slot_02_0x08)(void* self); // -> 0x08013352 (0x08013352)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800E050 (sub_0800E050)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804E030 (9 virtual methods)
// Installed by: loc_08033E96@08033EA8
struct Class_0804E030_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08033D84 (sub_08033D84)
    u32 (*slot_01_0x04)(void* self); // -> 0x08033D9A (sub_08033D9A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F7B0 (sub_0804F7B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804E054 (4 virtual methods)
// Installed by: sub_08048378@080483B4
struct Class_0804E054_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EF90 (0x0804EF90)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800E3B2 (sub_0800E3B2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E3CE (0x0800E3CE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804E064 (9 virtual methods)
// Installed by: sub_08048B68@08048B6C
struct Class_0804E064_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08034A20 (sub_08034A20)
    u32 (*slot_01_0x04)(void* self); // -> 0x08034A4A (sub_08034A4A)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F7B8 (0x0804F7B8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804E088 (9 virtual methods)
// Installed by: sub_0801A12E@0801A148
struct Class_0804E088_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801B638 (sub_0801B638)
    u32 (*slot_01_0x04)(void* self); // -> 0x0801B818 (0x0801B818)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801B6B0 (sub_0801B6B0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801B81A (0x0801B81A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801B862 (0x0801B862)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804E0AC (10 virtual methods)
// Installed by: sub_080482C4@080482FA;sub_080482C4@08048302
struct Class_0804E0AC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800DE60 (Record_InitFields)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F5B0 (sub_0804F5B0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800DEA6 (sub_0800DEA6)
};

// VTable at 0x0804E0D4 (15 virtual methods)
// Installed by: sub_08001F30@08001F4E
struct Class_0804E0D4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052D2C (sub_08052D2C)
    u32 (*slot_01_0x04)(void* self); // -> 0x08036DD6 (sub_08036DD6)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEBC (sub_0804FEBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB94 (sub_0804FB94)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED40 (0x0804ED40)
    u32 (*slot_05_0x14)(void* self); // -> 0x08052D30 (0x08052D30)
    u32 (*slot_06_0x18)(void* self); // -> 0x08015930 (0x08015930)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FEA8 (0x0804FEA8)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FB80 (sub_0804FB80)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804ED00 (0x0804ED00)
    u32 (*slot_10_0x28)(void* self); // -> 0x08052D34 (0x08052D34)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804EBFC (0x0804EBFC)
    u32 (*slot_12_0x30)(void* self); // -> 0x08030A88 (0x08030A88)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FBA0 (0x0804FBA0)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804ECEC (sub_0804ECEC)
};

// VTable at 0x0804E110 (4 virtual methods)
// Installed by: sub_08048378@0804838C
struct Class_0804E110_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EFB4 (0x0804EFB4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800E3B2 (sub_0800E3B2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E3CE (0x0800E3CE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804E120 (10 virtual methods)
// Installed by: sub_080222F8@08022356
struct Class_0804E120_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052D74 (sub_08052D74)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0802237C (sub_0802237C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC3C (sub_0804FC3C)
    u32 (*slot_04_0x10)(void* self); // -> 0x080223B2 (0x080223B2)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08021802 (sub_08021802)
};

// VTable at 0x0804E148 (10 virtual methods)
// Installed by: loc_080258A4@08025A3C;Object_Destroy16@08026DB0
struct Class_0804E148_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08026DA8 (Object_Destroy16)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08026CDA (0x08026CDA)
    u32 (*slot_04_0x10)(void* self); // -> 0x08026D14 (sub_08026D14)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FE1C (0x0804FE1C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4D8 (sub_0804E4D8)
    u32 (*slot_09_0x24)(void* self); // -> 0x08026D7C (0x08026D7C)
};

// VTable at 0x0804E170 (9 virtual methods)
// Installed by: sub_08048BB0@08048BB4
struct Class_0804E170_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08034CF8 (sub_08034CF8)
    u32 (*slot_01_0x04)(void* self); // -> 0x08034D86 (0x08034D86)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEAC (sub_0804FEAC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F7C4 (0x0804F7C4)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804E194 (4 virtual methods)
// Installed by: sub_08048378@08048392
struct Class_0804E194_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804EFDC (0x0804EFDC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800E3B2 (sub_0800E3B2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E3CE (0x0800E3CE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804E1A4 (4 virtual methods)
// Installed by: sub_0804F046@0804F04E
struct Class_0804E1A4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800E550 (sub_0800E550)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F58C (sub_0804F58C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E592 (sub_0800E592)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCFC (sub_0804FCFC)
};

// VTable at 0x0804E1B4 (36 virtual methods)
// Installed by: loc_0801050E@0801051C
struct Class_0804E1B4_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052DB0 (0x08052DB0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801056C (sub_0801056C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801003A (sub_0801003A)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800EF94 (Sprite_CellGrid)
    u32 (*slot_05_0x14)(void* self); // -> 0x0800F3F8 (sub_0800F3F8)
    u32 (*slot_06_0x18)(void* self); // -> 0x08011050 (sub_08011050)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800F516 (sub_0800F516)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800F4E6 (sub_0800F4E6)
    u32 (*slot_09_0x24)(void* self); // -> 0x08010DDE (sub_08010DDE)
    u32 (*slot_10_0x28)(void* self); // -> 0x08010548 (sub_08010548)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08010974 (sub_08010974)
    u32 (*slot_12_0x30)(void* self); // -> 0x0800ED3E (sub_0800ED3E)
    u32 (*slot_13_0x34)(void* self); // -> 0x08010D26 (sub_08010D26)
    u32 (*slot_14_0x38)(void* self); // -> 0x0800FFA2 (sub_0800FFA2)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_16_0x40)(void* self); // -> 0x0804F558 (sub_0804F558)
    u32 (*slot_17_0x44)(void* self); // -> 0x08010574 (sub_08010574)
    u32 (*slot_18_0x48)(void* self); // -> 0x0804FE7C (sub_0804FE7C)
    u32 (*slot_19_0x4C)(void* self); // -> 0x0804FE78 (sub_0804FE78)
    u32 (*slot_20_0x50)(void* self); // -> 0x0804FC18 (0x0804FC18)
    u32 (*slot_21_0x54)(void* self); // -> 0x0804FC14 (0x0804FC14)
    u32 (*slot_22_0x58)(void* self); // -> 0x08010CB4 (sub_08010CB4)
    u32 (*slot_23_0x5C)(void* self); // -> 0x08010BF2 (sub_08010BF2)
    u32 (*slot_24_0x60)(void* self); // -> 0x08010CD0 (sub_08010CD0)
    u32 (*slot_25_0x64)(void* self); // -> 0x0804F898 (sub_0804F898)
    u32 (*slot_26_0x68)(void* self); // -> 0x0804ECC0 (0x0804ECC0)
    u32 (*slot_27_0x6C)(void* self); // -> 0x0804EC9C (0x0804EC9C)
    u32 (*slot_28_0x70)(void* self); // -> 0x0804ECE4 (0x0804ECE4)
    u32 (*slot_29_0x74)(void* self); // -> 0x0804FDE4 (sub_0804FDE4)
    u32 (*slot_30_0x78)(void* self); // -> 0x0804F86C (0x0804F86C)
    u32 (*slot_31_0x7C)(void* self); // -> 0x08010C9C (0x08010C9C)
    u32 (*slot_32_0x80)(void* self); // -> 0x0804F840 (sub_0804F840)
    u32 (*slot_33_0x84)(void* self); // -> 0x0804F8C8 (sub_0804F8C8)
    u32 (*slot_34_0x88)(void* self); // -> 0x0804FBF0 (sub_0804FBF0)
    u32 (*slot_35_0x8C)(void* self); // -> 0x0804FC20 (0x0804FC20)
};

// VTable at 0x0804E244 (9 virtual methods)
// Installed by: sub_08019DF8@08019E0E
struct Class_0804E244_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801A8F0 (0x0801A8F0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801A964 (sub_0801A964)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801A946 (sub_0801A946)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801AA7E (0x0801AA7E)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FA68 (0x0804FA68)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FB54 (sub_0804FB54)
};

// VTable at 0x0804E268 (5 virtual methods)
// Installed by: sub_08001808@0800184A
struct Class_0804E268_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052DC8 (sub_08052DC8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0802CB52 (sub_0802CB52)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FEBC (sub_0804FEBC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FBCC (0x0804FBCC)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804ED14 (sub_0804ED14)
};

// VTable at 0x0804E27C (3 virtual methods)
// Installed by: sub_08012350@08012368
struct Class_0804E27C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052DE0 (0x08052DE0)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F9CC (sub_0804F9CC)
    u32 (*slot_02_0x08)(void* self); // -> 0x08012166 (sub_08012166)
};

// VTable at 0x0804E288 (10 virtual methods)
// Installed by: loc_0800CB2E@0800CB3C
struct Class_0804E288_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052DF4 (sub_08052DF4)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800CBA8 (sub_0800CBA8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800CC6C (sub_0800CC6C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FE1C (0x0804FE1C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4D8 (sub_0804E4D8)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800CFE0 (sub_0800CFE0)
};

// VTable at 0x0804E2B0 (10 virtual methods)
// Installed by: sub_0801A512@0801A548;sub_0801A5BC@0801A5F4
struct Class_0804E2B0_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801C3EC (0x0801C3EC)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800DE6C (sub_0800DE6C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801C4F4 (Math_Divide5)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804F7D0 (sub_0804F7D0)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801C5BC (sub_0801C5BC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
    u32 (*slot_09_0x24)(void* self); // -> 0x0801C312 (0x0801C312)
};

// VTable at 0x0804E2D8 (9 virtual methods)
// Installed by: sub_08019F14@08019F2E
struct Class_0804E2D8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801ADA8 (sub_0801ADA8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801AE32 (sub_0801AE32)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801AE20 (0x0801AE20)
    u32 (*slot_04_0x10)(void* self); // -> 0x0801AF1C (0x0801AF1C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC50 (0x0804FC50)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED44 (0x0804ED44)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FA7C (sub_0804FA7C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FB6C (sub_0804FB6C)
};

// VTable at 0x0804E2FC (14 virtual methods)
// Installed by: sub_0800CE32@0800CE3E;Object_Destroy3@0800CE62
struct Class_0804E2FC_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0800CE5A (Object_Destroy3)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800CBA8 (sub_0800CBA8)
    u32 (*slot_04_0x10)(void* self); // -> 0x0800CC6C (sub_0800CC6C)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0800CE96 (sub_0800CE96)
    u32 (*slot_08_0x20)(void* self); // -> 0x0800CEAC (sub_0800CEAC)
    u32 (*slot_09_0x24)(void* self); // -> 0x0800CED0 (sub_0800CED0)
    u32 (*slot_10_0x28)(void* self); // -> 0x08052DF8 (0x08052DF8)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804E4F8 (sub_0804E4F8)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804F574 (sub_0804F574)
    u32 (*slot_13_0x34)(void* self); // -> 0x080340FC (0x080340FC)
};

// VTable at 0x0804E334 (9 virtual methods)
// Installed by: sub_0801BAB0@0801BACC
struct Class_0804E334_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0801BAE6 (0x0801BAE6)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4E0 (sub_0804E4E0)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801BB1A (sub_0801BB1A)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0801BB08 (0x0801BB08)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FCB8 (sub_0804FCB8)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FC54 (0x0804FC54)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804ED50 (0x0804ED50)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804F9D4 (0x0804F9D4)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804FA90 (sub_0804FA90)
};

// VTable at 0x0804E358 (7 virtual methods)
// Installed by: sub_0801E4E0@0801E552
struct Class_0804E358_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052E34 (sub_08052E34)
    u32 (*slot_01_0x04)(void* self); // -> 0x08006248 (sub_08006248)
    u32 (*slot_02_0x08)(void* self); // -> 0x0801E6FC (sub_0801E6FC)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FCC0 (sub_0804FCC0)
    u32 (*slot_04_0x10)(void* self); // -> 0x08005FD4 (sub_08005FD4)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804E4DC (sub_0804E4DC)
    u32 (*slot_06_0x18)(void* self); // -> 0x08006182 (sub_08006182)
};

// VTable at 0x0804E374 (4 virtual methods)
// Installed by: sub_08048378@080483C0
struct Class_0804E374_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F004 (0x0804F004)
    u32 (*slot_01_0x04)(void* self); // -> 0x0800E3B2 (sub_0800E3B2)
    u32 (*slot_02_0x08)(void* self); // -> 0x0800E3CE (0x0800E3CE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804E384 (17 virtual methods)
// Installed by: loc_08006E9C@08006EB8
struct Class_0804E384_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052E48 (sub_08052E48)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804EC2C (sub_0804EC2C)
    u32 (*slot_02_0x08)(void* self); // -> 0x08025B20 (sub_08025B20)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08024C38 (sub_08024C38)
    u32 (*slot_04_0x10)(void* self); // -> 0x08025D2E (Bg_WriteScroll2And3)
    u32 (*slot_05_0x14)(void* self); // -> 0x08024C54 (sub_08024C54)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08024BF2 (0x08024BF2)
    u32 (*slot_08_0x20)(void* self); // -> 0x08025E0C (0x08025E0C)
    u32 (*slot_09_0x24)(void* self); // -> 0x08025E18 (0x08025E18)
    u32 (*slot_10_0x28)(void* self); // -> 0x08024C04 (sub_08024C04)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE84 (sub_0804FE84)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FE90 (0x0804FE90)
    u32 (*slot_13_0x34)(void* self); // -> 0x08025E24 (0x08025E24)
    u32 (*slot_14_0x38)(void* self); // -> 0x08025E2E (0x08025E2E)
    u32 (*slot_15_0x3C)(void* self); // -> 0x08025B34 (sub_08025B34)
    u32 (*slot_16_0x40)(void* self); // -> 0x08025D48 (0x08025D48)
};

// VTable at 0x0804E3C8 (17 virtual methods)
// Installed by: sub_0802601A@08026036
struct Class_0804E3C8_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052E60 (0x08052E60)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804EC5C (sub_0804EC5C)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F55C (sub_0804F55C)
    u32 (*slot_03_0x0C)(void* self); // -> 0x08024C38 (sub_08024C38)
    u32 (*slot_04_0x10)(void* self); // -> 0x0804FDA0 (sub_0804FDA0)
    u32 (*slot_05_0x14)(void* self); // -> 0x08024C54 (sub_08024C54)
    u32 (*slot_06_0x18)(void* self); // -> 0x0804FCCC (sub_0804FCCC)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08024BF2 (0x08024BF2)
    u32 (*slot_08_0x20)(void* self); // -> 0x080263BE (sub_080263BE)
    u32 (*slot_09_0x24)(void* self); // -> 0x080263E2 (0x080263E2)
    u32 (*slot_10_0x28)(void* self); // -> 0x0802638A (sub_0802638A)
    u32 (*slot_11_0x2C)(void* self); // -> 0x0804FE80 (0x0804FE80)
    u32 (*slot_12_0x30)(void* self); // -> 0x0804FE94 (0x0804FE94)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804EEA4 (0x0804EEA4)
    u32 (*slot_14_0x38)(void* self); // -> 0x08026274 (sub_08026274)
    u32 (*slot_15_0x3C)(void* self); // -> 0x0802632E (0x0802632E)
    u32 (*slot_16_0x40)(void* self); // -> 0x08026360 (0x08026360)
};

// VTable at 0x0804E40C (4 virtual methods)
// Installed by: sub_08048378@080483BA
struct Class_0804E40C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x0804F034 (sub_0804F034)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804E4F4 (sub_0804E4F4)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804F554 (sub_0804F554)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0800E0F0 (sub_0800E0F0)
};

// VTable at 0x0804E41C (10 virtual methods)
// Installed by: sub_08022470@08022494
struct Class_0804E41C_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052E74 (sub_08052E74)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080224AE (sub_080224AE)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC3C (sub_0804FC3C)
    u32 (*slot_04_0x10)(void* self); // -> 0x080223B2 (0x080223B2)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x08011568 (Handle_Release1)
    u32 (*slot_08_0x20)(void* self); // -> 0x08011818 (Handle_Acquire1)
    u32 (*slot_09_0x24)(void* self); // -> 0x08021802 (sub_08021802)
};

// VTable at 0x0804E444 (4 virtual methods)
// Installed by: sub_0800733A@0800734E;sub_08009ADA@08009AF2;loc_0800D2AA@0800D2B2;sub_08017E80@08017EA2;sub_08050BEC@08050BF4;sub_08050C
struct Class_0804E444_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052EB0 (0x08052EB0)
    u32 (*slot_01_0x04)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_02_0x08)(void* self); // -> 0x0804FBE0 (sub_0804FBE0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FB90 (0x0804FB90)
};

// VTable at 0x0804E454 (15 virtual methods)
// Installed by: sub_0800B1A6@0800B1AA;loc_0800B2F4@0800B302;loc_0800B8EC@0800B8F0;loc_0800C7D2@0800C7D6;loc_0800CE86@0800CE8A;loc_0800CF
struct Class_0804E454_VTable {
    u32 (*slot_00_0x00)(void* self); // -> 0x08052EC8 (0x08052EC8)
    u32 (*slot_01_0x04)(void* self); // -> 0x0804F53C (sub_0804F53C)
    u32 (*slot_02_0x08)(void* self); // -> 0x080501E0 (0x080501E0)
    u32 (*slot_03_0x0C)(void* self); // -> 0x0804FC40 (sub_0804FC40)
    u32 (*slot_04_0x10)(void* self); // -> 0x08046CAC (sub_08046CAC)
    u32 (*slot_05_0x14)(void* self); // -> 0x0804FE9C (sub_0804FE9C)
    u32 (*slot_06_0x18)(void* self); // -> 0x0801155C (loc_0801155C)
    u32 (*slot_07_0x1C)(void* self); // -> 0x0804FE1C (0x0804FE1C)
    u32 (*slot_08_0x20)(void* self); // -> 0x0804E4D8 (sub_0804E4D8)
    u32 (*slot_09_0x24)(void* self); // -> 0x0804FC4C (sub_0804FC4C)
    u32 (*slot_10_0x28)(void* self); // -> 0x08052EAC (0x08052EAC)
    u32 (*slot_11_0x2C)(void* self); // -> 0x08046C84 (0x08046C84)
    u32 (*slot_12_0x30)(void* self); // -> 0x08046C84 (0x08046C84)
    u32 (*slot_13_0x34)(void* self); // -> 0x0804FE4C (0x0804FE4C)
    u32 (*slot_14_0x38)(void* self); // -> 0x0804F994 (0x0804F994)
};
