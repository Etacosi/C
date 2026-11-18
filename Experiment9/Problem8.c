// WAP to check whether a number is even or odd using pointers.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int *ptr = &n;
    if((*ptr) % 2 == 0){
        printf("%d is an even number.",n);
    } else {
        printf("%d is an odd number.",n);

    }

}