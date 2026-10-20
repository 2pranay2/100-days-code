/* find the transpose of a matrix */

#include <stdio.h>
int main()
{
    int matrix[5][5], tpose[5][5];
    int rows, cols, i, j;
    printf("Enter number of rows and columns (max 5): ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original Matrix:\n");
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; ++i)
    {
        for (j = 0; j < cols; ++j)
        {
            tpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the Matrix:\n");
    for (i = 0; i < cols; ++i)
    {
        for (j = 0; j < rows; ++j)
        {
            printf("%d\t", tpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}