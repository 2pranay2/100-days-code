/* find the first repeating lowercase alphabet in a string */

#include <stdio.h>
int main()
{
    char str[100];
    int seen[26] = {0}; 
    char fsr = '\0';
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            int index = str[i] - 'a';
            if (seen[index] == 1)
            {
                fsr = str[i];
                break;
            }
            seen[index] = 1;
        }
        i++;
    }
    if (fsr != '\0')
    printf("first repeating lowercase alphabet: '%c'\n", fsr);
    else
    printf("repeating lowercase alphabets not found\n");
    return 0;
}