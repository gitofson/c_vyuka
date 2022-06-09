//
// Created by stemberk on 09.06.2022.
//
// globální proměnná - deklarace proměnné, která může být definována
//                   v jiném modulu pomocí klíčového slova extern.
// lokální proměnná  - rozsah platnosti je od místa definice do konce
//                     funkce ve které je definována.
// příklad:
// globální proměnná i;
int i;
prvni(){
    //lokální proměnná a platná ve funkci prvni.
    int a;
    /* tělo funkce - vidí i*/
}
// globální proměnná j;
int j;
druhy(){
    /* tělo funkce vidí i i j*/
}
treti(){
    /* tělo funkce vidí i i j*/
}

