/* write a program to check if a number is an armstrong number */

#include <stdio.h>
int main()
{
    int n, og, rem, sum=0;
    printf("enter a number: ");
    scanf("%d", &n);
    og = n;
    while(n!=0)
    {
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(sum == og)
    printf("armstrong number");
    else
    printf("not an armstrong number");
    return 0;
}