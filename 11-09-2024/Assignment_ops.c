#include<stdio.h>

int main()
{
    int a = 150;
        printf("The value of a+=50 is %d",a+=50); // 200   
        printf("The value of a-=50 is %d",a-=50); // 150   
        printf("The value of a*=50 is %d",a*=50); // 7500   
        printf("The value of a/=50 is %d",a/=50); // 150   
        printf("The value of a%%=50 is %d",a%=50);// 0   
    return 0;
}