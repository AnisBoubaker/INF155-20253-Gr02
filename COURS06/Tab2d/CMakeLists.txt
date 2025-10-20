cmake_minimum_required(VERSION 3.26)
project(Tab2d C)

set(CMAKE_C_STANDARD 11)

add_executable(Tab2d main.c
        stat2d.h
        stat2d.c)
