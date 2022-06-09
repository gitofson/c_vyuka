//
// Created by stemberk on 09.06.2022.
//
#include<stdio.h>
// Umistění definice funkce - první možnost:
// pomocí funkčního prototypu
double pikrat(double); // úplný funkční prototyp

main(){
    // Umistění definice funkce - další možnost:
    // deklarace návratového typu a jména
    //double pikrat();
    double r;
    printf ("Zadej polomer: ");
    scanf("%lf", &r);
    printf("Obvod kruhu je %f\n", 2 * pikrat(r));
}

double pikrat(double x) {
    return(x * 3.14);
}