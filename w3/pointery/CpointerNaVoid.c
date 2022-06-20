//
// Created by stemberk on 20.06.2022.
//
#define RUZNE_TYPY 1;
#ifdef RUZNE_TYPY
// Pointer na void jako pointer na několik různých typů:
int i;
float f;
void *p_void = &i; //p_void ukazuje na i

main() {
    *(int *) p_void = 2; // nastavení i na 2
    p_void = &f;         // p_void ukazuje na f
    *(float *) p_void = 1.1; //nastavení f na 1.1
}
#else
//pointer na typ void jako formální parametr funkce
#include <stdio.h>
void  vymen_pointery (int * p_x, int * p_y){
    void *p_pom;
    p_pom = *p_x;
    *p_x = *p_y;
    *p_y = p_pom;
}
main() {
    char c=1, *p_c = &c, d=2, *p_d = &d;
    FILE *fin = stdout, //zamerna chyba
    *fout = stdin;
    fprintf(fin, "c=%d, d=%d \n", *p_c, *p_d);
    vymen_pointery((void**)&p_c, (void**)&p_d);
    vymen_pointery(&fin, &fout);
    fprintf(fin, "c=%d, d=%d \n", *p_c, *p_d);
}
#endif