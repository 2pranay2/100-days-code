/* multiply two matrices */

#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("enter rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("enter rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
    {
        printf("cannot multiply, reason: Columns(matrix A) != rows(matrix B)\n");
        return 0; 
    }
    int A[r1][c1];
    int B[r2][c2];
    int result[r1][c2];
    printf("enter elements for matrix A:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter elements for Matrix B:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Matrix A:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("resultant matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}