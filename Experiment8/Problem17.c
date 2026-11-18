// WAP using recursion to check whether a number is an Armstrong number.
#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;
        else {
            return a * power(a, b - 1);
}
}

int armstrong(int n, int z, int s)
{
    if (n == 0)
        return s;
        else {
            int r = n % 10;
            return armstrong(n / 10, z, s + power(r, z));
        }
    }

int main()
{
    int n, b, i = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    b = n;

    while (b > 0)
    {
        i++;
        b /= 10;
    }

    if (armstrong(n, i, 0) == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
        
    return 0;
}