#include <stdio.h>
#include <stdlib.h>
#include "people.h"

int main(){
  People victor;
  victor = new_People(39.0,80.0,1.80);
  print_People(victor);
  //printf("Hello World\n");
  return 0;
}
