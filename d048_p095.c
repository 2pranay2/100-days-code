/* check if one string is a rotation of another */

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("enter the first string: ");
    scanf("%99s", str1);
    printf("enter the second string: ");
    scanf("%99s", str2); 
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
    {
        printf("strings are not rotations (different lengths)\n");
        return 0; 
    }
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL)
    {
        printf("'%s' is rotation of '%s'\n", str2, str1);
    }
    else
    {
        printf("not rotations of each other.\n");
    }
    return 0;
}