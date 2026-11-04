/* change the date format from dd/04/yyyy to dd-Apr-yyyy */

#include <stdio.h>
int main()
{
    const char *months[] = {
        "Invalid", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    char inpdate[20];
    int day, month, year;
    printf("Enter date (dd/mm/yyyy): ");
    scanf("%19s", inpdate);
    if (sscanf(inpdate, "%d/%d/%d", &day, &month, &year) == 3)
    {
        if (month >= 1 && month <= 12)
        {
            printf("Converted date: %02d-%s-%d\n", day, months[month], year);
        }
        else
        printf("Month must be a number between 01 and 12\n");
    }
    else
    printf("Invalid format structure, use dd/mm/yyyy\n");
    return 0;
}