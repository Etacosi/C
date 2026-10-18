//  WAP to read and print all elements of an array. 
#include <stdio.h>
int main(){
    int a,n;

    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr[a]);
    }
    printf("All elements of an array is: ");
      for(a = 0 ; a < n ; a++){
        printf(" %d", arr[a]);
      }


    return 0;
}