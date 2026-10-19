/* read and print a matrix */

#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int matrix[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The entered matrix is:\n");
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}