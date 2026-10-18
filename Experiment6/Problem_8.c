// WAP to search for a given element in an array using linear search.
#include <stdio.h>
int main(){
    int a,n,z = 0,i;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr[a]);
    }
    printf("Element which you want to search: ");
    scanf("%d",&i);

    for(a = 0 ; a < n ; a++){
        if (arr[a] == i){
            z = 1;
            break;
    }
}
       if (z){
            printf("%d is found.",i);
        }else{
            printf("%d is not found.",i);
        }

    return 0;
}

