//
// Created by stemberk on 02.06.2022.
//
// Činnost preprocesoru:
// - Zpracovává zdrojový text programu před použitím překladače.
// - Nekontroluje syntaktickou správnost programu.
// - Provádí pouze záměny textů za odpovídající hodnoty. Tzv. zracování maker.
// - Vypustí ze zdrojového textu všechny komentáře.
// - Provádí podmíněný překlad.
// definice makra:
#define  jmeno_makra libovolny text rozvoje
// zrušení definice makra:
#undef jmeno_makra
// podmíněný překlad textu v závislosti na hodnotě konst_vyraz
#if konst_vyraz
#elif
#else
#endif
// podmíněný překlad textu v závislosti na tom, zda je makro jmeno_makra
// definovano, či nedefinováno:
#ifdef jmeno_makra
#elif
#else
#endif
// podmíněný překlad textu v závislosti na tom, zda je makro jmeno_makra
// nedefinovano, či definováno:
#ifndef jmeno_makra
#elif
#else
#endif
// vložení textu ze specifikovaného souboru v adresáři uživatele:
#include "filename"
// vložení textu ze specifikovaného souboru ze systémového adresáře:
#include <filename>
// výpis chybových zpráv během preprocessingu:
#error Chybova zprava

// Makro s parametry:
#define jmeno_makra(arg1, ..., argN) hodnota_makra;

//Předdefinovaná makra:
// vrací    jméno       rozsah použití
// znak     isanum      číslice, malá a velká písmena
// znak     isalpha     malá a velká písmena
// 1        isascii     ASCII znaky (0-127)
// znak     iscntrl     Ctrl znaky (1-26)
// znak     isdigit     číslice
// znak     islower     malá písmena
// 1        isprint     ASCII znaky (0-127)
//...