/* write a program to take an array of integers as input, calculate the pivot index
of this array. the pivot index is the index where the sum of all numbers strictly to 
the left of the index is equal to the sum of all the numbers strictly to the index's 
right. if the index is on the left edge of the array, then the left sum is 0 
because there are no elements to the left. this also applies to the right edge of 
the array. print the leftmost pivot index. if no such index exists, print -1. */

#include <stdio.h>
int main()
{
    int n;
    printf("enter number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("invalid array size\n");
        return 1;
    }
    int arr[n];
    int tsum = 0;
    int lsum = 0;
    int pvtidx = -1;
    printf("enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        tsum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (lsum == (tsum - lsum - arr[i]))
        {
            pvtidx = i;
            break;
        }
        lsum += arr[i];
    }
    if (pvtidx != -1)
    {
        printf("leftmost pivot index : %d\n", pvtidx);
    }
    else
    {
        printf("no pivot index exists. output: -1\n");
    }
    return 0;
}