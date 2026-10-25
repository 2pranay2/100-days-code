/* print each character of a string on a new line */

#include <stdio.h>
int main()
{
    char text[] = "C Language";
    int i = 0;
    printf("printing characters one by one:\n");
    while (text[i] != '\0')
    {
        printf("%c\n", text[i]); 
        i++;
    }
    return 0;
}
