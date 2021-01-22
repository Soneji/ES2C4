//
//  Lab 2.c
//  ES2C4
//
//  Created by Dhaval Soneji on 20/01/2021.
//

#include "Lab 2.h"
#include <string.h>

// Lab 2
// 3. Exercises
// See PDF for full questions

struct Dog {
    char id[64];
    char name[64];
    int height;
    int age;
    char breed[64];
};

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

int lab2() {
    
    struct Dog dogs[5]; // this is bad practice as it wastes an entire struct (dog[0]) but it makes my indexes look nice so ¯\_(ツ)_/¯
    
    dogs[1] = createDog("dog1", "Ben", 59, 9, "Golden retriever");
    dogs[2] = createDog("dog2", "Koko", 40, 8, "Kelpie");
    dogs[3] = createDog("dog3", "Terry", 25, 10, "Terrier");
    dogs[4] = createDog("dog4", "Skyes", 32, 15, "Terrier");

    changeName(&dogs[3], "Lando");
    changeAge(&dogs[2], 10);
    changeBreed(&dogs[1], "Husky");

    char input[64];
    printf("Please enter the ID of the dog you want to know about: ");
    scanf("%s", input);
    for (int i=1; i< sizeof dogs / sizeof dogs[0]; i++) {
        if (!strcmp ( dogs[i].id , input )){
            printDog(&dogs[i]);
            break;
        }
        printf("Error 404: Dog not found\n");
    }
    
//    printDog(&dogs[1]);
    
    return  0;
}
