/* write a program to find and display the sum of first n natural numbers*/

#include <stdio.h>
int main()
{
    int num, sum;
    printf("enter the number upto which the sum is to be calulated: \n");
    scanf("%d", &num);
    sum= num*(num+1)/2 ;
    printf(" the sum upto %d digit is : \n %d", num, sum);
    return 0;
}
