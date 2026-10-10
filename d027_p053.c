/* write a program to print the following pattern 

*
***
*****
*******
*********
*******
*****
***
* */

#include <stdio.h>
int main()
{
    int i, j, s;
    for(i=1; i<=9; i++)
    {
        s = (i <= 5) ? (2*i - 1) : (19 - 2*i);
        for(j=1; j<=s; j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
