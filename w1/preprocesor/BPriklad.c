//
// Created by stemberk on 02.06.2022.
//
#import<stdio.h>
#define je_velke(c) ((c) >= 'A' && (c) <= 'Z')

int main(int argc, char** argv) {
    char a = 'a';
    if(je_velke(a)){
        printf("%c je velke\n", a);
    } else {
        printf("%c je male\n", a);
    }

}