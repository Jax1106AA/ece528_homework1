#include <inttypes.h>
#include <stdint.h> 
#include <stdio.h> 

int main(void) 
{ 
    int n; 
    uint64_t previous = 0; 
    uint64_t current = 1; 
    uint64_t next; 
    printf("Name: Aolany Acosta\n"); 
    printf("Enter an integer N, where N >= 2: "); 
    if (scanf("%d", &n) != 1) 
    { 
        printf("Error: invalid integer.\n"); 
        return 1; 
    } 
    if (n < 2) 
    { 
        printf("Error: N must be greater than or equal to 2.\n"); 
        return 1; 
    } 
    if (n > 93) 
    { 
        printf("Error: N is too large for a 64-bit result.\n"); 
        return 1; 
    } 
    for (int index = 2; index <= n; index++) 
    { 
        next = previous + current; 
        previous = current; 
        current = next; 
    } 
    printf("Fibonacci number F(%d) = %" PRIu64 "\n", n, current); 
    return 0; 
} 