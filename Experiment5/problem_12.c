// WAP to print all prime numbers between 1 to N.
#include <stdio.h>

int main() {
    int n,i, a,z ;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("All prime number between 1 and %d is: ", n);
    for (a = 2; a <= n; a++) {
        z = 1;

        for (i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                z = 0;
                break;
            }
        }
        if (z) {
            printf("%d ", a);
        }
    }

    printf("\n");
    return 0;
}