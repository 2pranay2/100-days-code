/* reverse a string */

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int l, r;
    char temp;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    l = 0;
    r = strlen(str) - 1;
    while (l < r)
    {
        temp = str[l];
        str[l] = str[r];
        str[r] = temp;

        l++;
        r--;
    }
    printf("reversed string: %s\n", str);
    return 0;
}