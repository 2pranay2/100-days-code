/* count frequency of a given character in a string */

#include <stdio.h>
int main()
{
    char str[100];
    char t;
    int count = 0;
    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("enter the character to count: ");
    scanf(" %c", &t);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == t)
        {
            count++;
        }
    }
    printf("'%c' appeared %d times in the string", t, count);
    return 0;
}