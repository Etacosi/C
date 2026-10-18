// Write a program to find sum of digits reducing to single digit.
// using no loop (No Recursion)
#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a == 0) {
        printf("Single digit sum: 0");
    } else {
        int result = a % 9;
        if (result == 0) {
            result = 9;
        }
        printf("Single digit sum: %d", result);
    }

    return 0;
}