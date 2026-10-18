// WAP to print all even number from 1 to N
#include <stdio.h>

int main()
{
    int a = 0, i = 1;

    printf("Enter the number: ");
    scanf("%d", &a);

    printf("Even numbers from 1 to %d are: ", a);
    for (;i <= a;i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}