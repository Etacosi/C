// WAP to find the sum of the first n natural numbers using pointers.
#include <stdio.h>

int main()
{
    int n,s = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int *ptr = &n;
    printf("Sum of %d natural number is: ",n);
    for( ;*ptr > 0;(*ptr)--){
        s = s + (*ptr);
    }
    printf("%d",s);

}