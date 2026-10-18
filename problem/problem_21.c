// Write a C program to find the middle value among three different numbers using nested if-else
#include <stdio.h>
int main() {
    int a = 0, b = 0, c = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (b < c) {
        if (a < b) {
            printf("The middle value is: %d", b);
        } else if (a > c) {
            printf("The middle value is: %d", c);
        } else {
            printf("The middle value is: %d", a);
        }
    } else {
        if (a > b) {
            printf("The middle value is: %d", b);
        } else if (a < c) {
            printf("The middle value is: %d", c);
        } else {
            printf("The middle value is: %d", a);
        }
    }

    return 0;
}