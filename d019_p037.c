/* write a program to find the LCM of two numbers */

#include <stdio.h>
int main()
{
    int a, b, x, y, rem, hcf, lcm;
    printf("enter the two numbers: ");
    scanf("%d %d", &a, &b);
    x=a;
    y=b;
    while(y!=0)
    {
        rem = x%y;
        x = y;
        y = rem;
    }
    hcf = x;
    lcm = (a*b)/hcf;
    printf("LCM = %d", lcm);
    return 0;
}