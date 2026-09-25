/* write a program to input time in seconds and convert it to
hours:minutes:seconds format */

#include <stdio.h>
int main()
{
    int tsec, hr, min, sec;
    printf("enter time in seconds: \n");
    scanf("%d", &tsec);
    hr = tsec/3600;
    tsec = tsec%3600;
    min = tsec/60;
    sec = tsec %60;
    printf("time = %02d:%02d:%02d", hr, min, sec);
    return 0;
}
