// WAP to count the frequency of a given element in an array.
#include <stdio.h>
int main(){
    int a,i,n,z,s = 0;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr[a]);
    }
    printf("Enter the element which frequency need: ");
    scanf("%d",&z);
    
      for(i = 0 ; i < n ; i++){
        if(arr[i] == z){
            s++;
        }
    }
    printf("Frequency of %d is: %d\n",z,s);
        
        
    return 0;
}