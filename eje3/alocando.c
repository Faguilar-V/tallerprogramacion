//
// Created by faguilar on 19/10/20.
//
#include "bit.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argn, char **argv) {
    char c;//1 bit
    int i;
    double d;

    c = 255;//'J'
    i = 1024;
    d = 3.1416;

    printf("%c\t%i\t%le\n", c, i, d );
    print_bit(c);
}
