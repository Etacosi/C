#include<stdio.h>
int main()
{
    int i,j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if(j % 2 == 0){
                printf(" %c ",64 + j);
            } else {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}