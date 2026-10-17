/* delete an element from an array */

#include <stdio.h>
int main()
{
    int arr[100];
    int n, val, i, pos = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &val);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Element not found");
    }
    else
    {
        for (i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}