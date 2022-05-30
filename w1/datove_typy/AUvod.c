//
// Created by stemberk on 30.05.2022.
//
// Jazyk C disponuje následujícími typy:
// celočíselné:
// int               - velikost záleží na architektuře),
// long int (long)   - 64 bit
// short int (short) - 16 bit
// char              - 8 bit
//
// pomocí slova signed (default) a unsigned rozlišujeme, zda rozsah čísla bude
// od -2^(n-1) do +2^(n-1)-1 pro signed a od 0 do +2^n-1 pro unsigned

// plovoucí řídová čárka:
// float             - 64bit
// double            - 128bit

// C neposkytuje datový typ boolean. Namísto toho používáme int, který znamená
// 0                     - false
// cokoliv jiného, než 0 - true;

// v knihovně stdint.h je možné nalézt následující definované typy:
// více zde: https://www.gnu.org/software/libc/manual/html_node/Integers.html
// int8_t
// int16_t
// int32_t
// int64_t
// uint8_t
// uint16_t
// uint32_t
// uint64_t

#include <stdio.h>
#include <stdint.h>
int main(int argc, char ** argv) {
    printf("hello\n");
}
