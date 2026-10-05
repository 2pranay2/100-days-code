/* write a program to check if a number is a strong number */

#include <stdio.h>
int main()
{
    int n, og, dg, fact, sum=0, i;
    printf("enter a number: ");
    scanf("%d", &n);
    og=n;
    while(n!=0)
    {
        dg = n%10;
        fact = 1;
        for(i=1; i<=dg; i++)
        {
            fact = fact*i;
        }
        sum = sum+fact;
        n = n/10;
    }
    if (sum == og)
    printf("it is a strong number");
    else
    printf("not a strong number");
    return 0;
}