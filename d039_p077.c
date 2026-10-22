/* check if the elements on the diagonal of a matrix are distinct */

#include <stdio.h>
int main() 
{
    int n;
    int dist = 1;
    printf("enter the size of matrix (N x N): ");
    scanf("%d", &n);
    int matr[n][n];
    printf("enter the elements of matrix:\n");
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
        for (int j = i + 1; j < n; j++) 
        {
            if (matr[i][i] == matr[j][j]) 
            {
                dist = 0;
                break;
            }
        }
        if (dist == 0) 
        break;
    }
    if (dist == 1) 
    printf("the diagonal elements are distinct");
    else 
    printf("the diagonal elements are not distinct");
    return 0;
}