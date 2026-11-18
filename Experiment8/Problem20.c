// WAP using recursion to find the smallest element in an array.
#include <stdio.h>

int smallest(int arr[], int n);

int main()
{
    int arr[100], n, i, z;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    z = smallest(arr, n);

    printf("Smallest element in the array is: %d", z);

    return 0;
}

int smallest(int arr[], int n)
{
    int i;

    if (n == 1)
        return arr[0];

    i = smallest(arr, n - 1);

    if (arr[n - 1] < i)
        return arr[n - 1];
    else
        return i;
}