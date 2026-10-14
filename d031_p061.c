/* search for an element in an array using linear search */

#include <stdio.h>
int main()
{
    int n, t, f=0;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the numbers: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the array is:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("enter the element to search for:");
    scanf("%d", &t);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==t)
        {
            printf("the number is at position:%d ",i+1);
            f=1;
            break;
        }
    }
    if (f==0)
    printf("number not found");
    return 0;
}