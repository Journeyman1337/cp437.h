<!--
SPDX-FileCopyrightText: 2022 Daniel Aimé Valcour <fosssweeper@gmail.com>

SPDX-License-Identifier: MIT
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

