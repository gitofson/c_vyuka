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
#        w2/oblast_platnosti_identifikatoru/BCtiDopis.c
        w2/pametove_tridy/AUvod.c w2/typove_modifikatory/AUvod.c w2/oddeleny_preklad_souboru/kru_main.c w2/oddeleny_preklad_souboru/stddfn.h w2/oddeleny_preklad_souboru/kru_main.h w2/oddeleny_preklad_souboru/kru_io.h w2/oddeleny_preklad_souboru/kru_io.c)
