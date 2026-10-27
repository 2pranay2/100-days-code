/* check is a string is a palindrome */

#include <stdio.h>
int main()
{
    char str[100];
    int len = 0;
    int l, r;
    int ispa = 1;
    printf("enter a string: ");
    scanf("%[^\n]", str);
    while (str[len] != '\0')
    {
        len++;
    }
    l = 0;
    r = len - 1;
    while (l < r)
    {
        if (str[l] != str[r])
        {
            ispa = 0;
            break;
        }
        l++;
        r--;
    }
    if (ispa)
    {
        printf("palindrome\n", str);
    }
    else
    {
        printf("not a palindrome\n", str);
    }
    return 0;
}