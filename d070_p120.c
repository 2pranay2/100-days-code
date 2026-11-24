/* Write a program to take a string input. Change it to sentence case. */

#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[1000];
    int i = 0;
    int ns = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        if (ns && isalpha((unsigned char)str[i]))
        {
            str[i] = toupper((unsigned char)str[i]);
            ns = 0;
        }
        else
        {
            str[i] = tolower((unsigned char)str[i]);
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            ns = 1;
        }
        i++;
    }
    printf("Sentence case: %s", str);
    return 0;
}