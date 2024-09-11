# include<stdio.h>
int main ()
{
   // for 1 and 1 the values are as follows.   
        int a = 1, b = 1;
        printf("the value of a and b is %d\n",a&&b);
        printf("the value of a or b is %d\n",a||b);
    
   // for 0 and 1 the values are as follows.   
        int p = 0, q = 1;
        printf("the value of p and q is %d\n",p&&q);
        printf("the value of p or q is %d\n",p||q);
    
   // Not operator
        int m = 0, n = 1;
        printf("the value of not(m) is %d\n", !m);
        printf("the value of not(n) is %d\n", !n);
        return 0;
}
