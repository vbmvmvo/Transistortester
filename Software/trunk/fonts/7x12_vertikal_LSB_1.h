/* ************************************************************************
 *  (c) by Karl-Heinz Kuebbeler, Project Transistor Tester
 *
 *  File:       7x12_vertikal_LSB_1.h
 *  Function:   table of the bits for the 7x12 character set
 *              - 16/12 bytes or 14/12 per character
 *              - first byte: first vertical line (left to right)
 *              - ninth byte: first vertical line (left to right)
 *              - bit #0: top / bit #7: bottom (vertically flipped)
 *
 * History:     Date        Sign    Kommentar
 *              2021-01-26  Bohu    ISO 8859 2 & 15 charakter added & FR
 *              2021-02-13  Karl    Standard defines with std_defines.h
 *              2021-02-16  Karl    dual tables for tester and characters
 * ************************************************************************ */

#include "std_defines.h"  /* use standard defines for special characters */

#if defined(MAIN_C)
 #if (SFONT_WIDTH == 8)

const unsigned char PROGMEM sfont[9][(SFONT_WIDTH * ((FONT_HEIGHT + 7)/8))]=
{
{0x40,0xF0,0x10,0x10,0x10,0x10,0xF0,0x40, 0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00},  /* 0x00 Resistor3 */
{0x40,0xFC,0xF8,0xF0,0xE0,0x40,0xFC,0x40, 0x00,0x07,0x03,0x01,0x00,0x00,0x07,0x00},  /* 0x01 Diode1 */
{0x40,0xFC,0x40,0xE0,0xF0,0xF8,0xFC,0x40, 0x00,0x07,0x00,0x00,0x01,0x03,0x07,0x00},  /* 0x02 Diode2 */
{0x40,0xFC,0xFC,0x00,0x00,0xFC,0xFC,0x40, 0x00,0x07,0x07,0x00,0x00,0x07,0x07,0x00},  /* 0x03 Capacitor */
{0xF8,0x08,0x08,0x08,0x08,0x08,0x08,0x08, 0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x02},  /* 0x04 Resistor1 */
{0x08,0x08,0x08,0x08,0x08,0x08,0x08,0xF8, 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x03},  /* 0x05 Resistor2 */
{0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x06 Line   */
{0x40,0xC0,0x00,0xC0,0x20,0xC0,0x00,0xC0, 0x00,0x01,0x02,0x02,0x01,0x02,0x02,0x02},  /* 0x07 Inductor1 */
{0x20,0xC0,0x00,0xC0,0x20,0xC0,0x00,0xC0, 0x01,0x02,0x02,0x02,0x01,0x02,0x02,0x01},  /* 0x08 Inductor2 */
};
 #else
const unsigned char PROGMEM sfont[9][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))]=
{
{0x40,0xF0,0x10,0x10,0x10,0xF0,0x40, 0x00,0x01,0x01,0x01,0x01,0x01,0x00},  /* 0x00 Resistor3 */
{0xFC,0xF8,0xF0,0xE0,0x40,0xFC,0xFC, 0x07,0x03,0x01,0x00,0x00,0x07,0x07},  /* 0x01 Diode1 */
{0xFC,0xFC,0x40,0xE0,0xF0,0xF8,0xFC, 0x07,0x07,0x00,0x00,0x01,0x03,0x07},  /* 0x02 Diode2 */
{0x40,0xFC,0xFC,0x00,0xFC,0xFC,0x40, 0x00,0x07,0x07,0x00,0x07,0x07,0x00},  /* 0x03 Capacitor */
{0xF8,0x08,0x08,0x08,0x08,0x08,0x08, 0x03,0x02,0x02,0x02,0x02,0x02,0x02},  /* 0x04 Resistor1 */
{0x08,0x08,0x08,0x08,0x08,0x08,0xF8, 0x02,0x02,0x02,0x02,0x02,0x02,0x03},  /* 0x05 Resistor2 */
{0x40,0x40,0x40,0x40,0x40,0x40,0x40, 0x00,0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x06 Line   */
{0x40,0x40,0x80,0x00,0xC0,0x20,0xC0, 0x00,0x00,0x01,0x02,0x02,0x01,0x02},  /* 0x07 Inductor1 */
{0x00,0xC0,0x20,0xC0,0x00,0x80,0x40, 0x02,0x02,0x01,0x02,0x02,0x01,0x00},  /* 0x08 Inductor2 */
};
 #endif
const unsigned char PROGMEM nfont[(CHAR_COUNT-28)][((FONT_WIDTH-1) * ((FONT_HEIGHT+7)/8))]=
{
{0x00,0xFC,0x02,0x12,0x12,0xEC, 0x04,0x03,0x00,0x01,0x01,0x00},  /* 0x1c Beta   */
{0xF0,0x08,0x08,0x08,0x08,0xF0, 0x04,0x07,0x00,0x00,0x07,0x04},  /* 0x1d Omega  */
{0x00,0x00,0xF0,0x00,0x00,0xF0, 0x04,0x02,0x03,0x02,0x01,0x03},  /* 0x1e mu     */
{0x00,0x0C,0x12,0x12,0x0C,0x00, 0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x1f Degree */
/* ----ASCII-0x20-0x79---------------------------- */
{0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x20 ' ' */
{0x00,0x00,0x3C,0xFE,0x3C,0x00, 0x00,0x00,0x00,0x0B,0x00,0x00},  /* 0x21 '!' */
{0x00,0x16,0x0E,0x00,0x16,0x0E, 0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x22 '"' */
{0x08,0xFE,0x08,0x08,0xFE,0x08, 0x01,0x07,0x01,0x01,0x07,0x01},  /* 0x23 '#' */
{0x00,0x10,0x28,0xFC,0x88,0x10, 0x00,0x01,0x02,0x07,0x02,0x01},  /* 0x24 '$' */
{0x0E,0x8A,0x4E,0x20,0x10,0x0C, 0x03,0x00,0x00,0x07,0x05,0x07},  /* 0x25 '%' */
{0x88,0x54,0x22,0x54,0x88,0xC0, 0x03,0x04,0x04,0x02,0x01,0x06},  /* 0x26 '&' */
{0x00,0x00,0x16,0x0E,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x27 ''' */
{0xF8,0x04,0x02,0x00,0x00,0x00, 0x01,0x02,0x04,0x00,0x00,0x00},  /* 0x28 '(' */
{0x00,0x00,0x00,0x02,0x04,0xF8, 0x00,0x00,0x00,0x04,0x02,0x01},  /* 0x29 ')' */
{0x48,0x50,0xE0,0xE0,0x50,0x48, 0x02,0x01,0x00,0x00,0x01,0x02},  /* 0x2a '*' */
{0x00,0x40,0x40,0xF0,0x40,0x40, 0x00,0x00,0x00,0x01,0x00,0x00},  /* 0x2b '+' */
{0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x05,0x03,0x00,0x00},  /* 0x2c ',' */
{0x40,0x40,0x40,0x40,0x40,0x40, 0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x2d '-' */
{0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x06,0x06,0x00,0x00},  /* 0x2e '.' */
{0x00,0x80,0x40,0x20,0x10,0x08, 0x01,0x00,0x00,0x00,0x00,0x00},  /* 0x2f '/' */
{0xF8,0x84,0x42,0x22,0x14,0xF8, 0x01,0x02,0x04,0x04,0x02,0x01},  /* 0x30 '0' */
{0x00,0x08,0x04,0xFE,0x00,0x00, 0x00,0x00,0x00,0x07,0x00,0x00},  /* 0x31 '1' */
{0x18,0x04,0x82,0x42,0x24,0x18, 0x06,0x05,0x04,0x04,0x04,0x04},  /* 0x32 '2' */
{0x0C,0x02,0x02,0x22,0x54,0x88, 0x03,0x04,0x04,0x04,0x02,0x01},  /* 0x33 '3' */
{0xC0,0xB0,0x8C,0x82,0xFE,0x80, 0x00,0x00,0x00,0x00,0x07,0x00},  /* 0x34 '4' */
{0x3E,0x22,0x12,0x12,0x22,0xC2, 0x01,0x02,0x04,0x04,0x02,0x01},  /* 0x35 '5' */
{0xF8,0x24,0x12,0x12,0x22,0xC4, 0x01,0x02,0x04,0x04,0x02,0x01},  /* 0x36 '6' */
{0x02,0x82,0x42,0x22,0x12,0x0E, 0x00,0x07,0x00,0x00,0x00,0x00},  /* 0x37 '7' */
{0x88,0x54,0x22,0x22,0x54,0x88, 0x01,0x02,0x04,0x04,0x02,0x01},  /* 0x38 '8' */
{0x38,0x44,0x82,0x82,0x44,0xF8, 0x02,0x04,0x04,0x04,0x02,0x01},  /* 0x39 '9' */
{0x00,0x00,0x30,0x30,0x00,0x00, 0x00,0x00,0x06,0x06,0x00,0x00},  /* 0x3a ':' */
{0x00,0x00,0x30,0x30,0x00,0x00, 0x00,0x00,0x05,0x03,0x00,0x00},  /* 0x3b ';' */
{0x00,0x40,0xA0,0x10,0x08,0x04, 0x00,0x00,0x00,0x01,0x02,0x04},  /* 0x3c '<' */
{0x20,0x20,0x20,0x20,0x20,0x20, 0x01,0x01,0x01,0x01,0x01,0x01},  /* 0x3d '=' */
{0x00,0x04,0x08,0x10,0xA0,0x40, 0x00,0x04,0x02,0x01,0x00,0x00},  /* 0x3e '>' */
{0x0C,0x02,0xC2,0x22,0x12,0x0C, 0x00,0x00,0x06,0x00,0x00,0x00},  /* 0x3f '?' */
{0xF8,0x04,0x62,0x92,0x94,0xF8, 0x01,0x02,0x04,0x04,0x04,0x02},  /* 0x40 '@' */
{0xF8,0x44,0x42,0x42,0x44,0xF8, 0x07,0x00,0x00,0x00,0x00,0x07},  /* 0x41 'A' */
{0xFE,0x22,0x22,0x22,0x22,0xDC, 0x07,0x04,0x04,0x04,0x04,0x03},  /* 0x42 'B' */
{0xFC,0x02,0x02,0x02,0x02,0x0C, 0x03,0x04,0x04,0x04,0x04,0x03},  /* 0x43 'C' */
{0xFE,0x02,0x02,0x02,0x02,0xFC, 0x07,0x04,0x04,0x04,0x04,0x03},  /* 0x44 'D' */
{0xFE,0x22,0x22,0x22,0x22,0x02, 0x07,0x04,0x04,0x04,0x04,0x04},  /* 0x45 'E' */
{0xFE,0x22,0x22,0x22,0x02,0x02, 0x07,0x00,0x00,0x00,0x00,0x00},  /* 0x46 'F' */
{0xFC,0x02,0x02,0x42,0x42,0xCC, 0x03,0x04,0x04,0x04,0x02,0x07},  /* 0x47 'G' */
{0xFE,0x20,0x20,0x20,0x20,0xFE, 0x07,0x00,0x00,0x00,0x00,0x07},  /* 0x48 'H' */
{0x00,0x00,0x02,0xFE,0x02,0x00, 0x00,0x00,0x04,0x07,0x04,0x00},  /* 0x49 'I' */
{0x00,0x00,0x00,0x00,0xFE,0x00, 0x02,0x04,0x04,0x04,0x03,0x00},  /* 0x4a 'J' */
{0xFE,0x60,0x90,0x08,0x04,0x02, 0x07,0x00,0x00,0x01,0x02,0x04},  /* 0x4b 'K' */
{0xFE,0x00,0x00,0x00,0x00,0x00, 0x07,0x04,0x04,0x04,0x04,0x04},  /* 0x4c 'L' */
{0xFE,0x0C,0x30,0x30,0x0C,0xFE, 0x07,0x00,0x00,0x00,0x00,0x07},  /* 0x4d 'M' */
{0xFE,0x18,0x20,0x40,0x80,0xFE, 0x07,0x00,0x00,0x00,0x01,0x07},  /* 0x4e 'N' */
{0xFC,0x02,0x02,0x02,0x02,0xFC, 0x03,0x04,0x04,0x04,0x04,0x03},  /* 0x4f 'O' */
{0xFE,0x42,0x42,0x42,0x42,0x3C, 0x07,0x00,0x00,0x00,0x00,0x00},  /* 0x50 'P' */
{0xFC,0x02,0x02,0x02,0x02,0xFC, 0x03,0x04,0x04,0x05,0x02,0x05},  /* 0x51 'Q' */
{0xFE,0x42,0xC2,0x42,0x42,0x3C, 0x07,0x00,0x00,0x01,0x02,0x04},  /* 0x52 'R' */
{0x0C,0x12,0x22,0x22,0x42,0x8C, 0x03,0x04,0x04,0x04,0x04,0x03},  /* 0x53 'S' */
{0x00,0x02,0x02,0xFE,0x02,0x02, 0x00,0x00,0x00,0x07,0x00,0x00},  /* 0x54 'T' */
{0xFE,0x00,0x00,0x00,0x00,0xFE, 0x03,0x04,0x04,0x04,0x04,0x03},  /* 0x55 'U' */
{0x00,0x7E,0xC0,0x00,0xC0,0x7E, 0x00,0x00,0x01,0x07,0x01,0x00},  /* 0x56 'V' */
{0x00,0xFE,0x80,0xF8,0x80,0xFE, 0x00,0x00,0x07,0x01,0x07,0x00},  /* 0x57 'W' */
{0x06,0x98,0x60,0x60,0x98,0x06, 0x06,0x01,0x00,0x00,0x01,0x06},  /* 0x58 'X' */
{0x00,0x1E,0x20,0xC0,0x20,0x1E, 0x00,0x00,0x00,0x07,0x00,0x00},  /* 0x59 'Y' */
{0x02,0x82,0x42,0x22,0x12,0x0E, 0x07,0x04,0x04,0x04,0x04,0x04},  /* 0x5a 'Z' */
{0x00,0xFE,0x02,0x02,0x02,0x00, 0x00,0x07,0x04,0x04,0x04,0x00},  /* 0x5b '[' */
{0x10,0x20,0x40,0x80,0x00,0x00, 0x00,0x00,0x00,0x00,0x01,0x02},  /* 0x5c '\' */
{0x00,0x02,0x02,0x02,0xFE,0x00, 0x00,0x04,0x04,0x04,0x07,0x00},  /* 0x5d ']' */
{0x00,0x08,0x04,0x02,0x04,0x08, 0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x5e '^' */
{0x00,0x00,0x00,0x00,0x00,0x00, 0x04,0x04,0x04,0x04,0x04,0x04},  /* 0x5f '_' */
{0x00,0x02,0x04,0x08,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x60 '`' */
{0x80,0x48,0x48,0x48,0x48,0xF0, 0x03,0x04,0x04,0x04,0x02,0x07},  /* 0x61 'a' */
{0xFE,0x10,0x08,0x08,0x08,0xF0, 0x07,0x04,0x04,0x04,0x04,0x03},  /* 0x62 'b' */
{0xF0,0x08,0x08,0x08,0x08,0x30, 0x03,0x04,0x04,0x04,0x04,0x02},  /* 0x63 'c' */
{0xE0,0x10,0x10,0x10,0x20,0xFE, 0x03,0x04,0x04,0x04,0x04,0x07},  /* 0x64 'd' */
{0xF0,0x88,0x88,0x88,0x88,0x70, 0x03,0x04,0x04,0x04,0x04,0x04},  /* 0x65 'e' */
{0x10,0xFC,0x12,0x02,0x02,0x04, 0x00,0x07,0x00,0x00,0x00,0x00},  /* 0x66 'f' */
{0x70,0x88,0x88,0x88,0x88,0xF0, 0x02,0x04,0x04,0x04,0x04,0x03},  /* 0x67 'g' */
{0xFE,0x40,0x20,0x10,0x10,0xE0, 0x07,0x00,0x00,0x00,0x00,0x07},  /* 0x68 'h' */
{0x00,0x00,0x08,0xFA,0x00,0x00, 0x00,0x00,0x00,0x07,0x00,0x00},  /* 0x69 'i' */
{0x00,0x00,0x00,0x00,0xFA,0x00, 0x04,0x08,0x08,0x08,0x07,0x00},  /* 0x6a 'j' */
{0xFE,0x40,0xA0,0x10,0x08,0x00, 0x07,0x00,0x00,0x01,0x02,0x04},  /* 0x6b 'k' */
{0x00,0x00,0x02,0xFE,0x00,0x00, 0x00,0x00,0x00,0x03,0x04,0x00},  /* 0x6c 'l' */
{0x00,0xF8,0x08,0xF0,0x08,0xF0, 0x00,0x07,0x00,0x07,0x00,0x07},  /* 0x6d 'm' */
{0xF8,0x20,0x10,0x08,0x08,0xF0, 0x07,0x00,0x00,0x00,0x00,0x07},  /* 0x6e 'n' */
{0xF0,0x08,0x08,0x08,0x08,0xF0, 0x03,0x04,0x04,0x04,0x04,0x03},  /* 0x6f 'o' */
{0xF8,0x90,0x08,0x08,0x08,0xF0, 0x07,0x00,0x01,0x01,0x01,0x00},  /* 0x70 'p' */
{0xF0,0x08,0x08,0x08,0x90,0xF8, 0x00,0x01,0x01,0x01,0x00,0x07},  /* 0x71 'q' */
{0xF8,0x20,0x10,0x08,0x08,0x30, 0x07,0x00,0x00,0x00,0x00,0x00},  /* 0x72 'r' */
{0x30,0x48,0x48,0x88,0x88,0x10, 0x02,0x04,0x04,0x04,0x04,0x03},  /* 0x73 's' */
{0x00,0x10,0xFE,0x10,0x10,0x00, 0x00,0x00,0x03,0x04,0x04,0x02},  /* 0x74 't' */
{0xF8,0x00,0x00,0x00,0x00,0xF8, 0x03,0x04,0x04,0x04,0x02,0x07},  /* 0x75 'u' */
{0x00,0x78,0xC0,0x00,0xC0,0x78, 0x00,0x00,0x01,0x07,0x01,0x00},  /* 0x76 'v' */
{0x00,0xF8,0x00,0xC0,0x00,0xF8, 0x00,0x03,0x04,0x03,0x04,0x03},  /* 0x77 'w' */
{0x18,0x60,0x80,0x80,0x60,0x18, 0x06,0x01,0x00,0x00,0x01,0x06},  /* 0x78 'x' */
{0x78,0x80,0x80,0x80,0x40,0xF8, 0x02,0x04,0x04,0x04,0x04,0x03},  /* 0x79 'y' */
{0x08,0x08,0x88,0x48,0x28,0x18, 0x06,0x05,0x04,0x04,0x04,0x04},  /* 0x7a 'z' */
{0x00,0x40,0xA0,0x1C,0x02,0x02, 0x00,0x00,0x00,0x07,0x08,0x08},  /* 0x7b '{' */
{0x00,0x00,0x00,0xFE,0x00,0x00, 0x00,0x00,0x00,0x0F,0x00,0x00},  /* 0x7c '|' */
{0x00,0x02,0x02,0x1C,0xA0,0x40, 0x00,0x08,0x08,0x07,0x00,0x00},  /* 0x7d '}' */
{0x04,0x02,0x01,0x02,0x04,0x02, 0x00,0x00,0x00,0x00,0x00,0x00},  /* 0x7e '~' */
{0xE0,0x10,0x08,0x04,0x08,0x10, 0x01,0x01,0x01,0x01,0x01,0x01},  /* 0x7f  */

/* All language specific characters are defined below, only the required are added with          */
/* #include "language-dependend_characters.h"                                                    */
/* Please note, that the position of special characters defined in "std_defines.h" must match to */
/* the sequence in "language-dependend_characters.h" !                                           */
/* Cyrillic characters are included additionally, if required.                                   */


#define PIX_a_acute  {0x80,0x48,0x48,0x4A,0x49,0xF0, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_c_acute  {0xF0,0x08,0x08,0x0A,0x09,0x30, 0x03,0x04,0x04,0x04,0x04,0x02}, 
#define PIX_e_acute  {0xF0,0x88,0x88,0x8A,0x89,0x70, 0x03,0x04,0x04,0x04,0x04,0x00}, 
#define PIX_i_acute  {0x00,0x00,0x08,0xFA,0x01,0x00, 0x00,0x00,0x00,0x07,0x00,0x00}, 
#define PIX_l_acute  {0x00,0x00,0x04,0xFE,0x01,0x00, 0x00,0x00,0x00,0x03,0x04,0x00}, 
#define PIX_n_acute  {0xF8,0x20,0x10,0x0A,0x09,0xF0, 0x07,0x00,0x00,0x00,0x00,0x07}, 
#define PIX_o_acute  {0xF0,0x08,0x08,0x0A,0x09,0xF0, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_r_acute  {0xF8,0x20,0x10,0x0A,0x09,0x30, 0x07,0x00,0x00,0x00,0x00,0x00}, 
#define PIX_s_acute  {0x30,0x48,0x48,0x8A,0x89,0x10, 0x02,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_u_acute  {0xF8,0x00,0x02,0x01,0x00,0xF8, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_y_acute  {0xF8,0x00,0x02,0x01,0x80,0xF8, 0x04,0x09,0x09,0x09,0x08,0x07}, 
#define PIX_z_acute  {0x08,0x08,0x88,0x4A,0x29,0x18, 0x06,0x05,0x04,0x04,0x04,0x04}, 
#define PIX_A_acute  {0xE0,0x90,0x88,0x8A,0x91,0xE0, 0x07,0x00,0x00,0x00,0x00,0x07}, 
#define PIX_C_acute  {0xF8,0x04,0x04,0x06,0x05,0x18, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_E_acute  {0xFC,0x44,0x44,0x46,0x45,0x04, 0x07,0x04,0x04,0x04,0x04,0x04}, 
#define PIX_I_acute  {0x00,0x00,0x04,0xFE,0x05,0x00, 0x00,0x00,0x04,0x07,0x04,0x00}, 
#define PIX_L_acute  {0xFE,0x00,0x02,0x01,0x00,0x00, 0x07,0x04,0x04,0x04,0x04,0x04}, 
#define PIX_N_acute  {0xFE,0x18,0x22,0x41,0x80,0xFE, 0x07,0x00,0x00,0x00,0x01,0x07}, 
#define PIX_O_acute  {0xF8,0x04,0x04,0x06,0x05,0xF8, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_R_acute  {0xFC,0x84,0x84,0x86,0x85,0x78, 0x07,0x00,0x00,0x01,0x02,0x04}, 
#define PIX_S_acute  {0x38,0x44,0x46,0x45,0x44,0x88, 0x02,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_U_acute  {0xFE,0x00,0x02,0x01,0x00,0xFE, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_Y_acute  {0x00,0x1E,0x20,0xC3,0x20,0x1E, 0x00,0x00,0x00,0x07,0x00,0x00}, 
#define PIX_Z_acute  {0x04,0x84,0x44,0x26,0x15,0x0C, 0x07,0x04,0x04,0x04,0x04,0x04}, 

#define PIX_a_breve  {0x80,0x49,0x4A,0x49,0x48,0xF0, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_A_breve  {0xE0,0x90,0x89,0x8A,0x91,0xE0, 0x07,0x00,0x00,0x00,0x00,0x07}, 

#define PIX_c_caron  {0xF0,0x08,0x09,0x0A,0x09,0x30, 0x03,0x04,0x04,0x04,0x04,0x02}, 
#define PIX_d_caron  {0xE0,0x10,0x10,0x10,0x20,0xFE, 0x03,0x04,0x04,0x04,0x04,0x07}, 
#define PIX_e_caron  {0xF0,0x88,0x89,0x8A,0x89,0x70, 0x03,0x04,0x04,0x04,0x04,0x00}, 
#define PIX_l_caron  {0x00,0x00,0x02,0xFE,0x03,0x00, 0x00,0x00,0x00,0x03,0x04,0x00}, 
#define PIX_n_caron  {0xF8,0x20,0x11,0x0A,0x09,0xF0, 0x07,0x00,0x00,0x00,0x00,0x07}, 
#define PIX_r_caron  {0xF8,0x20,0x11,0x0A,0x09,0x30, 0x07,0x00,0x00,0x00,0x00,0x00}, 
#define PIX_s_caron  {0x30,0x48,0x49,0x8A,0x89,0x10, 0x02,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_t_caron  {0x00,0x10,0xFE,0x10,0x13,0x00, 0x00,0x00,0x03,0x04,0x04,0x02}, 
#define PIX_z_caron  {0x08,0x08,0x89,0x4A,0x29,0x18, 0x06,0x05,0x04,0x04,0x04,0x04}, 
#define PIX_C_caron  {0xF8,0x04,0x05,0x06,0x05,0x18, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_D_caron  {0xFC,0x05,0x06,0x05,0x04,0xF8, 0x07,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_E_caron  {0xFC,0x44,0x45,0x46,0x45,0x04, 0x07,0x04,0x04,0x04,0x04,0x04}, 
#define PIX_L_caron  {0xFE,0x00,0x06,0x00,0x00,0x00, 0x07,0x04,0x04,0x04,0x04,0x04}, 
#define PIX_N_caron  {0xFE,0x18,0x21,0x42,0x81,0xFE, 0x07,0x00,0x00,0x00,0x01,0x07}, 
#define PIX_R_caron  {0xFC,0x84,0x85,0x86,0x85,0x78, 0x07,0x00,0x00,0x01,0x02,0x04}, 
#define PIX_S_caron  {0x38,0x45,0x46,0x45,0x44,0x88, 0x02,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_T_caron  {0x00,0x04,0x05,0xFE,0x05,0x04, 0x00,0x00,0x00,0x07,0x00,0x00}, 
#define PIX_Z_caron  {0x04,0x84,0x45,0x26,0x15,0x0C, 0x07,0x04,0x04,0x04,0x04,0x04}, 

#define PIX_c_cedil  {0xF0,0x08,0x08,0x08,0x08,0x30, 0x01,0x02,0x0A,0x0A,0x06,0x01}, 
#define PIX_s_cedil  {0x30,0x48,0x48,0x88,0x88,0x10, 0x01,0x02,0x0A,0x0A,0x06,0x01}, 
#define PIX_t_cedil  {0x00,0x10,0xFE,0x10,0x10,0x00, 0x00,0x00,0x0A,0x0A,0x04,0x02}, 
#define PIX_C_cedil  {0xFC,0x02,0x02,0x02,0x02,0x8C, 0x01,0x0A,0x0A,0x04,0x02,0x01}, 
#define PIX_S_cedil  {0x0C,0x12,0x22,0x22,0x42,0x8C, 0x03,0x0A,0x0A,0x06,0x02,0x01}, 
#define PIX_T_cedil  {0x00,0x02,0x02,0xF9,0x02,0x02, 0x00,0x00,0x08,0x0B,0x04,0x00}, 

#define PIX_a_circ   {0x80,0x4A,0x49,0x4A,0x48,0xF0, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_e_circ   {0xF0,0x8A,0x89,0x8A,0x88,0x70, 0x03,0x04,0x04,0x04,0x04,0x00}, 
#define PIX_i_circ   {0x00,0x02,0x09,0xFA,0x00,0x00, 0x00,0x00,0x00,0x07,0x00,0x00}, 
#define PIX_o_circ   {0xF0,0x08,0x0A,0x09,0x0A,0xF0, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_u_circ   {0xF8,0x02,0x01,0x02,0x00,0xF8, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_A_circ   {0xE0,0x90,0x8A,0x89,0x92,0xE0, 0x07,0x00,0x00,0x00,0x00,0x07}, 
#define PIX_E_circ   {0xFC,0x46,0x45,0x46,0x44,0x04, 0x07,0x04,0x04,0x04,0x04,0x04}, 
#define PIX_I_circ   {0x00,0x00,0x0A,0xF9,0x0A,0x00, 0x00,0x00,0x04,0x07,0x04,0x00}, 
#define PIX_O_circ   {0xF8,0x06,0x05,0x05,0x06,0xF8, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_U_circ   {0xFC,0x02,0x01,0x02,0x00,0xFC, 0x03,0x04,0x04,0x04,0x04,0x03}, 

#define PIX_o_dblac  {0xF0,0x0A,0x08,0x08,0x0A,0xF0, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_u_dblac  {0xF8,0x00,0x03,0x00,0x03,0xF8, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_O_dblac  {0xF0,0x0B,0x08,0x08,0x0B,0xF0, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_U_dblac  {0xFC,0x03,0x00,0x03,0x00,0xFC, 0x03,0x04,0x04,0x04,0x04,0x03}, 

#define PIX_z_dot    {0x08,0x08,0x89,0x49,0x28,0x18, 0x06,0x05,0x04,0x04,0x04,0x04}, 
#define PIX_Z_dot    {0x04,0x84,0x45,0x25,0x14,0x0C, 0x07,0x04,0x04,0x04,0x04,0x04}, 

#define PIX_a_elig   {0x00,0x88,0x88,0xE8,0x90,0xE0, 0x03,0x04,0x04,0x07,0x04,0x02}, 
#define PIX_o_elig   {0xF0,0x08,0xF8,0x48,0x48,0x70, 0x03,0x04,0x07,0x04,0x04,0x02}, 
#define PIX_A_elig   {0xF8,0x24,0x22,0xFE,0x22,0x02, 0x07,0x00,0x00,0x07,0x04,0x04}, 
#define PIX_O_elig   {0xFC,0x02,0x02,0xFE,0x22,0x22, 0x03,0x04,0x04,0x07,0x04,0x04}, 

#define PIX_d_eth    {0xE0,0x10,0x10,0x10,0x22,0xFF, 0x03,0x04,0x04,0x04,0x04,0x07}, 
#define PIX_D_eth    {0x20,0xFE,0x22,0x02,0x02,0xFC, 0x00,0x07,0x04,0x04,0x04,0x03}, 

#define PIX_a_grave  {0x80,0x49,0x4A,0x48,0x48,0xF0, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_e_grave  {0xF0,0x89,0x8A,0x88,0x88,0x70, 0x03,0x04,0x04,0x04,0x04,0x00}, 
#define PIX_i_grave  {0x00,0x00,0x09,0xFA,0x00,0x00, 0x00,0x00,0x00,0x07,0x00,0x00}, 
#define PIX_o_grave  {0xF0,0x08,0x08,0x09,0x0A,0xF0, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_u_grave  {0xF8,0x01,0x02,0x00,0x00,0xF8, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_A_grave  {0xE0,0x90,0x89,0x8A,0x90,0xE0, 0x07,0x00,0x00,0x00,0x00,0x07}, 
#define PIX_E_grave  {0xFC,0x44,0x45,0x46,0x44,0x04, 0x07,0x04,0x04,0x04,0x04,0x04}, 
#define PIX_I_grave  {0x00,0x00,0x08,0xF9,0x0A,0x00, 0x00,0x00,0x04,0x07,0x04,0x00}, 
#define PIX_O_grave  {0xF8,0x04,0x05,0x06,0x04,0xF8, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_U_grave  {0xFC,0x00,0x01,0x02,0x00,0xFC, 0x03,0x04,0x04,0x04,0x04,0x03}, 

#define PIX_a_ogon   {0x80,0x48,0x48,0x48,0x48,0xF0, 0x03,0x04,0x04,0x04,0x0A,0x0B}, 
#define PIX_e_ogon   {0xF0,0x88,0x88,0x88,0x88,0x70, 0x01,0x02,0x06,0x0A,0x0A,0x00}, 
#define PIX_A_ogon   {0xF8,0x44,0x42,0x42,0x44,0xF8, 0x07,0x00,0x00,0x02,0x05,0x05}, 
#define PIX_E_ogon   {0xFE,0x22,0x22,0x22,0x22,0x02, 0x03,0x02,0x02,0x06,0x0A,0x0A}, 

#define PIX_a_ring   {0x80,0x4A,0x4D,0x4A,0x48,0xF0, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_u_ring   {0xF8,0x00,0x02,0x05,0x02,0xF8, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_A_ring   {0xE0,0x90,0x8A,0x8D,0x92,0xE0, 0x07,0x00,0x00,0x00,0x00,0x07}, 

#define PIX_s_sharp  {0x00,0xFC,0x02,0x12,0x2C,0xC0, 0x00,0x07,0x00,0x01,0x02,0x01}, 

#define PIX_o_slash  {0xE0,0x10,0x08,0x88,0x50,0xE0, 0x01,0x02,0x05,0x04,0x02,0x01}, 
#define PIX_O_slash  {0xF8,0x84,0x42,0x22,0x14,0xF8, 0x01,0x02,0x04,0x04,0x02,0x01}, 

#define PIX_l_stroke {0x00,0x00,0x42,0xFC,0x20,0x00, 0x00,0x00,0x00,0x03,0x04,0x00}, 
#define PIX_L_stroke {0x40,0xFE,0x20,0x00,0x00,0x00, 0x07,0x04,0x04,0x04,0x04,0x04}, 

#define PIX_a_uml    {0x80,0x4A,0x48,0x4A,0x48,0xF0, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_e_uml    {0xF0,0x8A,0x88,0x88,0x8A,0x70, 0x03,0x04,0x04,0x04,0x04,0x00}, 
#define PIX_i_uml    {0x00,0x02,0x08,0xF8,0x02,0x00, 0x00,0x00,0x00,0x07,0x00,0x00}, 
#define PIX_o_uml    {0xF0,0x0A,0x08,0x08,0x0A,0xF0, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_u_uml    {0xF8,0x02,0x00,0x00,0x02,0xF8, 0x03,0x04,0x04,0x04,0x02,0x07}, 
#define PIX_y_uml    {0xF8,0x02,0x00,0x00,0x82,0xF8, 0x04,0x09,0x09,0x09,0x08,0x07}, 
#define PIX_A_uml    {0xF0,0x49,0x44,0x44,0x49,0xF0, 0x07,0x00,0x00,0x00,0x00,0x07}, 
#define PIX_E_uml    {0xFC,0x45,0x44,0x44,0x45,0x04, 0x07,0x04,0x04,0x04,0x04,0x04}, 
#define PIX_I_uml    {0x00,0x00,0x05,0xFC,0x05,0x00, 0x00,0x00,0x04,0x07,0x04,0x00}, 
#define PIX_O_uml    {0xF8,0x05,0x04,0x04,0x05,0xF8, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_U_uml    {0xFC,0x01,0x00,0x00,0x01,0xFC, 0x03,0x04,0x04,0x04,0x04,0x03}, 
#define PIX_Y_uml    {0x00,0x3C,0x41,0x80,0x41,0x3C, 0x00,0x00,0x00,0x07,0x00,0x00}, 

#include "language-dependent_characters.h"

 #if defined LCD_CYRILLIC     	
{0x02,0xFE,0x22,0x12,0x12,0xE6, 0x04,0x07,0x04,0x04,0x04,0x03},  /* 0x80 Cyr_B    */
{0x02,0xFE,0x02,0x02,0x02,0x06, 0x04,0x07,0x04,0x00,0x00,0x00},  /* 0x81 Cyr_G    */
{0x16,0xF6,0x90,0xD0,0x16,0x36, 0x04,0x07,0x04,0x05,0x04,0x06},  /* 0x82 Cyr_Jo   */
{0x00,0xDE,0x70,0xFE,0x70,0xDE, 0x00,0x07,0x00,0x07,0x00,0x07},  /* 0x83 Cyr_Tsch */
{0x0E,0x04,0x22,0x22,0x54,0x88, 0x02,0x04,0x04,0x04,0x02,0x01},  /* 0x84 Cyr_Z    */
{0x00,0xFE,0xC0,0x70,0x1C,0xFE, 0x00,0x07,0x01,0x00,0x00,0x07},  /* 0x85 Cyr_I    */
{0x00,0xF8,0x82,0xC6,0x62,0xF8, 0x00,0x07,0x01,0x00,0x00,0x07},  /* 0x86 Cyr_J    */
{0x00,0xF8,0x04,0x02,0xFE,0x02, 0x04,0x07,0x00,0x04,0x07,0x04},  /* 0x87 Cyr_L    */
{0x00,0xFE,0x02,0x02,0x02,0xFE, 0x00,0x07,0x00,0x00,0x00,0x07},  /* 0x88 Cyr_P    */
{0x02,0x3E,0x40,0x40,0xFE,0x02, 0x00,0x02,0x04,0x04,0x03,0x00},  /* 0x89 Cyr_U    */
{0x00,0xF0,0x0A,0xFE,0x0A,0xF0, 0x00,0x01,0x0A,0x0F,0x0A,0x01},  /* 0x8a Cyr_F    */
{0x02,0x7E,0x80,0x42,0xFE,0x02, 0x00,0x00,0x00,0x04,0x07,0x04},  /* 0x8b Cyr_Tsch */
{0x00,0xFE,0x00,0xFE,0x00,0xFE, 0x00,0x07,0x04,0x07,0x04,0x07},  /* 0x8c Cyr_Sch  */
{0x02,0xFE,0x42,0x20,0x20,0xC0, 0x04,0x07,0x04,0x04,0x04,0x03},  /* 0x8d Cyr_HH   */
{0xFE,0x40,0x20,0xC0,0x00,0xFE, 0x07,0x04,0x04,0x03,0x00,0x07},  /* 0x8e Cyr_Y    */
{0x0E,0x04,0x72,0x22,0x24,0xF8, 0x02,0x04,0x04,0x04,0x02,0x01},  /* 0x8f Cyr_E    */
{0xFE,0x20,0xFC,0x02,0x02,0xFC, 0x07,0x00,0x03,0x04,0x04,0x03},  /* 0x90 Cyr_Ju   */
{0x3C,0x42,0xC2,0x42,0xFE,0x02, 0x04,0x07,0x01,0x00,0x07,0x04},  /* 0x91 Cyr_Ja   */
{0x00,0xF0,0x48,0x24,0x26,0xC2, 0x00,0x03,0x04,0x04,0x04,0x03},  /* 0x92 Cyr_b    */
{0x08,0xF8,0x48,0x48,0x48,0xB0, 0x04,0x07,0x04,0x04,0x04,0x03},  /* 0x93 Cyr_v    */
{0x08,0xF8,0x08,0x08,0x08,0x18, 0x04,0x07,0x04,0x00,0x00,0x00},  /* 0x94 Cyr_g    */
{0xC6,0xA6,0x90,0x90,0xA6,0xC6, 0x01,0x02,0x04,0x04,0x04,0x00},  /* 0x95 Cyr_jo   */
{0x00,0xB8,0xC0,0xF8,0xC0,0xB8, 0x00,0x07,0x00,0x07,0x00,0x07},  /* 0x96 Cyr_zsch */
{0x38,0x10,0x08,0x48,0xA8,0x10, 0x03,0x04,0x04,0x04,0x04,0x03},  /* 0x97 Cyr_z    */
{0x00,0xF8,0x80,0xC0,0x60,0xF8, 0x00,0x07,0x01,0x00,0x00,0x07},  /* 0x98 Cyr_i    */
{0x00,0xF0,0x00,0x8C,0xC6,0xF0, 0x00,0x07,0x03,0x01,0x00,0x07},  /* 0x99 Cyr_j    */
{0x08,0xF8,0x48,0xE0,0x38,0x08, 0x04,0x07,0x04,0x01,0x07,0x04},  /* 0x9a Cyr_k    */
{0x00,0xE0,0x10,0x08,0xF8,0x08, 0x04,0x07,0x00,0x04,0x07,0x04},  /* 0x9b Cyr_l    */
{0x00,0xF8,0x70,0xC0,0x70,0xF8, 0x00,0x07,0x00,0x01,0x00,0x07},  /* 0x9c Cyr_m    */
{0x00,0xF8,0x40,0x40,0x40,0xF8, 0x00,0x07,0x00,0x00,0x00,0x07},  /* 0x9d Cyr_n    */
{0x00,0xF8,0x08,0x08,0x08,0xF8, 0x00,0x07,0x00,0x00,0x00,0x07},  /* 0x9e Cyr_p    */
{0x00,0x38,0x08,0xF8,0x08,0x38, 0x00,0x00,0x04,0x07,0x04,0x00},  /* 0x9f Cyr_t    */
{0x08,0xF8,0x00,0x00,0xF8,0x08, 0x00,0x00,0x01,0x05,0x07,0x04},  /* 0xa0 Cyr_tsch    */
{0xF8,0x00,0xF0,0x00,0xF8,0x00, 0x07,0x04,0x07,0x04,0x07,0x00},  /* 0xa1 Cyr_sch     */
{0x38,0x08,0xF8,0x40,0x20,0xC0, 0x00,0x04,0x07,0x04,0x04,0x03},  /* 0xa2 Cyr_hh      */
{0xF8,0x40,0x20,0xC0,0x00,0xF8, 0x07,0x04,0x04,0x03,0x00,0x07},  /* 0xa3 Cyr_y       */
{0x08,0xF8,0x40,0x20,0x20,0xC0, 0x04,0x07,0x04,0x04,0x04,0x03},  /* 0xa4 Cyr_ww      */
{0x38,0x10,0x48,0x48,0x50,0xE0, 0x01,0x02,0x04,0x04,0x02,0x01},  /* 0xa5 Cyr_e       */
{0xF8,0x40,0xF0,0x08,0x08,0xF0, 0x07,0x00,0x03,0x04,0x04,0x03},  /* 0xa6 Cyr_ju      */
{0x70,0x88,0x88,0x88,0xF0,0x08, 0x04,0x06,0x01,0x00,0x07,0x04},  /* 0xa7 Cyr_ja      */
{0x00,0xF8,0x04,0x02,0xFE,0x02, 0x0C,0x07,0x04,0x04,0x07,0x0C},  /* 0xa8 Cyr_D       */
{0xFE,0x00,0x00,0x00,0xFE,0x00, 0x07,0x04,0x04,0x04,0x07,0x0C},  /* 0xa9 Cyr_C       */
{0xFE,0x00,0xFE,0x00,0xFE,0x00, 0x07,0x04,0x07,0x04,0x07,0x0C},  /* 0xaa Cyr_Schtsch */
{0x00,0xE0,0x10,0x08,0xF8,0x08, 0x0C,0x07,0x04,0x04,0x07,0x0C},  /* 0xab Cyr_d       */
{0xE0,0x14,0xFC,0x14,0xE0,0x00, 0x01,0x0A,0x0F,0x0A,0x01,0x00},  /* 0xac Cyr_f       */
{0xF8,0x00,0x00,0x00,0xF8,0x00, 0x07,0x04,0x04,0x04,0x07,0x0C},  /* 0xad Cyr_c       */
{0xF8,0x00,0xF8,0x00,0xF8,0x00, 0x07,0x04,0x07,0x04,0x07,0x0C},  /* 0xae Cyr_schtsch */
 #endif
};
#else
 #ifndef __ASSEMBLER__
 extern const unsigned char PROGMEM sfont[9][(FONT_WIDTH * ((FONT_HEIGHT+7)/8))];
 extern const unsigned char PROGMEM nfont[(CHAR_COUNT-28)][((FONT_WIDTH-1) * ((FONT_HEIGHT+7)/8))];
 #endif
#endif
/* ****************************** EOF ***************************************** */

