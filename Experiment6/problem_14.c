// WAP to sort the elements of an array in ascending order.
#include <stdio.h>
int main(){
    int a,n,i;
    int s = 0;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr[a]);
    }
    for(a = 0 ; a < n - 1 ; a++){
        for(i = 0; i < n - 1 - a; i++){
            if(arr[i] > arr[i + 1]){
        s = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = s;
            }
        }
    }
    printf("Array in ascending order is: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}