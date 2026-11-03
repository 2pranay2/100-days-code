/* print the initials of a name with the surname displayed in full */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char name[100];
    int len, i, lsdx = -1;
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
        len--;
    }
    for (i = len - 1; i >= 0; i--)
    {
        if (name[i] == ' ')
        {
            lsdx = i;
            break;
        }
    }
    if (lsdx == -1)
    {
        printf("Result: %s\n", name);
        return 0;
    }
    printf("Result: ");
    printf("%c. ", toupper(name[0]));
    for (i = 1; i < lsdx; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            printf("%c. ", toupper(name[i + 1]));
        }
    }
    printf("%s\n", &name[lsdx + 1]);
    return 0;
}