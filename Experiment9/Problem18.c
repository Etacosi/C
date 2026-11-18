// WAP to reverse the elements of an array using pointers.
#include <stdio.h>
int main()
{
    int arr[100], n, i, s;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr1 = arr;
    int *ptr2 = arr + n - 1;
    while(ptr1 < ptr2){
        s = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = s;
        ptr1++;
        ptr2--;
    }
    printf("Reversed element of array: ");
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;

}