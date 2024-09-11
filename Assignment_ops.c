
//Representation of assignment operators.

#include<stdio.h>

main ()
{
    int a = 150;
        printf("value of a+= 50 is %d\n",a+=50);    // 200
        printf("value of a-= 50 is %d\n",a-=50);    // 150
        printf("value of a*= 50 is %d\n",a*=50);    // 4500
        printf("value of a/= 50 is %d\n",a/=50);    // 3
        printf("value of a%%= 50 is %d\n",a%=50);   // 0
}