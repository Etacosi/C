// WAP to find the largest and smallest elements in an array using pointers.
#include <stdio.h>
int main()
{
    int arr[100], n, i, s = 0,z = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    z = *ptr;
    for(i = 0 ; i < n ; i++){
        if(s < *(ptr + i)){
        s = *(ptr + i);
        }
        if(z > *(ptr + i)){
        z = *(ptr + i);
        }
    }
    printf("%d is the largest element of array.\n",s);
    printf("%d is the smallest element of array.",z);

}