// WAP to find the second smallest element in an array.
#include <stdio.h>
int main(){
    int a,n,z;
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
            z = s;
            s = arr[a];
        }else{
            if(arr[a] < z && arr[a] != s){
                z = arr[a];
            }
        }
    }
    printf("Second Smallest element of an array is: %d",z);
    return 0;
}