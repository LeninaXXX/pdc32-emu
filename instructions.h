#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

enum instruction_group {
    GROUP_A = 0b11100000,
    GROUP_B = 0b11010000,
    GROUP_C = 0b10110000,
    GROUP_D = 0b01110000,
};

enum instruction {
    A0_SET_DRAM_DATA = GROUP_A | 0,
    A1_SET_CARRY_IN = GROUP_A | 1,
    A2_RETURN = GROUP_A | 2,
    A3_JLEQ = GROUP_A | 3,
    A4_JGEQ = GROUP_A | 4,
    A5_JMP = GROUP_A | 5,
    A6_INC_DRAM_ADDR = GROUP_A | 6,
    A7_SET_DRAM_ADDR = GROUP_A | 7,
    A8_JNE = GROUP_A | 8,
    A9_SET_A = GROUP_A | 9,
    A10_SET_HIGH = GROUP_A | 10,
    A11_WRITE_DRAM = GROUP_A | 11,
    A12_SET_BUS = GROUP_A | 12,
    A13_CALL = GROUP_A | 13,
    A14_SET_B = GROUP_A | 14,
    A15_SET_ALU = GROUP_A | 15,
    B0_TIMER_SPEAKER_OFV = GROUP_B | 0,
    B1_UART_OFV = GROUP_B | 1,
    B2_UART_CONFIG = GROUP_B | 2,
    B3_UART_TX = GROUP_B | 3,
    B4_UNUSED = GROUP_B | 4,
    B5_KBD_TX = GROUP_B | 5,
    B6_DATA_ADDR_RTC = GROUP_B | 6,
    B7_OUT_DEBUG_COMMAND_RTC = GROUP_B | 7,
    B8_JL = GROUP_B | 8,
    B9_TIMER_SPEAKER_FUNCTION = GROUP_B | 9,
    B10_JG = GROUP_B | 10,
    B11_JE = GROUP_B | 11,
    B12_SET_CACHE_DATA = GROUP_B | 12,
    B13_SET_CACHE_ADDR = GROUP_B | 13,
    B14_ON_OFF_ATX = GROUP_B | 14,
    B15_WRITE_CACHE = GROUP_B | 15,
    C0_TIMER = GROUP_C | 0,
    C1_TIME = GROUP_C | 1,
    C2_DRIVE_SERIAL_DATA = GROUP_C | 2,
    C3_DRIVE_SERIAL_ADDR = GROUP_C | 3,
    C4_DRIVE_SERIAL_FUNCTION = GROUP_C | 4,
    C5_UNUSED = GROUP_C | 5,
    C6_UNUSED = GROUP_C | 6,
    C7_VGA_TEXT_COLOR = GROUP_C | 7,
    C8_VGA_WRITE_VRAM = GROUP_C | 8,
    C9_VGA_FUNCTION = GROUP_C | 9,
    C10_VGA_TEXT_BLINK = GROUP_C | 10,
    C11_VGA_PIXEL_COLOR = GROUP_C | 11,
    C12_VGA_TEXT_WRITE = GROUP_C | 12,
    C13_VGA_TEXT_CHAR = GROUP_C | 13,
    C14_VGA_PIXEL_POS = GROUP_C | 14,
    C15_VGA_TEXT_POS = GROUP_C | 15,
    D0_UNUSED = GROUP_D | 0,
    D1_UNUSED = GROUP_D | 1,
    D2_UNUSED = GROUP_D | 2,
    D3_UNUSED = GROUP_D | 3,
    D4_UNUSED = GROUP_D | 4,
    D5_UNUSED = GROUP_D | 5,
    D6_UNUSED = GROUP_D | 6,
    D7_UNUSED = GROUP_D | 7,
    D8_UNUSED = GROUP_D | 8,
    D9_UNUSED = GROUP_D | 9,
    D10_UNUSED = GROUP_D | 10,
    D11_UNUSED = GROUP_D | 11,
    D12_UNUSED = GROUP_D | 12,
    D13_UNUSED = GROUP_D | 13,
    D14_UNUSED = GROUP_D | 14,
    D15_UNUSED = GROUP_D | 15,
};

#endif
