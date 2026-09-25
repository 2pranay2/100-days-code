/* write a program to input two numbers and display their sum, difference, product and quotient */

#include <stdio.h>
int main()
{
    float n1, n2, sum, diff, pdt, div;
    printf("Enter the first number: \n");
    scanf("%f",&n1);
    printf("Enter the second number: \n");
    scanf("%f",&n2);
    sum = n1+n2;
    diff = n1-n2;
    pdt = n1*n2;
    div = n1/n2;
    printf("The numbers entered are %f and %f \n", n1, n2);
    printf("Their sum is %f, \n difference is %f, \n product is %f, \n quotient is %f", sum, diff, pdt, div);
    return 0;
}
