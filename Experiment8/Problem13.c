// WAP using recursion to find the GCD (HCF) of two numbers.
#include <stdio.h>

int GCD(int a, int b);

int main()
{
    int a, b, s;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    s = GCD(a, b);
    printf("The GCD of %d and %d is %d", a, b, s);
    return 0;
}

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    else{
    return GCD(b, a % b);
}
}