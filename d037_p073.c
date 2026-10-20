/* find the sum of each row of a matrix and store it in an array */

#include <stdio.h>
int main()
{
    int matrix[5][5];
    int rowSum[5] = {0};
    int rows, cols, i, j;
    printf("Enter number of rows and columns (max 5): ");
    scanf("%d %d", &rows, &cols);
    printf("Enter elements of the matrix:\n");
    for (i=0; i<rows; ++i)
    {
        for (j=0; j<cols; ++j)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i=0; i<rows; ++i)
    {
        for (j=0; j<cols; ++j)
        {
            rowSum[i] += matrix[i][j];
        }
    }
    printf("Sums of the individual rows:\n");
    for (i=0; i<rows; ++i)
    {
        printf("Sum of row %d = %d\n", i + 1, rowSum[i]);
    }
    return 0;
}
