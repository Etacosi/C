// Write a program to find sum of digits reducing to single digit.
// using 1 loop
#include <stdio.h>

int main() {
    int a;
    int z = 0;

    printf("Enter a number: ");
    scanf("%d", &a);
        while (a > 0 || z > 9) {
        if (a == 0) {
            a = z;
            z = 0;   
        }
        z += a % 10;
        a /= 10;
    }

    printf("Single digit sum: %d\n", z);


    return 0;
}