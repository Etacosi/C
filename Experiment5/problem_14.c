// WAP to check whether a number is a perfect number or not.
#include <stdio.h>
int main(){
    int a, i , s = 0;
    printf("Enter the number: ");
    scanf("%d",&a);

    for(i = 1; i <= a/2; i++){
        if(a % i == 0){
            s = s + i ;
        }
    }
    if( s == a ){
        printf("%d is a perfect number.",a );
    }
    else{
        printf("%d is not a perfect number.",a );
    }
    return 0;
}