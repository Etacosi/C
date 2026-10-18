// WAP to find the sum of all elements of an array.  
#include <stdio.h>
int main(){
    int a,i,n,s = 0;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr[a]);
        // s = s + arr[a];
    }
    printf("Sum of all elements of an array is: ");
      for(i = 0 ; i < n ; i++){
        s = s + arr[i];
    }
    printf("%d",s);


    return 0;
}