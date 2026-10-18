// WAP to whether a number is an Armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0,n = 0;
    int f,z;
    double i = 0;

    printf("Enter the number: ");
    scanf("%d",&a);
    z = a;
    for(;a != 0; ++n){
        a = a / 10;
    }
    a = z;

    for( ;a != 0 ; a = a / 10 ){
    f = a % 10;
    i = i + pow(f, n);
    }
    if ( i == z )
    printf("%d is an  Armstrong number.",z);
    else
    printf("%d is not an  Armstrong number.",z);

    return 0;
}