// WAP to find the sum of digits of a given number using pointers.
#include <stdio.h>

int main()
{
    int n,s = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int *ptr = &n;
    printf("Sum of digits of %d is: ",n);
    for( ;*ptr > 0;(*ptr) /= 10){
        s = s + (*ptr) % 10;
    }
    printf("%d",s);

}