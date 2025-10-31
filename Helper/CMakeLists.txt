cmake_minimum_required(VERSION 4.2)
project(Helper VERSION 1.2.1)

include_directories(include)
add_library(${PROJECT_NAME} src/1_pointers.c src/1_print_array.c)