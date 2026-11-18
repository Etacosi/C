// WAP to check whether a given number is prime using pointers.
#include <stdio.h>

int main()
{
    int n,s = 0,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    int *ptr = &n;
    printf("%d is ",n);
    for(i = 1;i <= (*ptr)/2;i++){
        if((*ptr) % i == 0){
            s++;
        }
    }
    if(s > 1){
        printf("not a Prime.");
    }
    else{
        printf("a Prime.");
    }

}