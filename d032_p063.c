/* merge two arrays */

#include <stdio.h>
int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;
    int mergarr[size3];
    int i, j;
    for (i=0; i<size1; i++)
    {
        mergarr[i] = arr1[i];
    }
    for (j=0; j<size2; j++)
    {
        mergarr[i] = arr2[j];
        i++;
    }
    printf("Merged Array: ");
    for (i=0; i<size3; i++)
    {
        printf("%d ", mergarr[i]);
    }
    printf("\n");
    return 0;
}
