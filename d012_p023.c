/* write a program to calculate library fine based on late days as follows:
first 5 days late: 2 rupees/day
next 5 days late: 4 rupees/day
next 20 days late: 6 rupees/day
more than 30 days late: membership cancelled */

#include <stdio.h>
int main ()
{
    int ltedays;
    printf("enter the amount of late days: \n");
    scanf("%d",&ltedays);
    if (ltedays <= 5)
    printf("total fine is: %d", 2*ltedays);
    else if (ltedays > 5 && ltedays <= 10)
    printf("total fine is: %d", 4*ltedays);
    else if (ltedays > 10 && ltedays <=30)
    printf("total fine is: %d", 6*ltedays);
    else
    printf("membership cancelled");
    return 0;
}
