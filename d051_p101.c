/* write a program to take a sorted array(say nums[]) and an integer(say target) 
as inputs. the elements in the sorted array might me repeated. you need to print 
the first and last occurrence of the target and print the index of first and last 
occurrence. print -1, -1 if the target is not present.. */

#include <stdio.h>
int main()
{
    int n, target;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("enter the target: ");
    scanf("%d", &target);
    int firstIdx = -1;
    int lastIdx = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            firstIdx = mid;
            high = mid - 1;     
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    low = 0; 
    high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            lastIdx = mid;
            low = mid + 1;      
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("first index: %d, last index: %d\n", firstIdx, lastIdx);
    return 0;
}