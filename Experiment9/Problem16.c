// WAP to find the sum of all elements in an array using pointers.
#include <stdio.h>
int main()
{
    int arr[100], n, i, s = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int *ptr = arr;
    for(i = 0; i < n; i++){
        s = s + *(ptr + i);
    }
    
    printf("Sum of array elements = %d", s);
    
    return 0;
}