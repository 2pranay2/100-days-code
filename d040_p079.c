/* perform diagonal traversal of a matrix */

#include <stdio.h>
int main()
{
    int rows, cols;
    printf("enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matr[rows][cols];
    int travmatr[rows][cols];
    printf("enter the matrix elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matr[i][j]);
        }
    }
    int trow = 0;
    int tcol = 0;
    for (int k = 0; k < rows + cols - 1; k++)
    {
        int r = (k < cols) ? 0 : k - cols + 1;
        int c = (k < cols) ? k : cols - 1;
        while (r < rows && c >= 0)
        {
            travmatr[trow][tcol] = matr[r][c];
            tcol++;
            if (tcol == cols)
            {
                tcol = 0;
                trow++;
            }
            r++;
            c--;
        }
    }
    printf("Traversed Matrix Grid:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", travmatr[i][j]);
        }
        printf("\n");
    }
    return 0;
}