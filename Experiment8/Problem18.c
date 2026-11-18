// WAP using recursion to find the sum of all elements in an array.
#include <stdio.h>

int sum(int arr[], int n);

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
    
    s = sum(arr, n);
    
    printf("Sum of array elements = %d", s);
    
    return 0;
}
int sum(int arr[], int n)
{
    if (n == 0){
        return 0;
    }
    else{
            return arr[n - 1] + sum(arr, n - 1);
        }
}