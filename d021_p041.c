/* write a program to swap the first and last digit of a number */

#include <stdio.h>
int main()
{
    int num, fst, lst, dg, pw, md, rslt;
    printf("enter a number: ");
    scanf("%d", &num);
    lst = num%10;
    pw = 1;
    dg = num;
    while(dg >= 10)
    {
        dg = dg/10;
        pw = pw*10;
    }
    fst = dg;
    md = (num%pw)/10;
    rslt = lst*pw+md*10+fst;
    printf("number after swapping first and last digits: %d", rslt);
    return 0;
}