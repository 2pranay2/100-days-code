/* write a program to calculate the factorial of a number */

#include <stdio.h>
int main()
{
    int num, cnt=1, fact=1;
    printf("enter the number to display its factorial: \n");
    scanf("%d", &num);
    for(cnt=1; cnt<=num; cnt++)
    {
        fact=fact*cnt;
    }
    printf("the factorial of the number is: %d", fact);
    return 0;
}