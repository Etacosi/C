// WAP to print odd numbers from N1 to N2.
#include <stdio.h>

int main()
{
    int a = 0, b =0;
    int i;

    printf("Enter number N1 and N2: ");
    scanf("%d %d",&a,&b);

    printf("Odd numbers from %d to %d are: ",a,b);
    for (i = a; i <= b; i++) {
        if (i % 2 != 0) {
            printf(" %d", i);
        }
    }
    return 0;
}
// code problem on input