/* count spaces, digits, and special characters in a string */

#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int spaces=0, digits=0;
    int spchars=0, letters=0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            continue;
        }
        if (isspace(str[i]))
        {
            spaces++;
        } 
        else if (isdigit(str[i]))
        {
            digits++;
        } 
        else if (isalpha(str[i]))
        {
            letters++;
        } 
        else
        spchars++;
    }
    printf("spaces:%d\n", spaces);
    printf("digits:%d\n", digits);
    printf("special Characters: %d\n", spchars);
    printf("letters (A-Z, a-z): %d\n", letters);
    return 0;
}