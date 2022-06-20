//
// Created by stemberk on 20.06.2022.
//
#include <stdio.h>
#include <stdlib.h>
// Pointer (ukazatel) v jazyce C představuje adresu v paměti.
// Operátory:
// - & - referenční oprátor (viz námi používaná funkce scanf)
// - * - dereferenční operátor

int main(int argc, char ** argv) {
    // *p_i představuje hodnotu typu int. Ukazatel na tuto adresu v paměti je p_i
    // i představuje hodnotu typu int. Ukazatel na tuto adresu v paměti je &i
    int *p_i, i, j ;
    // teď má p_i hodnotu NULL, pro jeho použití je potřeba buď
    // alokovat paměť pomocí malloc (a alokaci později zrušit pomocí free(p_i))
    p_i = malloc(sizeof (int));
    // nebo použít adresu existující proměnné pomocí referenčního operátoru
    //p_i = i;

    // mohu tedy použít:
    i =    3; // do i dá hodnotu 3
    *p_i = 4; // na adresi v p_i (kde je uložen int) dá hodnotu 4
    i    = *p_i; // do i dá obsah z adresy p_i
    *p_i = i; // na adresu v p_i dá obsah i

    p_i = &i; *p_i = 4; // stejné jako i=4 (naví ještě změna ukazatele p_i)
    scanf("%d %d", &i, &j);
    p_i = (i>j) ? &i : &j;
    printf("Vetsi je %d \n", *p_i);
}
