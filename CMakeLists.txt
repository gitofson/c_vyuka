cmake_minimum_required(VERSION 3.22)
project(c_vyuka C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(w1)
include_directories(w1/datove_typy)

add_executable(c_vyuka
        w1/terminalovy_vstup_vystup/AUvod.c)
