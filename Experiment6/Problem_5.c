// WAP to find the smallest element in an array.
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
    s = arr[0];
    for(a = 0 ; a < n ; a++){
        if(s > arr[a]){
        s = arr[a];
        }
    }
    printf("Smallest element of an array is: %d",s);
    return 0;
}