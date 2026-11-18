// WAP using recursion to find the largest element in an array.
#include <stdio.h>

int largest(int arr[], int n);

int main()
{
    int arr[100], n, i, z;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    z = largest(arr, n);

    printf("Largest element in the array = %d", z);

    return 0;
}

int largest(int arr[], int n)
{
    int i;

    if (n == 1)
        return arr[0];

    i = largest(arr, n - 1);

    if (arr[n - 1] > i)
        return arr[n - 1];
    else
        return i;
}