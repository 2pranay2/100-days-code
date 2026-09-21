/* write a program to input three numbers and 
find the largest among them using if-else*/

#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("enter the three numbers: \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if (n1 > n2 && n1 > n3)
    printf("%d is the largest among the given",n1);
    else if (n2 > n1 && n2 > n3)
    printf("%d is the largest among the given",n2);
    else
    printf("%d is the largest among the given",n3);
    return 0;
}