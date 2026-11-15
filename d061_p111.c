/* Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k moving 
from left to right. If no negative exists in a window, print "0" for that window. 
Print the results separated by spaces as output. */

#include <stdio.h>
int main()
{
    int n, k;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter window size k: ");
    scanf("%d", &k);
    if (k <= 0 || k > n)
    {
        printf("invalid window size.\n");
        return 1;
    }
    for (int i = 0; i <= n - k; i++)
    {
        int fn = 0;
        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                printf("%d ", arr[j]);
                fn = 1;
                break;
            }
        }
        if (!fn)
        {
            printf("0 ");
        }
    }
    return 0;
}