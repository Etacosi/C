// WAP to declare an integer variable and a pointer, and display the value and address of the variable using the pointer.
#include <stdio.h>
int main()
{
    int n = 4;
    int *ptr;
    ptr = &n;
    printf("Value of variable is %d.\n",*ptr);
    printf("Address of variable is %d.",&ptr);
    return 0;
}