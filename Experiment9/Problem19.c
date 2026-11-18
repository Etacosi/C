// WAP to sort the elements of an array in ascending order using pointers.
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, z;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if(*(arr + j) > *(arr + j + 1)){
                z = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = z;
            }
        }
    }
    printf("Array element in ascending order: ");
    for(i = 0; i < n; i++){
        printf("%d ",*(arr + i));
    }
    return 0;

}