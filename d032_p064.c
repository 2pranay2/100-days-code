/* find the digit that occurs the most times in an integer number */

#include <stdio.h>
int main()
{
    int numb[] = {1, 2, 2, 3, 4, 5, 2, 2};
    int size = sizeof(numb) / sizeof(numb);
    int freq[10] = {0};     
    int maxfreq = 0;
    int mstfreqdig = 0;
    for (int i = 0; i < size; i++)
    {
        int digit = numb[i];
        freq[digit]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > maxfreq)
        {
            maxfreq = freq[i];
            mstfreqdig = i;
        }
    }
    printf("The digit that occurs the most times is: %d (occurs %d times)\n", mstfreqdig, maxfreq);
    return 0;
}