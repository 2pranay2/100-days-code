/* Write a program to take two sorted arrays of size m and n as input. Merge both the arrays 
such that the merged array is also sorted. Print the merged array. */

#include <stdio.h>
int main()
{
    int m, n;
    printf("enter size of first array (m): ");
    scanf("%d", &m);
    int arr1[m];
    printf("enter %d sorted elements: ", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter size of second array (n): ");
    scanf("%d", &n);
    int arr2[n];
    printf("enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int merged[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
    while (i < m)
    {
        merged[k++] = arr1[i++];
    }
    while (j < n)
    {
        merged[k++] = arr2[j++];
    }
    printf("Merged sorted array: ");
    for (int idx = 0; idx < m + n; idx++)
    {
        printf("%d ", merged[idx]);
    }
    return 0;
}