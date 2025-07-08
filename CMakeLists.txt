cmake_minimum_required(VERSION 3.10.0)
project(analyze VERSION 0.1.0 LANGUAGES C)

add_executable(analyze main.c)

include(CTest)
enable_testing()

