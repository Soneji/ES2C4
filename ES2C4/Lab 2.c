//
//  Lab 2.c
//  ES2C4
//
//  Created by Dhaval Soneji on 20/01/2021.
//

#include "Lab 2.h"
#include <string.h>
#include "Lab 2 Functions.h"

// Lab 2
// 3. Exercises
// See PDF for full questions

int lab2() {
    
    struct Dog dogs[5]; // this is bad practice as it wastes an entire struct (dog[0]) but it makes my indexes look nice so ¯\_(ツ)_/¯
    
    dogs[1] = createDog("dog1", "Ben", 59, 9, "Golden retriever");
    dogs[2] = createDog("dog2", "Koko", 40, 8, "Kelpie");
    dogs[3] = createDog("dog3", "Terry", 25, 10, "Terrier");
    dogs[4] = createDog("dog4", "Skyes", 32, 15, "Terrier");

    changeName(&dogs[3], "Lando");
    changeAge(&dogs[2], 10);
    changeBreed(&dogs[1], "Husky");

    #ifdef I_WANT_TO_DISABLE_THIS_CODE_BECAUSE_IT_USES_SCANF_WHICH_IS_ANNOYING
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
    #endif
    
    return  0;
}
