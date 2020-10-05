//
// Created by faguilar on 28/09/20.
//

#ifndef PERRITO_H
#define PERRITO_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct{
  //char name[32];
  //char color[32];
  char *name;
  char *color;
  double age; //years
  double weight; // kg
}Perrito;

  //Perrito new_Perrito(char name[], char color[], double age, double weight);
  Perrito new_Perrito(char *name, char *color, double age, double weight);
int print_Perrito(Perrito  perrito);
  int delete_Perrito(Perrito  perrito);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* PERRITO_H */
