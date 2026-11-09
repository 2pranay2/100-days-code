/* Write a program to take an integer array nums of size n, and print the majority element. 
The majority element is the element that appears strictly more than ⌊n / 2⌋ times. 
Print -1 if no such element exists. 
Note: Majority Element is not necessarily the element that is present most number of times. */

#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("invalid array size.\n");
        return 1;
    }
    int nums[n];
    printf("enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int cdt = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            cdt = nums[i];
            count = 1;
        }
        else if (nums[i] == cdt)
        count++;
        else
        count--;
    }
    int acount = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == cdt)
        acount++;
    }
    if (acount > n / 2)
    printf("majority element: %d\n", cdt);
    else
    printf("-1\n");
    return 0;
}