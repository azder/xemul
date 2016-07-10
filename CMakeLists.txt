cmake_minimum_required(VERSION 3.5)
project(xemul C)

set(SOURCE_FILES src/main.c src/custom.h src/types.h)
add_executable(xemul ${SOURCE_FILES})