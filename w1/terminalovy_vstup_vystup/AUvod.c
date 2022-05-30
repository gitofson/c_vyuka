//
// Created by stemberk on 30.05.2022.
//
// přidání popisu I/O funkcí z hlavičkového (header) souboru:
#include <stdio.h>
// Následující program přečte znak z klávesnice, vytiskne ho a odřádkuje:
int main(int argc, char ** argv) {
    // skutečně lepší použít v tomto případě int a ne char
    int c;
    c = getchar();
    putchar(c);
    putchar('\n');
}