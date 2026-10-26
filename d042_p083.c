/* count vovels and consonants in a string */

#include <stdio.h>
int main()
{
    char str[100];
    int vwls = 0;
    int cons = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vwls++;
            else
            cons++;
        }
    }
    printf("Vowels: %d\n", vwls);
    printf("Consonants: %d ", cons);
    return 0;
}