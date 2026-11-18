// WAP to find a number is prime or not by using pointer.
#include<stdio.h>
int isprime(int *a);
void main(){
    int a;

    printf("Enter the number: ");
    scanf("%d",&a);
    if(isprime(&a) == 1)
    printf("%d is a prime number.",a);
    else
    printf("%d is not a prime number.",a);


}
int isprime(int *a){
    int i,j=0;
    for(i = 1; i <= *a/2 ;i++)
    {
        if(*a % i == 0)
        j++;
    }
    return j;
}
    

