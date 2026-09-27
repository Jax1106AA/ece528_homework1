#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{ 
    int number; 
    printf("Name: Aolany Acosta\n"); 
    printf("Enter an integer: "); 
    if (scanf("%d", &number) != 1) 
    { 
        printf("Error: invalid integer.\n"); 
        return 1; 
    } 
    if (number > 0) 
    { 
        printf("The number is positive.\n"); 
    } 
    else if (number < 0) 
    { 
        printf("The number is negative.\n"); 
    } 
    else 
    { 
        printf("The number is zero.\n"); 
    } 
    printf("Absolute value: %d\n", abs(number)); 
    return 0; 
} 