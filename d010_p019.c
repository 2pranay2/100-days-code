/* write a program to classify a triangle as equilateral, isosceles, 
or scalene based on its side length */

#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("enter the length of side1, side2, side3: \n");
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);
    if (s1 == s2 && s1 == s3)
    printf("it is an equilateral triangle");
    else if (s1 == s2 || s1 == s3 || s2 == s3)
    printf("it is an isosceleus triangle");
    else
    printf("it is an scalene triangle");
    return 0;
}
