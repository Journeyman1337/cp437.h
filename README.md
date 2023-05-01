<!--
SPDX-FileCopyrightText: 2022 Daniel Aimé Valcour <fosssweeper@gmail.com>

SPDX-License-Identifier: Unlicense
-->

<!--
    Created by Daniel Valcour

    This is free and unencumbered software released into the public domain.
    Anyone is free to copy, modify, publish, use, compile, sell, or
    distribute this software, either in source code form or as a compiled
    binary, for any purpose, commercial or non-commercial, and by any
    means.
    In jurisdictions that recognize copyright laws, the author or authors
    of this software dedicate any and all copyright interest in the
    software to the public domain. We make this dedication for the benefit
    of the public at large and to the detriment of our heirs and
    successors. We intend this dedication to be an overt act of
    relinquishment in perpetuity of all present and future rights to this
    software under copyright law.
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
    IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
    OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
    ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
    For more information, please refer to <https://unlicense.org>
-->

[![REUSE status](https://api.reuse.software/badge/git.fsfe.org/reuse/api)](https://api.reuse.software/info/git.fsfe.org/reuse/api)

# cp437.h

    ☺☻♥♦♣♠•◘○◙♂♀♀♪♫☼
    ►◄↕‼¶§▬↨↑↓→←∟↔▲▼
     !"#$%&'()*+,-./
    0123456789:;<=>?
    @ABCDEFGHIJKLMNO
    PQRSTUVWXYZ[\]^_
    `abcdefghijklmno
    pqrstuvwxyz{|}~⌂
    ÇüéâäàåçêëèïîìÄÅ
    ÉæÆôöòûùÿÖÜ¢£¥₧ƒ
    áíóúñÑªº¿⌐¬½¼¡«»
    ░▒▓│┤╡╢╖╕╣║╗╝╜╛┐
    └┴┬├─┼╞╟╚╔╩╦╠═╬╧
    ╨╤╥╙╘╒╓╫╪┘┌█▄▌▐▀
    αßΓπΣσµτΦΘΩδ∞φε∩
    ≡±≥≤⌠⌡÷≈°∙·√ⁿ²■

This is tiny a header only library which contains a cp437 ascii to unicode lookup table. This library is released to the public domain.

Information about how to use this library in your project is included in comments at the top of the file [cp437.h](include/cp/cp437.h).

Want to try the example project? You can set it up easily using bash console.

    git clone https://github.com/Journeyman-dev/cp437.h
    cd cp437.h -D CP_BUILD_EXAMPLE=ON
    cmake -S . -B ./build/
    cmake --build ./build/

