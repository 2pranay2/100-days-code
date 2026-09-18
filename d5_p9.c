/* write a program to calculate simple and compund intrest 
for given principal, rate, and time*/

#include <stdio.h>
int main()
{
    float p, r, t, amt, si, ci;
    int i;
    printf("enter the principal: \n");
    scanf("%f",&p);
    printf("enter the rate: \n");
    scanf("%f",&r);
    printf("enter time in years: \n");
    scanf("%f",&t);
    si = (p*r*t)/100;
    amt = p;
    for (i=1; i<=t; i++)
    {  amt = amt*(1+r/100);  }
    ci = amt - p;
    printf("simple interest = %.3f \n", si);
    printf("compund interest = %.3f \n", ci);
    return 0;
}