/* write a program to convert temperature form celsius to fahrenheit*/

#include <stdio.h>
int main()
{
    float cels, fahr;
    printf("Enter temperature in celsius: \n");
    scanf("%f",&cels);
    fahr = cels*1.8 + 32;
    printf("The temperatue in fahrenheit is: %f \n", fahr);
    return 0;
}
