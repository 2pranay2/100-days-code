/* reverse an array without taking extra space */

#include <stdio.h>
int main()
{
    int n, i, j, t;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements:");
    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
    i = 0;
    j = n-1;
    while(i<j)
    {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
    }
    printf("reversed array is:");
    for(i=0; i<n; i++)
    printf("%d ", arr[i]);
    return 0;
}