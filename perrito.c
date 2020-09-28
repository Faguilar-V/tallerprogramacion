//
// Created by faguilar on 28/09/20.
//

//
// Created by faguilar on 28/09/20.
//
#include "perrito.h"
#include <stdio.h>
#include <stdlib.h>


Perrito new_Perrito(char name, char color, double age, double weight){
    Perrito perrito;
    perrito.name = name;
    perrito.color = color;
    perrito.age = age;
    perrito.weight = weight;
    return perrito;
}

int print_Perrito(Perrito perrito){
    printf( "%le\t%le\t%le\t%le\n",perrito.name,perrito.color,perrito.age, perrito.weight);
    return 1;
}