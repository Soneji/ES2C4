//
//  Lab 2 Functions.c
//  ES2C4
//
//  Created by Dhaval Soneji on 22/01/2021.
//

#include "Lab 2 Functions.h"
#include <string.h>

struct Dog createDog(char id[], char name[], int height, int age, char breed[]){
    struct Dog dog;
    strcpy(dog.id, id);
    strcpy(dog.name, name);
    dog.height = height;
    dog.age = age;
    strcpy(dog.breed, breed);
    return dog;
}

void printDog(struct Dog *dog) {
    printf("Name:   %s\n", dog->name);
    printf("Height: %d\n", dog->height);
    printf("Age:    %d\n", dog->age);
    printf("Breed:  %s\n", dog->breed);
}

void changeAge(struct Dog *dog, int newAge) {
    dog->age = newAge;
}

void changeName(struct Dog *dog, char newName[]) {
    strcpy(dog->name, newName);
}

void changeBreed(struct Dog *dog, char newBreed[]) {
    strcpy(dog->breed, newBreed);
}
