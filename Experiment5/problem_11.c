// WAP to find first N prime numbers.
#include <stdio.h>

int main() {
    int n, a = 0, i, k,z ;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("First %d prime numbers: ", n);
    for (k = 2; a < n; k++) {
        z = 1;

        for (i = 2; i * i <= k; i++) {
            if (k % i == 0) {
                z = 0;
                break;
            }
        }
        if (z) {
            printf("%d ", k);
            a++;
        }
    }

    printf("\n");
    return 0;
}