/* write a program to calculate the area and circumference of a circle 
given its radius */

#include <stdio.h>
int main()
{
    float pi, cmfer, ar;
    pi = 3.1415;
    int radi;
    printf("please enter the radius of the circle: \n");
    scanf("%d", &radi);
    cmfer = 2*pi*radi;
    ar = pi*radi*radi;
    printf("for the given radius, the area and circumference of the circle are: \n");
    printf("%f units and %f sq.units", cmfer, ar);
    return 0;
}
