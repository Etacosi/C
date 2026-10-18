
#include<stdio.h>
int main()
{
    int i,j,z;

    printf("Enter number of row :");
    scanf("%d",i);
    z = i;

    for (z = 1; z <= i; z++) {
        for (j = 1; j <= 5; j++) {
            if(j % 2 != 0)
            printf(" *");
            else
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}