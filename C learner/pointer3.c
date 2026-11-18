#include <stdio.h>
void main (){
    double x = 10;
    double *ptr1;
    ptr1 = &x;

    printf("%d\n",sizeof(ptr1));
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