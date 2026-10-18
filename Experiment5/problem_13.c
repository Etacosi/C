// WAP to check whether a number is a strong number or not.
#include <stdio.h>
int main()
{
    int a, z,i,f,c;
    int s = 0;

    printf("Enter the number: ");
    scanf("%d",&a );

    for (z = a;z > 0;z /= 10) {
        c = z % 10;
        f = 1;
        for (i = 1; i <= c; i++) {
            f *= i;
        }
        s += f;
    }

    if (s == a ) {
        printf("%d is a Strong Number.", a);
    } else {
        printf("%d is not a Strong Number.", a);
    }

    return 0;
}