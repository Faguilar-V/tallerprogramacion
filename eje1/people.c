
#include "people.h"
#include <stdio.h>
#include <stdlib.h>


People new_People(double age, double weight, double height){
  People people;
  people.age = age;
  people.weight = weight;
  people.height = height;
  return people;
}

int print_People(People people){
  printf("%le\t%le\t%le\n",people.age,people.weight,people.height);
  return 1;
}

