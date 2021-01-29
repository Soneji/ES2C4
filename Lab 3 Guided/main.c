//
//  main.c
//  Lab 3 Guided
//
//  Created by Dhaval Soneji on 29/01/2021.
//

#include <stdio.h>
#include <stdint.h>
uint8_t setBit (uint8_t _number, uint8_t _bit){
    return (_number | 1<<(_bit-1));
}
int main() {
    static uint8_t number;
    uint8_t bit;
    uint8_t result;
    
    printf("Enter number \n");
    scanf("%hhu", &number);
    printf("Enter bit \n");
    scanf("%hhu", &bit);
    
    result = setBit(number, bit);
    printf("Result = %d", result);
    
    return 0;
}
