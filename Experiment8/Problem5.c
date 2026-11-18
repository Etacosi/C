// WAP using recursion to find the sum of the first n natural numbers.
#include <stdio.h>

int num(int n);

int main()
{
    int n, s;

    printf("Enter the number: ");
    scanf("%d", &n);

    s = num(n);
    printf("The sum of the first %d natural numbers is: %d", n, s);
    return 0;
}

int num(int n)
{
    if (n == 0)
    {
        return 0;
    } else {
        return n + num(n - 1);
    }
}

