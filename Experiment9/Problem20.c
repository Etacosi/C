// WAP to demonstrate the use of a double pointer (pointer to pointer) by accessing and modifying the value of a variable.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    printf("Vlaue of variable:%d\n",n);
    printf("Vlaue accessed using single pointer:%d\n",*ptr1);
    printf("Vlaue accessed using double pointer:%d\n",**ptr2);
    **ptr2 = **ptr2 + 1;
    printf("Modified vlaue of variable:%d ",n);
    
    return 0;
}