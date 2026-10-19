/* find the sum of all elements in a matrix */

#include <stdio.h>
int main()
{
    int matrix[3][3] = {{5, 10, 15},{2, 4, 6},{1, 2, 3}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            sum += matrix[i][j];
        }
    }
    printf("The sum of all elements in the matrix: %d\n", sum);
    return 0;
}