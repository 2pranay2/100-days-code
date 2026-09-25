/* write a program to input two numbers and display their sum*/

#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Please enter the first number: \n");
    scanf("%d",&n1);
    printf("Please enter the second number: \n");
    scanf("%d",&n2);
    n3 = n1 + n2;
    printf("The numbers entered are %d and %d,\n their sum is: %d", n1, n2, n3);
    return 0;
}
