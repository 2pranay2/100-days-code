/* write a program to find the 1's complement of a binary number and print it */

#include <stdio.h>
int main()
{
    int num, dg, comp=0, plc=1;
    printf("enter a binary number: ");
    scanf("%d", &num);
    while(num!=0)
    {
        dg = num%10;
        if(dg == 0)
        dg = 1;
        else
        dg = 0;
        comp = comp+dg*plc;
        plc = plc*10;
        num = num/10;
    }
    printf("1's compliment of the given number is: %d", comp);
    return 0;
}