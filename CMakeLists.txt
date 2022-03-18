cmake_minimum_required(VERSION 3.21)
project(assembler C)

set(CMAKE_C_STANDARD 99)
set(GCC_COVERAGE_COMPILE_FLAGS "-g -O0")

add_executable(assembler unused/mystrcopy.c Main.c map.c unused/maptest.c IO.c IO.h mappings.h mappings.c codemake.c codemake.h)
