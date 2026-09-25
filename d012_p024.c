/* write a program to calculate electricty bill based on units consumed with these rates:
first 100 units at 5/unit
next 100 units at 7/unit
next 100 units at 10/unit
above at 12/unit */

#include <stdio.h>
int main()
{
    int unt;
    printf("enter the amount of units consumed: \n");
    scanf("%d", &unt);
    if (unt < 100)
    printf("electricity bill : %d", 5*unt);
    else if (unt > 100 && unt <= 200)
    printf("electricity bill : %d", 7*unt);
    else if (unt > 200 && unt <= 300)
    printf("electricity bill : %d", 10*unt);
    else
    printf("electricity bill : %d", 12*unt);
    return 0;
}
