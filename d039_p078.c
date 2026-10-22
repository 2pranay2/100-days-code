/* find the sum of main diagonal elements for a square matrix */

#include <stdio.h>
int main() 
{
    int n;
    int sum = 0;
    printf("Enter the size of matrix (N x N): ");
    scanf("%d", &n);
    int matr[n][n];
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) 
    {
        sum += matr[i][i];
    }
    printf("sum of main diagonal elements is: %d", sum);
    return 0;
}