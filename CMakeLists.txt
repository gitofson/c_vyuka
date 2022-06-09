cmake_minimum_required(VERSION 3.22)
project(c_vyuka C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(w1)
include_directories(w1/datove_typy)

add_executable(c_vyuka
#        w1/preprocesor/BPriklad.c w1/preprocesor/CUkol.c
#        w2/funkce/AUvod.c
#        w2/funkce/BUmisteniDefiniceFunkce.c w2/oblast_platnosti_identifikatoru/AUvod.c
        w2/oblast_platnosti_identifikatoru/BCtiDopis.c)
