w//
//  Lab 2.c
//  ES2C4
//
//  Created by Dhaval Soneji on 19/01/2021.
//

#include "Lab 2 Guided.h"

int calcArea (int length, int width) {
    return length * width;
}

void calcArea2(int *length, int *width, int *result) {
    *result = *length * *width;
}


int lab2_guided(){
    
    printf("This is my code for Lab 2!\n");
    
    // 2. Guided tutorials
    printf("===========================\n");
    printf("Part 2.1: Structures\n");
    printf("===========================\n");
    
    // (i) Declare a structure for a rectangle as shown below:
    struct rectangle {
        int length;
        int width;
    };
    
    // (ii) Declare an instance of the rectangle:
    struct rectangle myRectangle;
    
    // (iii) Initialise the member variables of the new rectangle:
    myRectangle.length = 9;
    myRectangle.width = 5;
    
    // (iv) Print out the values stored in the member variables of the rectangle.
    printf("My rectangle has length %d and width %d\n", myRectangle.length, myRectangle.width);
    
    
    
    printf("===========================\n");
    printf("Part 2.2: Functions\n");
    printf("===========================\n");
    
    // (i) Create a function to calculate the area of the rectangle:
    // See calcArea() above
    
    // (ii) Use this function to calculate the area of the rectangle you created in Section 2.1 and print the result to the console.
    printf("The area of the rectangle is %d\n", calcArea(myRectangle.length, myRectangle.width));
    
    // (iii) Rewrite the function such that:
    // - it calculates the area,
    // - does not return any value,
    // - arguments to the function are passed by address,
    // - the result of the calculation is also saved to an address.

    // See calcArea2() above
    
    int result = 0;
    calcArea2(&myRectangle.length, &myRectangle.width, &result);
    printf("The area of the rectangle passed by address is %d\n", result);
    
    return 0;
}
