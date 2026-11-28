/* Take two filenames from the user – a source file and a destination file. Copy all the 
content from the source file to the destination file using fgetc() and fputc(). */

#include <stdio.h>
int main(void)
{
    char sname[256];
    char dname[256];
    FILE *src = NULL;
    FILE *dst = NULL;
    int ch;
    printf("Enter source filename: ");
    if (scanf("%255s", sname) != 1)
    {
        fprintf(stderr, "Error reading source filename.\n");
        return 1;
    }
    printf("Enter destination filename: ");
    if (scanf("%255s", dname) != 1)
    {
        fprintf(stderr, "Error reading destination filename.\n");
        return 1;
    }
    src = fopen(sname, "rb");
    if (src == NULL)
    {
        perror("Error opening source file");
        return 1;
    }
    dst = fopen(dname, "wb");
    if (dst == NULL)
    {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }
    while ((ch = fgetc(src)) != EOF)
    {
        if (fputc(ch, dst) == EOF)
        {
            fprintf(stderr, "Error writing to destination file.\n");
            fclose(src);
            fclose(dst);
            return 1;
        }
    }
    if (ferror(src))
    {
        fprintf(stderr, "Error reading from source file.\n");
        fclose(src);
        fclose(dst);
        return 1;
    }
    fclose(src);
    fclose(dst);
    printf("File copied successfully.\n");
    return 0;
}