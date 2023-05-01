# SPDX-FileCopyrightText: 2022-2023 Daniel Aimé Valcour <fosssweeper@gmail.com>
#
# SPDX-License-Identifier: MIT

add_executable(cp_example "")
add_executable(cp::example ALIAS cp_example)
add_subdirectory(src)
target_link_libraries(cp_example
    PUBLIC
        cp::cp
)
