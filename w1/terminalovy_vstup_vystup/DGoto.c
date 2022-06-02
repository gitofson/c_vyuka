//
// Created by stemberk on 02.06.2022.
//
// Příkaz goto se ve strukturovaném jazyku používá málokdy. Jeden z mála seriózních použití:
#include <stdio.h>
#define N_ARR 10
int main(int argc, char** argv) {
    int i, j, k;
    double a[N_ARR], b[N_ARR], x[N_ARR];
    for (i = 0; i < N_ARR; i++) {
        for (j = 0; j < N_ARR; j++) {
            for (k = 0; k < N_ARR; k++) {
                if (x[k] == 0)
                    goto error;
                a[i] = a[i] + b[j] / x[k];
            }
        }
    }
    error:
    printf("Nulovy delitel");
}
