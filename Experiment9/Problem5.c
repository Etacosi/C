// WAP to find the largest of three numbers using pointers.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c;
    if(*ptr1 > *ptr2 && *ptr1 > *ptr3){
        printf("Largest of three number is: %d",*ptr1);
    } else {
        if(*ptr2 > *ptr1 && *ptr2 > *ptr3){
            printf("Largest of three number is: %d",*ptr2);
        }
        else{
            printf("Largest of three number is: %d",*ptr3);

        }
    }
    return 0;
} 