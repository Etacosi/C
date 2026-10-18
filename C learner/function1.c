#include<stdio.h>
int isprime();
void main()
{
    int a,z;
    printf("Enter the number: ");
    scanf("%d",&a);
    z = isprime(a);
    if(z == 1){
        printf("Entered number is prime.");
    } else{
        printf("Entered number is not prime.");
    }
}
int isprime(int a){
int i,k = 0;
for(i =1;i<=a/2;i++){
    if(a % i == 0){
        k++;
    }
}
if(k == 1){
    return 1;
} else {
    return 0;
}
}