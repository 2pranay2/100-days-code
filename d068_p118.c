/* Write a program to take an input array of size n. The array should contain all the integers 
between 0 to n except for one. Print that missing number. */

#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array (n): ");
    scanf("%d", &n);
    int nums[n];
    int asum = 0;
    printf("enter %d distinct integers between 0 and %d: ", n, n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        asum += nums[i];
    }
    int esum = n * (n + 1) / 2;
    int mi = esum - asum;
    printf("Missing number: %d\n", mi);
    return 0;
}