// Swapping number by using three variable
#include<stdio.h>
int main()
{
    int a = 0 , b = 0 , c = 0 ;
    a = 10;
    b = 55;
    c = b;
    b = a;
    a = c;
    printf("The value of a is %d\n", a );
    printf("The value of b is %d\n", b );

    return 0;
} 