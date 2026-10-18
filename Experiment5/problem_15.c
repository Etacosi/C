// WAP to find the GCD of two numbers using a for loop.
#include <stdio.h>

int main() {
    int a, b, i, d = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++) {
  
        if (a % i == 0 && b % i == 0) {
            d = i;
        }
    }

    printf("GCD of %d and %d is: %d", a, b, d);

    return 0;
}