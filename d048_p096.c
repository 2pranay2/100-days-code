/* reverse each word in a sentence without changing the word order */

#include <stdio.h>
#include <string.h>
int main()
{
    char sen[200];
    int len, wst, wnd, i;
    char temp;
    printf("enter a sentence: ");
    fgets(sen, sizeof(sen), stdin);
    len = strlen(sen);
    if (len > 0 && sen[len - 1] == '\n')
    {
        sen[len - 1] = '\0';
        len--;
    }
    wst = 0;
    for (i = 0; i <= len; i++)
    {
        if (sen[i] == ' ' || sen[i] == '\0')
        {
            wnd = i - 1;
            while (wst < wnd)
            {
                temp = sen[wst];
                sen[wst] = sen[wnd];
                sen[wnd] = temp;
                wst++;
                wnd--;
            }
            wst = i + 1;
        }
    }
    printf("Modified sentence: %s\n", sen);
    return 0;
}