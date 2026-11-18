//  WAP to find the LCM of two numbers using pointers.
#include <stdio.h>

int main()
{
    int a,b,s,i = 1;
    printf("Enter Two number: ");
    scanf("%d %d",&a,&b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("LCM of %d and %d is: ",a,b);
    for( ;i <= *ptr1 && i <= *ptr2;i++){
        if(*ptr1 % i == 0 && *ptr2 % i == 0){
            s = i;
        }
    }
    s = (a * b) / s;
    printf("%d",s);

}