// WAP to merge two arrays into a third array.
#include <stdio.h>
int main(){
    int a,n,i,m;
    printf("Enter the Size of array: ");
    scanf("%d %d",&n,&m);
    int arr1[n],arr2[m],arr3[100];

    printf("Enter the element for array1: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr1[a]);
    }
    printf("Enter the element for array2: ");
    for(a = 0 ; a < m ; a++){
        scanf("%d",&arr2[a]);
    }
        printf("Merged array is: ");
      for(a = 0 ; a < n ; a++){
            arr3[a] = arr1[a];
            printf("%d",arr3[a]);
      }
      for(i = 0 ; i < m ; i++){
            arr3[a] = arr2[i];
            printf("%d",arr3[a]);
            a++;
            
        }
    return 0;
}