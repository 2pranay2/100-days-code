/* write a program to print all the the prime numbers from 1 to n */

#include <stdio.h>
int main()
{
    int end, i, j, isprime;
    printf("enter the range: \n");
    scanf("%d", &end);
    printf("prime numbers in the given range are: \n");
    for (i=1; i<=end; i++)
    {
        if (i<2)
            continue;
        isprime=1;
        for (j=2; j*j<=i; j++)
        {
            if (i%j == 0)
            {   isprime=0;
                break;    }
        }
    if (isprime)
    {   printf("%d,",i);   }
    }
    return 0;
}