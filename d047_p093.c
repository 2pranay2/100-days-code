/* check if two strings are anagrams of each other */

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int count[256] = {0};
    int i;
    int isana = 1;
    printf("enter the first string: ");
    scanf("%99s", str1);
    printf("enter the second string: ");
    scanf("%99s", str2);
    if (strlen(str1) != strlen(str2))
    isana = 0;
    else
    {
        for (i = 0; str1[i] != '\0'; i++)
        {
            count[(unsigned char)str1[i]]++;
            count[(unsigned char)str2[i]]--;
        }
        for (i = 0; i < 256; i++)
        {
            if (count[i] != 0)
            {
                isana = 0;
                break;
            }
        }
    }
    if (isana)
    printf("the given strings are anagrams");
    else
    printf("the given strings are not anagrams");
    return 0;
}