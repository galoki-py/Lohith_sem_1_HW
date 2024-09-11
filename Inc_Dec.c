// Representation of *inc/dec operators.
#include<stdio.h>

main ()
{
    int i = 5;
        // Print i first and then decrement
            printf("i-- = %d\n", i--);//5
        
        // Decrement i first and then print
            printf("--i = %d\n", --i);//3 
            //(coz the value of i is decreased by 1 after execution of previous line.)
    
        // Print i first and then decrement
            printf("i-- = %d\n", i--);//5
        
        // Decrement i first and then print
            printf("--i = %d\n", --i);//3 
            //(coz the value of i is decreased by 1 after execution of previous line.)
    
}