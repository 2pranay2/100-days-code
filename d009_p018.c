/* write a program that accepts a percentage (0-100)
and assigns a grade based on the following criteria:
  90-100 : grade A
  80=89 : grade B
  70-79 : grade C
  60-69 : grade D
  below 60 : grade E
*/

#include <stdio.h>
int main()
{
    int pct;
    printf("enter the percentage: \n");
    scanf("%d",&pct);
    if (pct < 0 && pct >100)
      printf("invalid percentage");
    else if (pct >= 90 && pct <= 100)
      printf("grade A");
    else if (pct >=80 && pct <= 89)
      printf("grade B");
    else if (pct >= 70 && pct <= 79)
      printf("grade C");
    else if (pct >= 60 && pct <= 69)
      printf("grade D");
    else if (pct < 60)
      printf("grade E");
    return 0;
}
