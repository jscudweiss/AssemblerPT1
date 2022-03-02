cmake_minimum_required(VERSION 3.21)
project(assembler C)

set(CMAKE_C_STANDARD 99)

add_executable(assembler mystrcopy.c assembler.c map.c maptest.c Reader.c cleaner.c command.c command.h Reader.h cleaner.h write.c write.h IO.c IO.h)
