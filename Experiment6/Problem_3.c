// WAP to find the average of elements of an array. 
#include <stdio.h>
int main(){
    int a,i,n;
    float s = 0;
    
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr[a]);
    }
    printf("Average of elements of an array is: ");
      for(i = 0 ; i < n ; i++){
        s = s + arr[i];
        // printf("%.2f",s);
    }
    s = s / n ;
    printf("%.2f",s);


    return 0;
}