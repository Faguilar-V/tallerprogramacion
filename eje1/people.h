#ifndef PEOPLE_H
#define PEOPLE_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

  typedef struct{
    double age; //years
    double weight; // kg
    double height; // m
  }People;

  People new_People(double age, double weight, double height);
  int print_People(People people);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* PEOPLE_H */
