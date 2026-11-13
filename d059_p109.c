/* Write a program to take an integer array arr and an integer k as inputs. 
Print the maximum sum of all the subarrays of size k. */

#include <stdio.h>
int main()
{
    int n, k;
    printf("enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the subarray size k: ");
    scanf("%d", &k);
    if (k > n || k <= 0)
    {
        printf("invalid input: k must be between 1 and %d.\n", n);
        return 1;
    }
    int csum = 0;
    for (int i = 0; i < k; i++)
    {
        csum += arr[i];
    }
    int msum = csum;
    for (int i = k; i < n; i++)
    {
        csum = csum + arr[i] - arr[i - k];
        if (csum > msum)
        {
            msum = csum;
        }
    }
    printf("Maximum sum of subarray of size %d is: %d\n", k, msum);
    return 0;
}