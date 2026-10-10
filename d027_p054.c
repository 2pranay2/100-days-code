/* write a program to print the following pattern 

   *
  ***
 *****
*******
 *****
  ***
   * */

#include <stdio.h>
int main()
{
   int i, j, st, sp;
   for(i=1; i<=7; i++)
   {
      st = (i <= 4) ? (2*i - 1) : (15 - 2*i);
      sp = (i <= 4) ? (4 - i) : (i - 4);
      for(j=1; j<=sp; j++)
      printf(" ");
      for(j=1; j<=st; j++)
      printf("*");
      printf("\n");
   }
   return 0;
}
