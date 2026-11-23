/* Write a program to take an integer array as input. Only one element will be repeated. 
Print the repeated element. Try to find the result in one single iteration. */

#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array (n): ");
    scanf("%d", &n);
    int nums[n];
    int seen[n];
    for (int i = 0; i < n; i++)
    {
        seen[i] = 0;
    }
    printf("enter %d integers (from 0 to %d): ", n, n - 1);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (seen[nums[i]] == 1)
        {
            printf("repeated element: %d\n", nums[i]);
            return 0;
        }
        seen[nums[i]] = 1;
    }
    return 0;
}