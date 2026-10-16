/* insert an element in a sorted array at the appropriate position */

#include <stdio.h>
int main()
{
    int arr[10] = {2, 5, 8, 12, 16, 23, 38}; 
    int cntsize = 7;
    int newno = 15;
    printf("Original array: ");
    for (int i=0; i<cntsize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int i = cntsize - 1;
    while (i>=0 && arr[i]>newno)
    {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = newno;
    cntsize++;
    printf("Array after insertion: ");
    for (int i=0; i<cntsize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
