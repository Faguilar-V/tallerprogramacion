#include <stdio.h>
#include <stdlib.h>
#include "people.h"
#include "perrito.h"

int main(){
  Perrito kovu;
  kovu = new_Perrito("Kobe", "blue", 2.0, 10.0);//char name, char color, double age, double weight)
  print_Perrito(kovu);
  //printf("Hello World\n");
  return 0;
}
