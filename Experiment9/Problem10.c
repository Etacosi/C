// WAP to reverse a given number using pointers.
#include <stdio.h>

int main()
{
    int n,s = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int *ptr = &n;
    printf("Reversed of %d is: ",n);
    for( ;*ptr > 0;(*ptr) /= 10){
        s = (s * 10) + (*ptr) % 10;
    }
    printf("%d",s);

}