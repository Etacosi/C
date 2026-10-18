// WAP to find sum of all odd number from 1 to N.
#include <stdio.h>

int main()
{
    int a = 0, i , z = 0, s = 0;

    printf("Enter the number: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        if(i % 2 != 0) {
            z = i;
            // printf("%d ", i);
            s = s + z;
        }
    }
    printf("Sum of odd number from 1 to %d is:%d",a,s);
    return 0;
}