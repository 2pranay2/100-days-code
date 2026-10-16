/* search in a sorted array using binary search */

#include <stdio.h>
int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int tgt = 23;
    int low = 0;
    int high = size - 1;
    int rslt = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == tgt)
        {
            rslt = mid;
            break;
        }
        if (arr[mid] < tgt)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (rslt != -1)
    {
        printf("Element %d found at index %d.\n", tgt, rslt);
    }
    else
    {
        printf("Element %d not found.\n", tgt);
    }
    return 0;
}
