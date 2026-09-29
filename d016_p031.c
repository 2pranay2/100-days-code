/* write a program to take a number as input and print its 
equivalent binary representation. */

#include <stdio.h>
int main()
{
    int n, binary[32], i=0;
    printf("enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        binary[i] = n%2;
        n=n/2;
        i++;
    }
    printf("binary representation: ");
    for (i=i-1; i>=0; i--)
    printf("%d", binary[i]);
    return 0;
}