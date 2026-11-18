// WAP to swap two numbers using a function which take argument or return depends on you.
#include<stdio.h>
void swap2(int *a,int *b);
void main(){
    int a,b;

    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number: ");
    scanf("%d",&b);
    printf("Before swaping a = %d, b = %d \n",a,b);
    swap2(&a,&b);
    printf("After swaping a = %d, b = %d",a,b);
}
void swap2(int *a,int *b){
    int c;
    c = *a;
    *a = *b;
    b = c;
}
