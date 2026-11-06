/* write a program to take a sorted array arr[] and an integer x as input,
find the index(0-based) of the smallest element in arr[] that is greater than
or equal to x and print it. this element is called the ceil of x. if such an
element does not exist, print -1.
note: in case of multiple occurrences of ceil of x, return the index of the first occurrence. */

#include <stdio.h>
int main()
{
    int n, x;
    printf("enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    return 1;
    int arr[n];
    printf("enter sorted elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter x: ");
    scanf("%d", &x);
    int low = 0;
    int high = n - 1;
    int ans = -1; 
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        low = mid + 1;
    }
    printf("%d\n", ans);
    return 0;
}