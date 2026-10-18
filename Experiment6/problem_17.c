// WAP to find the common elements between two arrays. 
#include <stdio.h>
int main(){
    int a,n,i,m;
    printf("Enter the Size of array: ");
    scanf("%d %d",&n,&m);
    int arr1[n],arr2[m];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr1[a]);
    }
    printf("Enter the element: ");
    for(a = 0 ; a < m ; a++){
        scanf("%d",&arr2[a]);
    }
    printf("Common elements between two arrays is: ");
    for(a = 0 ; a < n ; a++){
        for(i = 0; i < m; i++){
        if(arr1[i] == arr2[a]){
            printf("%d ",arr1[i]);
            break;
        }
        }
      }
    return 0;
}