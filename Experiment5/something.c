// WAP to convert decimal to bimnary.(oct)
#include<stdio.h>
int main (){
    int n=0, a,s=0, i;
    int b=1;
    printf("Enter the number: ");
    scanf("%d",&a);

    for(i=a;i!=0;i=i/2)
    {
        int d=i%2;
        n=n+d*b;
        b=b*10;
    }
    printf(" %d",n);
}