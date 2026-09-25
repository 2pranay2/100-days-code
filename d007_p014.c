/* write a program to input a character and check
whether it is a vovel or consonant using if-else */

#include <stdio.h>
int main()
{
    char alph;
    printf("enter the character: \n");
    scanf("%c",&alph);
    if (alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u')
    {
        printf("vovel");
    }
    else
    {
        printf("consonant");
    }
    return 0;
}
