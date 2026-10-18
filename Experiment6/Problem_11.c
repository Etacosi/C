// WAP to copy the elements of one array into another array. 
#include <stdio.h>
int main(){
    int a,n;

    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n],arra[n];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr[a]);
    }
    printf("Copy of an array is: ");
      for(a = 0 ; a < n ; a++){
            arra[a] = arr[a];
            printf("%d",arra[a]);
      }
    


    return 0;
}