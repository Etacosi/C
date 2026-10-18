// print the patterns
// *
// * *
// * * *
// * * * *


#include<stdio.h>
int main()
{
    int a = 0;
    int i,j;


    printf("Enter numbers 0f rows: ");
    scanf("%d",&a );
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++)
         {
            printf("* ");
        }      
        printf("\n");
    }



    return 0;
}