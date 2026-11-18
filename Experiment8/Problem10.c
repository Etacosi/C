// WAP using recursion to reverse a given number.
#include <stdio.h>
int renum(int ,int);
int main()
{
    int n,s;
    printf("Enter the number: ");
    scanf("%d",&n);
    s = renum(n,0);
    printf("The reversed numbers:%d",s);
    return 0;
}
int renum(int n,int s)
{
    if(n == 0){
    return s;
    }
    else{
        return renum(n / 10, s * 10 + ( n %  10));
    }
}