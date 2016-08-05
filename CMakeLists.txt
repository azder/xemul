cmake_minimum_required(VERSION 3.3.2)
project(xemul C)

set(SOURCE_FILES src/main.c src/custom.h src/types.h src/regs.c src/regs.h)
add_executable(xemul ${SOURCE_FILES})