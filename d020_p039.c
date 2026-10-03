/* write a program to find the product of odd digits of a number */

#include <stdio.h>
int main()
{
    int num, digi, pdt=1;
    printf("enter a number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        digi = num%10;
        if(digi%2 !=0)
        pdt = pdt*digi;
        num = num/10;
    }
    printf("product of odd digits: %d", pdt);
    return 0;
}