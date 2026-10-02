/* write a program to find the sum of digits of a number */

#include <stdio.h>
int main()
{
    int num, dg, sm=0;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        dg = num%10;
        sm = sm+dg;
        num = num/10;
    }
    printf("sum of digits: %d", sm);
    return 0;
}