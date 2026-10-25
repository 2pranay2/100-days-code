/* count characters in a string without using built-in length functions */

#include <stdio.h>
int main()
{
    char text[] = "Hello, World!";
    int count = 0;
    while (text[count] != '\0')
    {
        count++;
    }
    printf("string: \"%s\"\n", text);
    printf("number of characters: %d\n", count);
    return 0;
}