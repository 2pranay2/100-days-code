/* write a program to check if a number is a palindrome */

#include <stdio.h>
int main()
{
    int n, og, rev=0, rem;
    printf("enter a number: ");
    scanf("%d", &n);
    og = n;
    while(n!=0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    if(og == rev)
    printf("palindrome");
    else
    printf("not a palindrome");
    return 0;
}