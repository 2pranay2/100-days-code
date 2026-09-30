/* write a program to check if a number is prime */

#include <stdio.h>
int main()
{
    int num, i, isprime=1;
    printf("enter the number: \n");
    scanf("%d", &num);
    if(num <= 1)
    isprime=0;
    else
    {
        for (i=2; i*i <= num; i++)
        {
            if (num%i == 0)
            {   
                isprime=0;
                break;
            }
        }
    }
    if (isprime)
    printf("prime number");
    else
    printf("not a prime number");
    return 0;
}