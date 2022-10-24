cmake_minimum_required(VERSION 3.19)
PROJECT(cpfts
    VERSION 1.1
    DESCRIPTION "A header only codepage 437 unicode lookup table."
    LANGUAGES C
)
set(CP437_HEADERS
    "cp437.h"
)
list(
    TRANSFORM CP437_HEADERS
    PREPEND "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)
source_group("includes"
    FILES ${CP437_HEADERS}
)
add_library(${PROJECT_NAME} INTERFACE
    ${CP437_HEADERS}
)
target_include_directories(${PROJECT_NAME}
    INTERFACE
        "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)
target_precompile_headers(${PROJECT_NAME}
    INTERFACE
        ${CP437_HEADERS}
)
