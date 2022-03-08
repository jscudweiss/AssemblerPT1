cmake_minimum_required(VERSION 3.21)
project(assembler C)

set(CMAKE_C_STANDARD 99)

add_executable(assembler mystrcopy.c Main.c map.c maptest.c IO.c IO.h mappings.h mappings.c codemake.c codemake.h)
