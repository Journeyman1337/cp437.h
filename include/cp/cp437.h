// SPDX-FileCopyrightText: 2022 Daniel Aimé Valcour <fosssweeper@gmail.com>
//
// SPDX-License-Identifier: MIT

/*
  MIT License

  Copyright (c) 2021-2023 Daniel Aimé Valcour

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/

/*
    cp437.h v2.0.0
    MIT licensed codepage 437 lookup table library
    The source for this library can be found on GitHub:
    https://github.com/Journeyman-dev/cp437.h

    HOW TO SETUP
    The cp437.h library can be included in your project in one of two different ways:
        - Copy and paste the cp437.h file directly into your source tree.
        - Clone the GitHub as a git submodule to your project's repository.
          1. In bash console from the root directory of your project's repository:
                git submodule add https://github.com/Journeyman-dev/cp437.h
                git submodule update --init
          2. In your project's top level CMakeLists.txt:
                add_subdirectory(cp437.h)
          3. Link it with the CMake target of your project:
               target_link_libraries(YOUR_TARGET_NAME PRIVATE cp::cp)
        - Fetch it using CMake FetchContent:
          1. Fetch it in your project's CMakeLists.txt:
                Include(FetchContent)
                FetchContent_Declare(
                        cp
                        GIT_REPOSITORY https://github.com/Journeyman-dev/cp437.h
                        GIT_TAG        v2.0.0 # replace with the version of the library that you want
                        FIND_PACKAGE_ARGS
                )
                set(CP_BUILD_EXAMPLE OFF) # set this to ON if you want to build the example target
                FetchContent_MakeAvailable(cp)
          2. Link it with the CMake target of your project:
                target_link_libraries(YOUR_TARGET_NAME PRIVATE cp::cp)

    Include this file in one .c or .cpp within your project after defining the implemention macro
    like so:

        #define CP437_IMPLEMENTATION
        #include <cp/cp437.h>

     Now, you can include this header in any other translation unit, and have access to the wchar_t
     array CP_WCHAR_LOOKUP_TABLE, which contains the wchar_t values for every codepage 437 glyph. This
     header also includes macros for each codepage 437 glyph to quickly get the unicode wchar_t value.
   CHANGELOG
   - Version 2.0
       - Used wchar_t literals instead of hex values to help prevent mistakes.
       - Imrproved the names of the macros to be more clear.
       - Replaced the unicode lookup table with a wide character string of all codepage 437 characters 
       in order.
       - Added an 8 bit grayscale bitmap data array of a basic codepage 437 spritesheet.
       - Fixed a lot of mistakes.
       - Changed license to MIT.
   - Version 1.2.1
       - Fixed typo in unicode lookup table value.
   - Version 1.2
       - Changed "Pipe" character to "Broken Bar" to follow the IBM standard.
       - Simplified the names of the macros to make glyphs easier to type by name.
   - Version 1.1
       - Changed the format of the table so it is easier to compare to libtcod.
   - Version 1.0
       - Initial release.
*/

