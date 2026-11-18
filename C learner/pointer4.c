#include <stdio.h>
void main (){
    int x = 10;
    int y = 20;
    int z = 20;
    int *ptr1;
    int *ptr2;

    ptr1 = &x;
    ptr2 = &z;

    printf("%d\n",ptr1);
    printf("%d\n",ptr2);
    printf("%d\n",ptr1-ptr2);//addition,multiplication,division between two pointers are not allowed.
}