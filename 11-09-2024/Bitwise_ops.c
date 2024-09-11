#include <stdio.h>

int main() {
    int a = 60;  // 60 = 00111100 in binary
    int b = 13;  // 13 = 00001101 in binary
    
    printf("a = %d, b = %d\n", a, b);
    
    // AND operator
    printf("a & b  = %d\n", a & b);
    
    // OR operator
    printf("a | b  = %d\n", a | b);
    
    // XOR operator
    printf("a ^ b  = %d\n", a ^ b);
    
    // NOT operator
    printf("~a = %d\n", ~a);
    
    // Left shift
    printf("a << 2 = %d\n", a << 2); // 11110000 ((8+4+2+1)*(16) = 15*16 =240).
    
    // Right shift                  //  00001111  (8+4+2+1 = 15).
    printf("a >> 2 = %d\n", a >> 2);
    
    return 0;
}