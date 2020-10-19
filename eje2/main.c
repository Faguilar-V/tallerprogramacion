//
// Created by faguilar on 05/10/20.
// Tarea: crear biblioteca que reciba un argumento, lo copie a una cadena y lo imprima
// que imprima el número de bytes
// que imprima el codigo ascii en forma decimal x0000001 --> 1
//
#include <stdio.h>
#include <stdlib.h>

int main(int argn, char **argv){
    char *mystring;
    //printf("%s\n", argv[1]);
    if (argn<2){
      printf('Error: you need pass an argument \n');
      return 0;
    }
    mystring = malloc(sizeof(argv[1]));
    sprintf(mystring, "%s", argv[1]);
    printf("%s\n", mystring);
    return 1;
}

