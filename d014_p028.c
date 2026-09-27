/* write a program to print the product of even numbers from 1 to n */

#include <stdio.h>
int main()
{
    int n, pdt=1;
    printf("enter the number upto which the product of even numbers is needed:");
    scanf("%d",&n);
    for(int i=2; i<=n; i+=2)
    pdt = pdt*i;
    printf("product: %d", pdt);
    return 0;
}