#ifndef CP437_H
#define CP437_H
#ifdef __cplusplus
extern "C"
{
#endif

#include <wchar.h>

// The amount of characters found in codepage 437.
#define CP_CODEPAGE_SIZE 256

// A wide character string containing all characters of codepage 437 in order.
extern const wchar_t* const CP_WCHAR_LOOKUP_TABLE;

// "\0"
#define CP_NULL 0
// "☺"
#define CP_SMILE 1
// "☻"
#define CP_INV_SMILE 2
// "♥"
#define CP_HEART 3
// "♦"
#define CP_DIAMOND 4
// "♣"
#define CP_CLUB 5
// "♠"
#define CP_SPADE 6
// "•"
#define CP_BULLET 7
// "◘"
#define CP_INV_BULLET 8
// "○"
#define CP_CIRCLE 9
// "◙"
#define CP_INV_CIRCLE 10
// "♂"
#define CP_MALE 11
// "♀"
#define CP_FEMALE 12
// "♪"
#define CP_EIGHTH 13
// "♫"
#define CP_EIGHTH_PAIR 14
// "☼"
#define CP_SOL 15
// "►"
#define CP_RIGHT_TRIANGLE 16
// "◄"
#define CP_LEFT_TRIANGLE 17
// "↕"
#define CP_VERTICAL_ARROWS 18
// "‼"
#define CP_DOUBLE_EXCLAMATION 19
// "¶"
#define CP_PILCROW 20
// "§"
#define CP_SILCROW 21
// "▬"
#define CP_RECTANGLE 22
// "↨"
#define CP_VERTICAL_BASE_ARROWS 23
// "↑"
#define CP_UP_ARROW 24
// "↓"
#define CP_DOWN_ARROW 25
// "→"
#define CP_RIGHT_ARROW 26
// "←"
#define CP_LEFT_ARROW 27
// "∟"
#define CP_RIGHT_ANGLE 28
// "↔"
#define CP_HORIZONTAL 29
// "▲"
#define CP_UP_TRIANGLE 30
// "▼"
#define CP_DOWN_TRIANGLE 31
// " "
#define CP_SPACE 32
// "!"
#define CP_EXCLAMATION 33
// "\""
#define CP_DOUBLE_QUOTE 34
// "#"
#define CP_HASH 35
// "$""
#define CP_DOLLAR 36
// "%"
#define CP_PERCENT 37
// "&"
#define CP_AMPERSAND 38
// "'"
#define CP_APOSTROPHE 39
// "("
#define CP_OPEN_PAREN 40
// ")"
#define CP_CLOSED_PAREN 41
// "*"
#define CP_ASTERISK 42
// "+"
#define CP_PLUS 43
// ","
#define CP_COMMA 44
// "-"
#define CP_MINUS 45
// "."
#define CP_PERIOD 46
// "/"
#define CP_FORWARD_SLASH 47
// "0"
#define CP_0 48
// "1"
#define CP_1 49
// "2"
#define CP_2 50
// "3"
#define CP_3 51
// "4"
#define CP_4 52
// "5"
#define CP_5 53
// "6"
#define CP_6 54
// "7"
#define CP_7 55
// "8"
#define CP_8 56
// "9"
#define CP_9 57
// ":"
#define CP_COLON 58
// ";"
#define CP_SEMICOLON 59
// "<"
#define CP_LESS 60
// "="
#define CP_EQUALS 61
// ">"
#define CP_GREATER 62
// "?"
#define CP_QUESTION 63
// "@"
#define CP_AT 64
// "A"
#define CP_CAP_A 65
// "B"
#define CP_CAP_B 66
// "C"
#define CP_CAP_C 67
// "D"
#define CP_CAP_D 68
// "E"
#define CP_CAP_E 69
// "F"
#define CP_CAP_F 70
// "G"
#define CP_CAP_G 71
// "H"
#define CP_CAP_H 72
// "I"
#define CP_CAP_I 73
// "J"
#define CP_CAP_J 74
// "K"
#define CP_CAP_K 75
// "L"
#define CP_CAP_L 76
// "M"
#define CP_CAP_M 77
// "N"
#define CP_CAP_N 78
// "O"
#define CP_CAP_O 79
// "P"
#define CP_CAP_P 80
// "Q"
#define CP_CAP_Q 81
// "R"
#define CP_CAP_R 82
// "S"
#define CP_CAP_S 83
// "T"
#define CP_CAP_T 84
// "U"
#define CP_CAP_U 85
// "V"
#define CP_CAP_V 86
// "W"
#define CP_CAP_W 87
// "X"
#define CP_CAP_X 88
// "Y"
#define CP_CAP_Y 89
// "Z"
#define CP_CAP_Z 90
// "["
#define CP_OPEN_SQUARE_BRACKET 91
// "\\"
#define CP_BACKSLASH 92
// "]"
#define CP_CLOSED_SQUARE_BRACKET 93
// "^"
#define CP_CARET 94
// "_"
#define CP_LOW_LINE 95
// "`"
#define CP_GRAVE 96
// "a"
#define CP_LOW_A 97
// "b"
#define CP_LOW_B 98
// "c"
#define CP_LOW_C 99
// "d"
#define CP_LOW_D 100
// "e"
#define CP_LOW_E 101
// "f"
#define CP_LOW_F 102
// "g"
#define CP_LOW_G 103
// "h"
#define CP_LOW_H 104
// "i"
#define CP_LOW_I 105
// "j"
#define CP_LOW_J 106
// "k"
#define CP_LOW_K 107
// "l"
#define CP_LOW_L 108
// "m"
#define CP_LOW_M 109
// "n"
#define CP_LOW_N 110
// "o"
#define CP_LOW_O 111
// "p"
#define CP_LOW_P 112
// "q"
#define CP_LOW_Q 113
// "r"
#define CP_LOW_R 114
// "s"
#define CP_LOW_S 115
// "t"
#define CP_LOW_T 116
// "u"
#define CP_LOW_U 117
// "v"
#define CP_LOW_V 118
// "w"
#define CP_LOW_W 119
// "x"
#define CP_LOW_X 120
// "y"
#define CP_LOW_Y 121
// "z"
#define CP_LOW_Z 122
// "{"
#define CP_OPEN_CURLY_BRACE 123
// "|"
#define CP_BROKEN_BAR 124
// "}"
#define CP_CLOSED_CURLY_BRACE 125
// "~"
#define CP_TILDE 126
// "⌂"
#define CP_HOUSE 127
// "Ç"
#define CP_CAP_C_CEDILLA 128
// "ü"
#define CP_LOW_U_DIAERESIS 129
// "é"
#define CP_LOW_E_ACUTE 130
// "â"
#define CP_LOW_A_CIRCUMFLEX 131
// "ä"
#define CP_LOW_A_DIARESIS 132
// "à"
#define CP_LOW_A_GRAVE 133
// "å"
#define CP_LOW_A_RING 134
// "ç"
#define CP_LOW_C_CEDILLA 135
// "ê"
#define CP_LOW_E_CIRCUMFLEX 136
// "ë"
#define CP_LOW_E_DIARESIS 137
// "è"
#define CP_LOW_E_GRAVE 138
// "ï"
#define CP_LOW_I_DIARESIS 139
// "î"
#define CP_LOW_I_CIRCUMFLEX 140
// "ì"
#define CP_LOW_I_GRAVE 141
// "Ä"
#define CP_CAP_A_DIARESIS 142
// "Å"
#define CP_CAP_A_RING 143
// "É"
#define CP_CAP_E_ACUTE 144
// "æ"
#define CP_LOW_AE 145
// "Æ"
#define CP_CAP_AE 146
// "ô"
#define CP_LOW_O_CIRCUMFLEX 147
// "ö"
#define CP_LOW_O_DIARESIS 148
// "ò"
#define CP_LOW_O_GRAVE 149
// "û"
#define CP_LOW_U_CIRCUMFLEX 150
// "ù"
#define CP_LOW_U_GRAVE 151
// "ÿ"
#define CP_LOW_Y_DIARESIS 152
// "Ö"
#define CP_CAP_O_DIARESIS 153
// "Ü"
#define CP_CAP_U_DIARESIS 154
// "¢
#define CP_CENT 155
// "£"
#define CP_POUND 156
// "¥"
#define CP_YEN 157
// "₧"
#define CP_PESETA 158
// "ƒ"
#define CP_F_HOOK 159
// "á"
#define CP_LOW_A_ACUTE 160
// "í"
#define CP_LOW_I_ACUTE 161
// "ó"
#define CP_LOW_O_ACUTE 162
// "ú"
#define CP_LOW_U_ACUTE 163
// "ñ"
#define CP_LOW_N_TILDE 164
// "Ñ"
#define CP_CAPITAL_N_TILDE 165
// "ª"
#define CP_FEMALE_ORDINAL 166
// "º"
#define CP_MALE_ORDINAL 167
// "¿"
#define CP_INV_QUESTION 168
// "⌐"
#define CP_NEGATION 169
// "¬"
#define CP_INV_NEGATION 170
// "½"
#define CP_HALF 171
// "¼"
#define CP_QUARTER 172
// "¡"
#define CP_INV_EXCLAMATION 173
// "«"
#define CP_LEFT_DOUBLE_ANGLE 174
// "»"
#define CP_RIGHT_DOUBLE_ANGLE 175
// "░"
#define CP_LIGHT_SHADE 176
// "▒"
#define CP_MEDIUM_SHADE 177
// "▓"
#define CP_DARK_SHADE 178
// "│"
#define CP_THIN_VERTICAL 179
// "┤"
#define CP_THIN_LEFT_THIN_VERTICAL 180
// "╡"
#define CP_THICK_LEFT_THIN_VERTICAL 181
// "╢"
#define CP_THIN_LEFT_THICK_VERTICAL 182
// "╖"
#define CP_THIN_LEFT_THICK_DOWN 183
// "╕"
#define CP_THICK_LEFT_THIN_DOWN 184
// "╣"
#define CP_THICK_LEFT_THICK_VERTICAL 185
// "║"
#define CP_THICK_VERTICAL 186
// "╗"
#define CP_THICK_LEFT_THICK_DOWN 187
// "╝"
#define CP_THICK_LEFT_THICK_UP 188
// "╜"
#define CP_THIN_LEFT_THICK_UP 189
// "╛"
#define CP_THICK_LEFT_THIN_UP 190
// "┐"
#define CP_THIN_LEFT_THIN_DOWN 191
// "└"
#define CP_THIN_RIGHT_THIN_UP 192
// "┴"
#define CP_THIN_HORIZONTAL_THIN_UP 193
// "┬"
#define CP_THIN_HORIZONTAL_THIN_DOWN 194
// "├"
#define CP_THIN_RIGHT_THIN_VERTICAL 195
// "─"
#define CP_THIN_HORIZONTAL 196
// "┼"
#define CP_THIN_HORIZONTAL_THIN_VERTICAL 197
// "╞"
#define CP_THICK_RIGHT_THIN_VERTICAL 198
// "╟"
#define CP_THIN_RIGHT_THICK_VERTICAL 199
// "╚"
#define CP_THICK_RIGHT_THICK_UP 200
// "╔"
#define CP_THICK_RIGHT_THICK_DOWN 201
// "╩"
#define CP_THICK_HORIZONTAL_THICK_UP 202
// "╦"
#define CP_THICK_HORIZONTAL_THICK_DOWN 203
// "╠"
#define CP_THICK_RIGHT_THICK_VERTICAL 204
// "═"
#define CP_THICK_HORIZONTAL 205
// "╬"
#define CP_THICK_HORIZONTAL_THICK_VERTICAL 206
// "╧"
#define CP_THICK_HORIZONTAL_THIN_UP 207
// "╨"
#define CP_THIN_HORIZONTAL_THICK_UP 208
// "╤"
#define CP_THICK_HORIZONTAL_THIN_DOWN 209
// "╥"
#define CP_THIN_HORIZONTAL_THIN_DOWN 210
// "╙"
#define CP_THIN_RIGHT_THICK_UP 211
// "╘"
#define CP_THICK_RIGHT_THIN_UP 212
// "╒"
#define CP_THICK_RIGHT_THIN_DOWN 213
// "╓"
#define CP_THIN_RIGHT_THICK_DOWN 214
// "╫"
#define CP_THIN_HORIZONTAL_THICK_VERTICAL 215
// "╪"
#define CP_THICK_HORIZONTAL_THIN_VERTICAL 216
// "┘"
#define CP_THIN_LEFT_THIN_UP 217
// "┌"
#define CP_THIN_RIGHT_THIN_DOWN 218
// "█"
#define CP_BLOCK 219
// "▄"
#define CP_LOWER_BLOCK 220
// "▌"
#define CP_LEFT_BLOCK 221
// "▐"
#define CP_RIGHT_BLOCK 222
// "▀"
#define CP_TOP_BLOCK 223
// "α"
#define CP_ALPHA 224
// "ß"
#define CP_BETA 225
// "Γ"
#define CP_GAMMA 226
// "π"
#define CP_PI 227
// "Σ"
#define CP_CAP_SIGMA 228
// "σ"
#define CP_LOW_SIGMA 229
// "µ"
#define CP_MU 230
// "τ"
#define CP_TAU 231
// "Φ"
#define CP_CAP_PHI 232
// "Θ"
#define CP_THETA 233
// "Ω"
#define CP_OMEGA 234
// "δ"
#define CP_DELTA 235
// "∞"
#define CP_INFINITY 236
// "φ"
#define CP_LOW_PHI 237
// "ε"
#define CP_LOW_EPSILON 238
// "∩"
#define CP_INTERSECTION 239
// "≡"
#define CP_TRIPPLE_BAR 240
// "±"
#define CP_PLUS_MINUS 241
// "≥"
#define CP_GREATER_EQUAL 242
// "≤"
#define CP_LESS_EQUAL 243
// "⌠"
#define CP_INTEGRAL_TOP 244
// "⌡"
#define CP_INTEGRAL_BOTTOM 245
// "÷"
#define CP_DIVISION 246
// "≈"
#define CP_ABOUT 247
// "°"
#define CP_DEGREE 248
// "∙"
#define CP_ALT_BULLET 249
// "·"
#define CP_INTERPUNCT 250
// "√"
#define CP_SQRT 251
// "ⁿ"
#define CP_SUB_N 252
// "²"
#define CP_SUPER_2 253
// "■"
#define CP_SQUARE 254
// " "
#define CP_NBSP 255

#ifdef CP437_IMPLEMENTATION

#  ifndef CP437_IMPLEMENTED
#    define CP437_IMPLEMENTED

  const wchar_t* const CP_WCHAR_LOOKUP_TABLE = 
  L"\0☺☻♥♦♣♠•◘○◙♂♀♀♪♫☼►◄↕‼¶§▬↨↑↓→←∟↔▲▼"
  L" !\"#$%&'()*+,-./0123456789:;<=>?@ABC"
  L"DEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefg"
  L"hijklmnopqrstuvwxyz{|}~⌂Çüéâäàåçêëèïî"
  L"ìÄÅÉæÆôöòûùÿÖÜ¢£¥₧ƒáíóúñÑªº¿⌐¬½¼¡«»░▒"
  L"▓│┤╡╢╖╕╣║╗╝╜╛┐└┴┬├─┼╞╟╚╔╩╦╠═╬╧╨╤╥╙╘╒╓"
  L"╫╪┘┌█▄▌▐▀αßΓπΣσµτΦΘΩδ∞φε∩≡±≥≤⌠⌡÷≈°∙·√ⁿ²■ ";

#  endif

#endif

#endif
#ifdef __cplusplus
}
#endif
