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

//Předdefinovaná makra (#include <stdio.h>):

#define getchar()    getc(stdin)
#define putchar(c)   putc(c, stdout)

//Předdefinovaná makra (#include <ctype.h>):

// vrací    jméno       rozsah použití
// znak     isanum      číslice, malá a velká písmena
// znak     isalpha     malá a velká písmena
// 1        isascii     ASCII znaky (0-127)
// znak     iscntrl     Ctrl znaky (1-26)
// znak     isdigit     číslice
// znak     islower     malá písmena
// 1        isprint     tisknutelné znaky (32-126)
// znak     ispunct     interpunkční znaky (tečka, čárka, lomítko, ...)
// znak     isupper     velká písmena
// znak     isxdigit    hexadec. číslice ('0' - '9', 'A'-'F', 'a'-'f')
// 1        isgraph     znak s grafickou podobou (33-126)

// makra pro konverzi znaku, např. b = tolower(c)
// tolower
// toupper
// toascii
