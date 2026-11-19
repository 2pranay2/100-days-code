/* Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters 
with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram". */

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], t[1000];
    int count[26] = {0};
    printf("enter first string: ");
    scanf("%s", s);
    printf("enter second string: ");
    scanf("%s", t);
    if (strlen(s) != strlen(t))
    {
        printf("not anagram\n");
        return 0;
    }
    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("not anagram\n");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}