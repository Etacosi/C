#include <stdio.h>
void main (){
    int x = 10;
    int y = 20;
    int *ptr1;
    int *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    // printf("%d\n",*ptr1);
    // printf("%d\n",*ptr2);
    printf("%d\n",&x);
    printf("%d\n",&y);
    printf("%d\n",*ptr1+1);
    printf("%d\n",*(ptr2+1)); //add vlaue in address for int 4 or 2byte, char 1byte,float 4byte 
    printf("%d\n",*(ptr2-1)); 
    printf("%d\n",&ptr2); 
    printf("%d\n",&ptr2-1); 
}