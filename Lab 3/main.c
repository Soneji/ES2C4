//
//  main.c
//  Lab 3
//
//  Created by Dhaval Soneji on 29/01/2021.
//

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include "Helper Functions.h"
#include "Quick Sort.h"

int main(int argc, const char * argv[]) {
    
//    #ifdef I_WANT_TO_DISABLE_THIS_CODE_BECAUSE_IT_USES_SCANF_WHICH_IS_ANNOYING
    // (i) Write a C program that takes an integer input from a user and checks whether the
    // Least Significant Bit (LSB) of the given number is set (1) or not (0).
    {
        uint8_t number;
        printf("Please enter a number: ");
        scanf("%hhu", &number);
        
        printBinary(number);
        
        #pragma clang diagnostic push
        #pragma clang diagnostic ignored "-Wshift-count-overflow"
        uint8_t LSB = number << 32 & 1;
        #pragma clang diagnostic pop
        printBinary(LSB);
        
        if (LSB == 1) {
            printf("The LSB of the number you input is 1 \n");
        } else {
            printf("The LSB of the number you input is 0 \n");
        }
    }
    // (ii) Write a C program to input any number from user and check whether the nth bit of the
    // given number is set (1) or not (0).
    {
        uint8_t number;
        uint8_t n = 4;
        printf("Please enter a number: ");
        scanf("%hhu", &number);
        
        printBinary(number);
        
        #pragma clang diagnostic push
        #pragma clang diagnostic ignored "-Wshift-count-overflow"
        uint8_t bit = number >> (n-1) & 1;
        #pragma clang diagnostic pop
        printBinary(bit);
        
        if (bit == 1) {
            printf("Bit %d of the number you input is 1 \n", n);
        } else {
            printf("Bit %d of the number you input is 0 \n", n);
        }
    }
//    #endif
    
    // (iii) Write a program that generates a random number between 0 and 10. The generated
    // number should be different each time the program is executed.
    // Hint: rand(), srand(), time.h, stdlib.h, time(), %
    {
        srand( (unsigned int) time(NULL) );
        printf("A random number is:   %d\n", 1+rand()%9);
    }
    
    // (iv) Write a C program to sort an array in ascending and descending order.
    {
        int array[10] = {3, 1, 4, 6, 2, 1, 5, 8, 2, 6};
        int size = sizeof(array)/sizeof(array[0]);
        
        printf("Unsorted Array:       ");
        printArray(array, size);
        
        quickSort(array, 0, size-1);
        
        printf("Sorted Array:         ");
        printArray(array, size);
        printf("Reverse Sorted Array: ");
        printArrayBackwards(array, size);
    }
    
    return 0;
}
