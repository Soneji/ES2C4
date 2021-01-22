//
//  Lab 2 Functions.h
//  ES2C4
//
//  Created by Dhaval Soneji on 22/01/2021.
//

#ifndef Lab_2_Functions_h
#define Lab_2_Functions_h

#include <stdio.h>
#include "Lab 2.h"

struct Dog createDog(char id[], char name[], int height, int age, char breed[]);
void printDog(struct Dog *dog);
void changeAge(struct Dog *dog, int newAge);
void changeName(struct Dog *dog, char newName[]);
void changeBreed(struct Dog *dog, char newBreed[]);


#endif /* Lab_2_Functions_h */
