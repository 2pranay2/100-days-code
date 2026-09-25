/* write a program to input a character and check whether it is an 
uppercase alphabet, lowercase alphabet, digit, or special character*/

#include <stdio.h>
int main()
{
    char inpu;
    printf("enter the character: \n");
    scanf("%c",&inpu);
    if (inpu >= 'a' && inpu <= 'z')
    printf("lowercase character");
    else if(inpu >= 'A' && inpu <='Z')
    printf("uppercase character");
    else if(inpu >= '0' && inpu <= '9')
    printf("digit");
    else
    printf("special character");
    return 0;
}
