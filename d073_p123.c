/* Read a text file and count the total number of characters, words, and lines. 
A word is defined as a sequence of non-space characters separated by spaces or newlines. */

#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *file;
    char filename[100];
    int ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;
    printf("Enter the file name: ");
    scanf("%99s", filename);
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;
        if (ch == '\n')
        {
            lines++;
        }
        if (isspace(ch))
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            words++;
        }
    }
    if (characters > 0 && ch != '\n')
    {
        lines++;
    }
    fclose(file);
    printf("Characters : %d\n", characters);
    printf("Words      : %d\n", words);
    printf("Lines      : %d\n", lines);
    return 0;
}