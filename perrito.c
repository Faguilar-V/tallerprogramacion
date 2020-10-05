//
// Created by faguilar on 28/09/20.
//

//
// Created by faguilar on 28/09/20.
//
#include "perrito.h"
#include <stdio.h>
#include <stdlib.h>


//Perrito new_Perrito(char name[], char color[], double age, double weight){
Perrito new_Perrito(char *name, char *color, double age, double weight){
    Perrito perrito;
    //perrito.name = name;
    perrito.name = malloc(sizeof(name));    
    sprintf(perrito.name,"%s",name);
    //perrito.color = color;
    perrito.color = malloc(sizeof(color));    
    sprintf(perrito.color,"%s",color);
    perrito.age = age;
    perrito.weight = weight;
    return perrito;
}

int print_Perrito(Perrito perrito){
    printf( "%s\t%s\t%le\t%le\n",perrito.name,perrito.color,perrito.age, perrito.weight);
    return 1;
}


int delete_Perrito(Perrito  perrito){
  free(perrito.name);
  free(perrito.color);
  return 1;
}
