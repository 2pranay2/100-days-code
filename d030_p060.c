/* count positive, negative, and zero elements in an array */

#include <stdio.h>
int main()
{
    int n, pstv=0, ngtv=0, zero=0;
    printf("enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pstv++;
        }
        else if (arr[i] < 0)
        {
            ngtv++;
        }
        else
        {
            zero++;
        }
    }
    printf("positive: %d\n", pstv);
    printf("negative: %d\n", ngtv);
    printf("zero: %d\n", zero);
    return 0;
}
