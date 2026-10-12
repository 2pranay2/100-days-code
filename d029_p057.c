/* find the sum of array elements */

#include <stdio.h>
int main()
{
    int n, i,sum=0;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum of array elements: %d",sum);
    return 0;
}
