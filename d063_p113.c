/* Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. Print the kth 
smallest element as output. */

#include <stdio.h>
int main()
{
    int n, k, temp;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the value of k: ");
    scanf("%d", &k);
    if (k < 1 || k > n)
    {
        printf("invalid input! k must be between 1 and %d.\n", n);
        return 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    return 0;
}