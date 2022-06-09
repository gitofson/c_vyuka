//
// Created by stemberk on 09.06.2022.
//
//systémové hlavičkové soubory
#include<stdio.h>
//vlastní hlavičkové soubory
#include "stddfn.h" //standardní definice
#include "kru_io.h"
#include "kru_main.h"

//deklarace importovaných objektů

//definice globálních proměnných

//lokální definice symbolických konstant a maker
#define kontrola(x)  ( (x >= 0.0) ? x : CHYBA_DAT )

//lokální definice nových typů

//definice lokálních proměnných (globálních v rámci tohoto souboru)
static double polomer;

//úplné funkční prototypy lokálních funkcí

//funkce main()

//definice lokálních funkcí

//definice globálních funkcí
double vstup_dat(){
    printf("Zadej polomer kruznice (kladne realne cislo) : ");
    scanf("%lf", &polomer);
    return (kontrola(polomer));
}
void vystup_dat(double obsah){
    double prumer;
    printf("Obsah kruhu o polomeru %6.2f je %.2f \n",
           polomer, obsah);
    prumer = vyp_prumeru(polomer);
    printf("Obvod kruhu o polomeru %6.2 je %.2f \n",
           prumer, obvod);
}