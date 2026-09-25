/* write a program to swap two numbers without using a third variable*/


#include <stdio.h>
int main()
{
    int n1, n2;
    printf("enter the first number: \n");
    scanf("%d", &n1);
    printf("enter the second number: \n");
    scanf("%d", &n2);
    printf("the numbers after swapping are: \n %d and %d", n2, n1);
    return 0;
}
