// WAP to create 3 digit password by using your phone number smallest digits and binary search and using Array.
#include<stdio.h>
int main(){
    int arr[10],i ,z,j;
    int a, b,c;
    printf("Enter the phone number: ");

    for(i = 0;i < 10;i++){
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < 9; i++ ){
        for(j = 0; j < 9-i; j++){
            if (arr[j] > arr[j + 1]){
                z = arr[j];
                arr[j] = arr[j +1];
                arr[j + 1 ] = z;
            }
        }
    }
    a = arr[0];
    b = arr[1];
    c = arr[2];











    

    return 0;
}