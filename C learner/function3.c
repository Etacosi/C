//Check entered number is prime by using function with out arguments and with out return type.
#include<stdio.h>
int isprime();
void main()
{
    isprime();
}
int isprime(){
    int a,i,k = 0;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(i =1;i<=a/2;i++){
        if(a % i == 0){
            k++;
        }
    }
    if(k == 1){
        printf("Entered number is prime.");
    } else {
    printf("Entered number is not prime.");
}
}