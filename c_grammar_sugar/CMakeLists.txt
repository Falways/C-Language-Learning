cmake_minimum_required(VERSION 3.15)
project(c_grammar_sugar C)

set(CMAKE_C_STANDARD 99)

add_executable(c_grammar_sugar main.c support.c if_test.c for_test.c func_test.c enum_test.c point_test.c callback_func_test.c struct_test.c union_test.c more_test.h more_test.c)