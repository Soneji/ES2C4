//
//  Lab 1.c
//  ES2C4
//
//  Created by Dhaval Soneji on 19/01/2021.
//

#include "Lab 1.h"

int student_id;

int lab1(){
    
    printf("This my code for Lab 1!\n");
    printf("===========================\n");
    printf("Part A\n");
    printf("===========================\n");
    
    // A) Declare 4 variables, initialise them with the data below and print them to the console
    {
        // (i) Your student ID number (global variable).
        student_id = 1901511;
        printf("%d\n", student_id);
        
        // (ii) The first letter of your first name (local variable).
        char first = 'D';
        printf("%c\n", first);
        
        // (iii) The first letter of your last name (local variable).
        char first_last = 'S';
        printf("%c\n", first_last);
        
        // (iv) The result of 9/5 (local variable).
        float result = 9.f/5.f;
        printf("%g\n", result);
        
    printf("===========================\n");
    printf("Part B\n");
    printf("===========================\n");
    // b) Create a pointer for each of the variables above. Using the pointers, change the value of the variables above to the following:
        int* p_student_id = &student_id;
        char* p_first = &first;
        char* p_first_last = &first_last;
        float* p_result = &result;
        
        // (i) The last 4 digits of your student ID.
        *p_student_id = 1511;
        // (ii) The last letter of your first name.
        *p_first = 'L';
        // (iii) The last letter of your last name.
        *p_first_last = 'I';
        // (iv) The result of 16/7.
        *p_result = 16.f/7.f;
        // (v) Print the new variable values using the pointers.
        printf("%d\n", student_id);
        printf("%c\n", first);
        printf("%c\n", first_last);
        printf("%g\n", result);
    }
    
    printf("===========================\n");
    printf("Part C\n");
    printf("===========================\n");
    
    // c) Write a C program to:
    // (i) Compare two numbers and prints the larger number to the console. Print “Both
    // numbers are equal.” If the numbers are equal.
    
    // remove the ifdef and endif if you want to run this part
    #ifdef I_WANT_TO_DISABLE_THIS_CODE_BECAUSE_IT_USES_SCANF_WHICH_IS_ANNOYING
    {
        printf("Code to compare two numbers and print larger number\n");
        float num1 = 0.0, num2 = 0.0;
        printf("Enter the first number:  ");
        if (scanf("%f", &num1)!=1)
            return -1;
        printf("Enter the second number: ");
        if (scanf("%f", &num2)!=1)
            return -1;
        if (num1==num2)
            printf("The numbers are equal\n");
        else if (num1>num2)
            printf("%g\n", num1);
        else
            printf("%g\n", num2);
    }
    #endif
    // (ii) Find the sum of even numbers between 25 and 91 and prints the result.
    {
        int sum = 0;
        for (int i=26; i<91; i+=2) {
            sum+=i;
        }
        printf("Sum of even numbers between 25 and 91 is %d\n", sum);
    }
    
    // (iii) Find the sum of the decimal equivalent of the ASCII characters in your name
    // using a loop.
    {
        char *name = "Dhaval";
        int sum = 0, i = 0;
        
        while(name[i]!='\0'){
            sum = sum + name [i];
            i++;
        }
        
        printf("\nThe sum of the ascii characters that make my name is: %d\n", sum);
        
    }
    // (iv) Generate an array of 20 numbers where each successive number is a sum of
    // the proceeding numbers in the array. The first number in the array should be 7.
    // Print all elements in the array.
    {
        printf("\nNot a Fibonacci Array starting at 7\n");
        int array[20] = {0};
        int start = 7;
        array[0]=array[1]=start;
        
        for (int i = 2 ; i < 20 ; i++) {
            for (int j=0; j<i; j++) {
                array[i]+=array[j];
            }
        }
        
        for(int loop = 0; loop < (sizeof array/ sizeof array[0]) ; loop++)
             printf("%d ", array[loop]);
    
        printf("\n");
    }
    
    return 0;
}
