// WAP to print the elements of an array in reverse order. 
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
    printf("Reversed order of an array is: ");
    for(a = n - 1; a >= 0; a--){
        printf("%d S",arr[a]);
      }

    return 0;
}