/* Write a C program that creates a text file named info.txt in write mode. 
The program should take the user’s name and age as input, and write them to 
the file using fprintf(). After writing, display a message confirming that 
the data was successfully saved. */

#include <stdio.h>
int main()
{
    FILE *file;
    char name[100];
    int age;
    file = fopen("info.txt", "w");
    if (file == NULL)
    {
        printf("Error: Could not open or create info.txt.\n");
        return 1;
    }
    printf("enter your name: ");
    scanf(" %99[^\n]", name);
    printf("enter your age: ");
    scanf("%d", &age);
    fprintf(file, "name: %s\n", name);
    fprintf(file, "age: %d\n", age);
    fclose(file);
    printf("data was successfully saved to info.txt.\n");
    return 0;
}