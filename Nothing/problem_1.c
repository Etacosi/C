// Sum, Difference, Multiplication, division , modulo of two numbers
#include<stdio.h>
int main()
{
    int x =0, y = 0 , z = 0 , a = 0 , b = 0 , c = 0 , d = 0;
    scanf("%d",&x);
    scanf("%d",&y);
    z = x + y ;
    a = x - y ;
    b = x * y ;
    c = x % y ;
    d = x / y ;

    printf("Sum of x and y is %d\n",z);
    printf("Difference of x and y is %d\n",a);
    printf("Product of x and y is %d\n",b);
    printf("Modulus of x and y is %d\n",c);
    printf("Division of x and y is %d\n",d);

    
    // printf("Sum of x and y is %d\n",x + y);
    // printf("Difference of x and y is %d\n", x - y);
    // printf("Product of x and y is %d\n", x * y);
    // printf("Modulus of x and y is %d\n",x % y);
    // printf("Division of x and y is %d\n",x / y);
    
    
    return 0;
}