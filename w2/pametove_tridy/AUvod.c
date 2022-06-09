//
// Created by stemberk on 09.06.2022.
//
// Jazyk C rozeznává následující paměťové třídy
// auto - lokální proměnná, lze vynechat
// extern - používáme pro definici globální proměnné, která
//          je definována v jiném souboru zásadně bez klíčového
//          slova extern.
// static - nejčastěji využívána pro lokální proměnné funkcí,
//          které si tak ponechávají svou hodnotu mezi jednotli-
//          vými voláními těchto funkcí.
//        - v případě použití pro globální proměnnou klíčové
//          slovo static zajišťuje viditelnost této proměnné
//          či funkce pouze v rámci daného souboru.
// register - navázání proměnné na konkrétní registr počítače.
//            Výhoda v rychlém přístupu k proměnné a tím i
//            rychlejšímu programu.
#include <stdio.h>
void nasobilka(register int k){
    register int i;
    for(i=1; i<=10; i++){
        printf("%2d x %d = %2d \n", i, k, i*k);
    }
}
main(){
    nasobilka(6);
}