//
// Created by stemberk on 02.06.2022.
//
// 1, Napište program, který sečte N prvních přirozených čísel a vypíše
// např.: Soucet prvnich 5 čísel je 15. N definujte jako symbolickou
// konstantu

// 2, čtěte znaky z klávesnice až do EOLN, které si definujete. Po skončení
// čtení vypište počet zadaných číslic. Dále opište jen zadaná písmena,
// která převeďte na velká. Využijte maker isdigit(), isalpha() A toupper()
// ze souboru ctype.h.

// 3, napište makro na_treti(x), které bude počítat třetí mocninu. Vyzkoušejte
// ho na výrazech :
// na_treti(3)
// na_treti(i)
// na_treti(2 + 3)
// na_treti(i * j + 1)

// 4, definujte makro je_velke(c), které vrátí 0 není-li znak velké písmeno
// a 1, je-li to velké písmeno.

// 5, definujte makro lze_tisknout(c), které zjistí, zda je znak tisknutelný
// (od ASCII hodnoty 32 - 126). Pomocí něho vytiskněte ASCII tabulku.

// 6. definujte makro cti_int(i), které čte z klávesnice celé číslo. Musí
// fungovat i ve výrazu, např.: if ((j = cti_int(k)) == 0)
// Nápověda: Využijte operátoru čárky.

// 7. předchozí příklad rozdělte do dvou souborů makro.h a hlavni.c a pomocí
// #include zajistěte správné chování programu.