// WAP using recursion to print the multiplication table of a given number.
#include <stdio.h>
int table(int n,int s);
int main()
{
    int s = 1,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    s = table(n,s);
    return 0;
}
int table(int n,int s)
{
    if(s == 10){
    return printf("%d",n * 10);
    }
    else{
        printf("%d ",n * s);
        return table(n,s + 1);
    }
}