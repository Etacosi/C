// WAP to find the largest of two numbers using pointers.
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    int *ptr1 = &a, *ptr2 = &b;
    if(*ptr1 > *ptr2){
        printf("Largest of two number is: %d",*ptr1);
    } else {
        printf("Largest of two number is: %d",*ptr2);
    }
    return 0;
}