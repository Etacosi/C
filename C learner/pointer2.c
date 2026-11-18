#include <stdio.h>
void main (){
    int x = 10;
    int *ptr1;
    ptr1 = &x;
    printf("%p\n",&x);
    printf("%d\n",&x);
    printf("%p\n",&ptr1);
    printf("%d\n",&ptr1);
    printf("%p\n",ptr1);
    printf("%d\n",ptr1);
  //  ptr1 = ptr1+1;
    ptr1 = ptr1-1;
    printf("%p\n",ptr1);
    printf("%d\n",ptr1);
}