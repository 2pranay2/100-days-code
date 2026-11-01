/* find the longest word in a sentence */

#include <stdio.h>
#include <string.h>
int main()
{
    char sntc[200];
    char lngw[50] = "";
    char crw[50];
    int crl = 0;
    int maxLen = 0;
    int i = 0;
    printf("enter a sentence: ");
    fgets(sntc, sizeof(sntc), stdin);
    while (sntc[i] != '\0')
    {
        if (sntc[i] != ' ' && sntc[i] != '\n')
        {
            crw[crl] = sntc[i];
            crl++;
        } 
        else
        {
            if (crl > 0)
            {
                crw[crl] = '\0';
                if (crl > maxLen)
                {
                    maxLen = crl;
                    strcpy(lngw, crw);
                }           
                crl = 0;
            }
        }
        i++;
    }
    if (crl > maxLen)
    {
        crw[crl] = '\0';
        maxLen = crl;
        strcpy(lngw, crw);
    }
    printf("longest word: \"%s\"\n", lngw);
    printf("length: %d characters", maxLen);
    return 0;
}