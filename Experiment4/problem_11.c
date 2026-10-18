// WAP to Generate the Fibonacci series. 
#include <stdio.h>

int main() {
    int n, z;
    int a = 0, b = 1, i = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci series is: ");
    while (i <= n) {
        printf("%d ", a);
        z = a + b;
        a = b;
        b = z;
        i++;
    }

    return 0;
}