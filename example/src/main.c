// SPDX-FileCopyrightText: 2022 Daniel Aimé Valcour <fosssweeper@gmail.com>
//
// SPDX-License-Identifier: MIT

#include <wchar.h>
#include <string.h>
#include <stddef.h>
#include <cp/cp437.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    wprintf(L"Codepage:\n");
    for (int glyph_y = 0; glyph_y < 8; glyph_y++)
    {
        wchar_t wstr[33];
        size_t start = glyph_y * 32;
        memcpy(wstr, CP_WCHAR_LOOKUP_TABLE + start, 32 * sizeof(wchar_t));
        wstr[32] = L'\0';
        if (glyph_y == 0)
        {
            wstr[0] = L' ';
        }
        wprintf(L"%ls\n", wstr);
    }
    wprintf(L"\nGlyphs:\n");
    for (int glyph_i = 0; glyph_i < CP_CODEPAGE_SIZE; glyph_i++)
    {
        wprintf(L"%3d %lc\n", glyph_i, CP_WCHAR_LOOKUP_TABLE[glyph_i]);
    }
    return 0;
}