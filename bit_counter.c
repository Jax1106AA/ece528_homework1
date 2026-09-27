#include <ctype.h> 
#include <errno.h> 
#include <inttypes.h> 
#include <stdint.h> 
#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{ 
    char input[100]; 
    char *end_pointer; 
    unsigned long long input_value; 
    uint32_t number; 
    unsigned int bit_count = 0; 
    printf("Name: Aolany Acosta\n"); 
    printf("Enter an unsigned 32-bit integer: "); 
    if (fgets(input, sizeof(input), stdin) == NULL) 
    { 
        printf("Error: unable to read input.\n"); 
        return 1; 
    } 
    errno = 0; 
    input_value = strtoull(input, &end_pointer, 10); 
    while (isspace((unsigned char)*end_pointer)) 
    { 
        end_pointer++; 
    } 
    if (input == end_pointer || 
        *end_pointer != '\0' || 
        errno == ERANGE || 
        input_value > UINT32_MAX) 
    { 
        printf("Error: invalid unsigned 32-bit integer.\n"); 
        return 1; 
    } 
    number = (uint32_t)input_value; 
    while (number != 0) 
    { 
        number &= (number - 1); 
        bit_count++; 
    } 

    printf("Number of bits set to 1: %u\n", bit_count); 

    return 0; 

} 