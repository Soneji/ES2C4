//
//  Helper Functions.c
//  Lab 3
//
//  Created by Dhaval Soneji on 29/01/2021.
//

#include "Helper Functions.h"

void printBinary(uint8_t n) {
    int c, k;
    for (c = 7; c >= 0; c--)
    {
      k = n >> c;

      if (k & 1)
        printf("1");
      else
        printf("0");
    }

    printf("\n");
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Function to print an array */
void printArrayBackwards(int arr[], int size)
{
    int i;
    for (i = size-1 ; i >= 0 ; i--)
        printf("%d ", arr[i]);
    printf("\n");
}
