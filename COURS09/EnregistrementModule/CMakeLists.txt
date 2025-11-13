cmake_minimum_required(VERSION 3.26)
project(EnregistrementModule C)

set(CMAKE_C_STANDARD 11)

add_executable(EnregistrementModule main.c
        mod_client.c
        mod_client.h)
