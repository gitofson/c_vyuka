//
// Created by stemberk on 09.06.2022.
//
#include <stdio.h>
// Funkce v C definujeme podobně jako v Javě
// příklad funkce hledající max hodnotu z parametrů
int max(int a, int b) {
    return a > b ? a:b;
}
// Funkce nemusí vracet hodnotu, v tom případě označíme návratový typ
// void (stejné jako v Javě)
void ahoj() {
    printf("ahoj\n");
}
// Příklad rekurzivní funkce:
int fakt(int n) {
    return ((n <= 0) ? 1 : n * fakt(n - 1));
}

main(){
    int i;
    printf("Zadej cele cislo: ");
    scanf("%d", &i); // & zde definuje ukazatel na adresu
                           // proměnné
    printf("faktorial je %d\n", fakt(i));
}