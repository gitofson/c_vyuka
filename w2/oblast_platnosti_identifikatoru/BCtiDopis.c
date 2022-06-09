//
// Created by stemberk on 09.06.2022.
//
#include<stdio.h>
#define ERROR(mes)  { printf("%s\n", mes); return -1; }
#define EOLN        '\n'
#define FNAME       "DOPIS.TXT"

FILE *fr;

int otevri_soubor() {
    return ((fr = fopen(FNAME, "r")) != NULL);
}
int zavri_soubor(){
    return (fclose(fr) != EOF);
}
int cti_radku(){
    int delka = 0, c;
    while ((c = getc(fr)) != EOF){
        if(c == EOLN){
            return (delka + 1);
        } else {
            delka++;
        }
    }
    return (EOF);
}
main(){
    int nejdelsi = 0, aktualni;
    if(!otevri_soubor()) {
        ERROR("Nelze otevrit soubor")
    }
    while((aktualni = cti_radku()) != EOF){
        nejdelsi = (aktualni > nejdelsi) ? aktualni:nejdelsi;
    }
    printf("Delka radky je %d\n", nejdelsi);

    if(!zavri_soubor()){
        ERROR("Nelze zavrit soubor");
    }
    return 0;
}