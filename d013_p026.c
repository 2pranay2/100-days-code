/* write a program to print numbers from 1 to n */

#include <stdio.h>
int main()
{
    int n;
    printf("enter the amount upto which the numbers are to be printed: \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    printf("%d ",i);
    return 0;
}