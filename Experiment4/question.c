// Write a program to find sum of digits reducing to single digit.
// using 2 loop
// using 1 loop
// using no loop (No Recursion)
// Example: 356 = 14 = 5

#include <stdio.h>

int main() {
    int a;
    int z;

    printf("Enter a number: ");
    scanf("%d", &a);
    while (a >= 10) {
        z = 0;
        while (a > 0) {
            z += a % 10;
            a = a / 10;
        }
        a = z;
    }
    printf("Single digit sum: %d", a);

    return 0;
}