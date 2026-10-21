/* add two matrices */

#include <stdio.h>
int main()
{
    int row, col, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int mat1[row][col];
    int mat2[row][col];
    int summat[row][col];
    printf("\nEnter elements for Matrix 1 (%dx%d):\n", row, col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter elements for Matrix B (%dx%d):\n", row, col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        summat[i][j] = mat1[i][j] + mat2[i][j];
    }
    printf("\nResultant matrix (Matrix 1 + Matrix 2):\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        printf("%d\t", summat[i][j]);
        printf("\n");
    }
    return 0;
}