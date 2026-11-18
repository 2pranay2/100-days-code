/* Write a program to take a string s as input. The task is to find the length of the 
longest substring without repeating characters. Print the length as output. */

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    printf("enter string s: ");
    if (scanf("%s", s) == 1)
    {
        int n = strlen(s);
        int ml = 0;
        int left = 0;
        int ls[256];
        for (int i = 0; i < 256; i++)
        {
            ls[i] = -1;
        }
        for (int right = 0; right < n; right++)
        {
            unsigned char cc = s[right];
            if (ls[cc] >= left)
            {
                left = ls[cc] + 1;
            }
            ls[cc] = right;
            int cl = right - left + 1;
            if (cl > ml)
            {
                ml = cl;
            }
        }
        printf("%d\n", ml);
    }
    return 0;
}