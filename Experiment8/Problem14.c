// WAP using recursion to find the LCM of two numbers.
#include <stdio.h>

int GCD(int a, int b);
int LCM(int a, int b);

int main()
{
    int a, b, s;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    s = LCM(a, b);
    printf("The LCM of %d and %d is %d", a, b, s);
    return 0;
}

int GCD(int a, int b)
{
    if (b == 0)
        return a;
        {
            return GCD(b, a % b);
        }
}

int LCM(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
        {
            return (a / GCD(a, b)) * b;
        }

}