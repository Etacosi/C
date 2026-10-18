// WAP to count the positive, negative, and zero elements in an array.
#include <stdio.h>
int main(){
    int a,n;
    int e = 0,d = 0,c = 0;
    printf("Enter the Size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the element: ");
    for(a = 0 ; a < n ; a++){
        scanf("%d",&arr[a]);
        if(arr[a] == 0 ){
            e++;
        } else{
            if (arr[a] > 0 ){
            d++;
        }
        else{
            c++;
        }
    }
}
    printf("Total number of Zero element is: %d\n",e);
    printf("Total number of Positive element is: %d\n",d);
    printf("Total number of Negative element is: %d",c);

    return 0;
}
