//
// Created by faguilar on 19/10/20.
//
#include "bit.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int print_bit(char c) {
    //255 -> 1111 1111
    // Enmasking tecnique
    int mask = 0x0001; // 0000 0001
    int i;

    for (i=0; i<8; i++) {
        mask = pow(2, i+1);
        printf("%i\n", mask);
        printf("%i", (mask & c)>> i);
    }
    printf("\n");
    return 1;
}
