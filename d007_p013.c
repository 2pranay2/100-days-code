/* write a program to input a year and check 
wheter it is a leap year or not using conditional statements */

#include <stdio.h>
int main()
{
    int year;
    printf("enter the year: \n");
    scanf("%d",&year);
    if (year%400==0)
      {  printf("leap year");  }
    else if (year%100==0)
      {  printf("not a leap year");  }
    else if (year%4==0)
      {  printf("leap year");  }
    else
      {  printf("not a leap year");  }
    return 0;
}
