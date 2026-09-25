/* write a program to find profit or loss percentage
given cost price and selling price */

#include <stdio.h>
int main()
{
    float cp, sp, pcntge;
    printf("enter cost price: \n");
    scanf("%f", &cp);
    printf("enter selling price: \n");
    scanf("%f", &sp);
    if(sp > cp)
    {
        pcntge = ((sp -cp)/cp)*100;
        printf("profit = %.2f%% \n", pcntge);
    }
    else if(cp > sp)
    {
        pcntge = ((cp - sp)/cp)*100;
        printf("loss = %.2f%% \n", pcntge);
    }
    else
    {
        printf("no profit, no loss \n");
    }
    return 0;
}
