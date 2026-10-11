/* read and print elements of a one-dimensional array */

#include <stdio.h>
int main()
{
    int n, i;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements in the arrayare: ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}