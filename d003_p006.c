/* write a program to swap two numbers using a third variable*/

#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter first number: \n");
    scanf("%d", &n1);
    printf("Enter second number: \n");
    scanf("%d", &n2);
    n3 = n1;
    n1 = n2;
    n2 = n3;
    printf(" the numbers after swapping are: %d, %d", n1, n2);
    return 0;
}
