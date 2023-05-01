# SPDX-FileCopyrightText: 2022 Daniel Aimé Valcour <fosssweeper@gmail.com>
#
# SPDX-License-Identifier: MIT

cmake_minimum_required(VERSION 3.19)
PROJECT(cp
    VERSION 1.2
    DESCRIPTION "A header only code page 437 unicode lookup table"
    LANGUAGES C
)
option(CP_BUILD_EXAMPLE "Build the example project" OFF)
add_library(${PROJECT_NAME} INTERFACE "")
add_library(cp::cp ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME}
    INTERFACE
        "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)
if (CP_BUILD_EXAMPLE)
    add_subdirectory(example)
endif()
