// WAP to generate Fibonacci series up to N terms.
#include <stdio.h>

int main() {
    int n, z;
    int a = 0, b = 1, i = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series is: ");
    for(;i <= n; i++) {
        printf("%d ", a);
        z = a + b;
        a = b;
        b = z;
    }

    return 0;
}