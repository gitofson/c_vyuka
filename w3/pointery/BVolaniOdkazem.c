//
// Created by stemberk on 20.06.2022.
//
#include <stdio.h>

// Ukazatele lze použít pro předávání parametrů fumkcí odkazem:
void  vymen (int * p_x, int * p_y){
    int tmp;
    tmp = *p_x;
    *p_x = *p_y;
    *p_y = tmp;
}
int main(){
    int i= 3;
    int  j = 5;
    printf("i = %d, j = %d\n", i, j);
    vymen(&i, &j);
    printf("i = %d, j = %d\n", i, j);
};
