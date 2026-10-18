/* rotate an array to the right by k positions */

#include <stdio.h>
int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int size = 10;
    int k;
    printf("how many positions to rotate?: ");
    scanf("%d", &k);
    k = k % size; 
    int temp[10];
    for (int i=0; i<size; i++)
    {
        int new_pos = (i+k) % size;
        temp[new_pos] = arr[i];
    }
    for (int i=0; i<size; i++)
    {
        arr[i] = temp[i];
    }
    printf("Rotated array: ");
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
