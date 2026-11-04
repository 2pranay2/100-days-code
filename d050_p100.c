/* print all sub-strings of a string */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int length;
    printf("enter a string: ");
    scanf("%99s", str);
    length = strlen(str);
    printf("All substrings of \"%s\" are:\n", str);
    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}