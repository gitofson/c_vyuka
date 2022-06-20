//
// Created by stemberk on 09.06.2022.
//
//systémové hlavičkové soubory
#include<stdio.h>
//vlastní hlavičkové soubory
#include "kru_io.h"
#include "kru_main.h"
//deklarace importovaných objektů

//definice globálních proměnných
double obvod;

//lokální definice symbolických konstant a maker */
#define PI      3.14

// lokální definice nových typů */

/* definice lokálních proměnných */
static double polomer;
static double obsah;

/* úplné funkční prototypy lokálních funkcí */
static void vyp_obsahu(double polomer);
static double vyp_obvodu();
static void vypocet();

/* funkce main */
main(int argc, char ** argv){
    polomer = vstup_dat();
    if(polomer == CHYBA_DAT) {
        printf("Polomer kruynice chybne zadan.");
    } else {
        vypocet();
        vystup_dat(obsah);
    }
}
/* definice lokálních funkcí */
static void vyp_obsahu(double polomer) {
    obsah = (PI * polomer *polomer);
}
static double vyp_obvodu(){
    return (PI * vyp_prumeru(polomer));
}
static void vypocet(){
    obvod = vyp_obvodu();
    vyp_obsahu(polomer);
}
/* definice globálních funkcí */
double vyp_prumeru(double polomer) {
    return (2 * polomer);
}
