/* Write a program to take an integer array arr as input. The task is to find the 
maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum 
sum as output. If all elements are negative, print the largest (least negative) element. */

#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("invalid array size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mfar = arr[0];
    int cmax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > cmax + arr[i])
        cmax = arr[i];
        else
        cmax = cmax + arr[i];
        if (cmax > mfar)
        mfar = cmax;
    }
    printf("maximum contiguous subarray sum: %d\n", mfar);
    return 0;
}