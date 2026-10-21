/* check if a matrix is symmetric */

#include <stdio.h>
int main()
{
    int row, col, i, j;
    int sym = 1;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    if (row != col)
    {
        printf("not symmetric, reason: not a square matrix.\n");
        return 0;
    }
    int matrix[row][col];
    printf("Enter elements for the %dx%d matrix:\n", row, col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                sym = 0;
                break;
            }
        }
        if (sym == 0)
        break;
    }
    if (sym == 1)
    printf("matrix is symmetric");
    else
    printf("matrix is not symmetric");
    return 0;
}