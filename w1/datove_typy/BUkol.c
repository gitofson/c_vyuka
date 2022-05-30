//
// Created by stemberk on 30.05.2022.
//
// 1. zjistěte velikost datových typů int, short, long, float a double pomocí
// operátoru sizeof(). Výsledek vypište na obrazovku.
#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
// sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));

    return 0;
}
