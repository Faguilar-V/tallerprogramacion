//
// Created by faguilar on 28/09/20.
//

#ifndef Perrito_H
#define Perrito_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct{
    char name;
    char color;
    double age; //years
    double weight; // kg
}Perrito;

Perrito new_Perrito(char name, char color, double age, double weight);
int print_Perrito(Perrito  perrito);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* PEOPLE_H */
