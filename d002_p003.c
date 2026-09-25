/* write a program to calculate the perimeter and area of a rectangle 
given its length and breadth*/

#include <stdio.h>
int main()
{
    int lnth, brth, pm, ar;
    printf("please enter the length: \n");
    scanf("%d",&lnth);
    printf("please enter the breadth: \n");
    scanf("%d",&brth);
    pm = 2*(lnth+brth);
    ar = lnth*brth;
    printf("for the given length and breadth, the perimeter and area of rectangle are: \n ");
    printf("%d units and %d sq.units", pm, ar);
    return 0;
}
