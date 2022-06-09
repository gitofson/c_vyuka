//
// Created by stemberk on 09.06.2022.
//
// Jazyk C disponuje následujícími typovými modifikátory
// const - specifikuje, že definovanému objektu nesmí být po jeho inicializaci
//         již měněna hodnota. Výhoda oproti #define spočívá v uvedení typu a
//         možné kontrole překladačem (typová bezpečnost)
//         Příklad:
const float pi = 3.1415926535;
const max = 100;
int pole[max]; //nelze
pi = 3.14;     //nelze
// volatile - upozorňuje překladač, že takto definovaná proměnná může být
//            modifikována nějakou blíže nespecifikovanou asynchronní událostí
//            mimo váš program. Překladač se tak nepokouší o možnosti optimalizace
//            v rámci této proměnné.