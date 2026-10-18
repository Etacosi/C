// WAP to Check whether a number is an Armstrong number. 
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
    while(a != 0){
        a = a / 10;
        ++n;
    }
    a = z;

    while( a != 0 ){
    f = a % 10;
    i = i + pow(f, n);
    a = a / 10;
    }
    if ( i == z )
    printf("%d is an  Amestrong number.",z);
    else
    printf("%d is not an  Amestrong number.",z);

    return 0;
}