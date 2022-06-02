//
// Created by stemberk on 02.06.2022.
//
int main(int argc, char** argv) {
    int a;
    // desítková konstanta
    a = 15; //a=15
    // osmičková
    a = 013; //a=11
    // hexadecimální
    a = 0x11; //a=17
    // binární
    a = 0b0010; //a=2

    // typ konstanty je určen implicitně její vvelikostí,
    // či explicitně pomocí přípony L, např.
    a = 12345678L;
    // Pro unsigned pak
    a = 12345LU;

    // reálné konstanty:
    double d;
    d = 56.8;
    d = 5e6;
    d = 7E23;

    //znakové konstanty:
    char c;
    c = 'a';
    c = '\007'; // vhodné pro zápis neviditelného znaku (oktalové číslice)
    c = '\x0A'; // hexadecimálně
    //časté escape sekvence:
    c = '\n'; c = '0x0a'; // nová řádka (LF)
    c = '\r'; c = '0x0d'; // návrat na začátek řádky
    c = '\f'; c = '0x0c'; // nová stránka
    c = '\\'; c = '0x5c'; // zpětné lomítko
    c = '\''; c = '0x2c'; // apostrof
    c = '\0'; c = '0x00'; // nulový znak (NUL)
}