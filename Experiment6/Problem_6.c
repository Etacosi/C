// WAP to count the even and odd elements in an array. 
#include <stdio.h>
int main(){
    int a,n,i;
    int e = 0,d = 0;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr[a]);
        if(arr[a] % 2 == 0 ){
            e++;
        } else{
            d++;
        }
    }
    printf("Even count is: %d\n",e);
    printf("Odd count is: %d",d);
    // for(i = 0; i < n; i++){
    //     if (arr[i] % 2 == 0 ){
    //         e++;
    //     } else{
    //         d++;
    //     }
    // }

    return 0;
}