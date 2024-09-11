#include <stdio.h>

int main() {
    unsigned int a = 60;  // 60 = 00111100 in binary
    unsigned int b = 13;  // 13 = 00001101 in binary
    
    printf("a = %u, b = %u\n", a, b);
    
    // AND operator
    printf("a & b  = %u\n", a & b);
    
    // OR operator
    printf("a | b  = %u\n", a | b);
    
    // XOR operator
    printf("a ^ b  = %u\n", a ^ b);
    
    // Negation operator
    printf("~a = %d\n", ~a); // -61
    
    // Left shift
    printf("a << 2 = %u\n", a << 2); // 11110000 ==> 240 ((8+4+2+1)*16 == 15*16)
    
    // Right shift
    printf("a >> 2 = %u\n", a >> 2); // 00001111 == > 15 (1+2+4+8)
    
    return 0;
}