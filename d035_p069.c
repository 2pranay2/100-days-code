/* find the second largest number in an array */

#include <stdio.h>
int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = 6;
    int lgst = arr[0];
    int sclgst = -1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > lgst)
        {
            sclgst = lgst;
            lgst = arr[i];
        }
        else if(arr[i] > sclgst && arr[i] != lgst)
        {
            sclgst = arr[i];
        }
    }
    if (sclgst == -1)
    {
        printf("second largest number not found.\n");
    }
    else
    {
        printf("the second largest number is: %d\n", sclgst);
    }
    return 0;
}
