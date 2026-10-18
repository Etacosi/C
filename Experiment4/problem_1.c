// WAP to print odd numbers from 1 to N
#include <stdio.h>

int main()
{
    int a = 0, i = 1;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Odd numbers from 1 to %d are: ", a);
    while (i <= a) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}