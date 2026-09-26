/* write a program to implement a basic calculator using switch-case for +,-,*,/,%  */

#include <stdio.h>
int main()
{
    int n1, n2, choice;
    printf("choice 1 will perform addition \n");
    printf("choice 2 will perform subtraction \n");
    printf("choice 3 will perform multiplication \n");
    printf("choice 4 will perform division \n");
    printf("choice 5 will give remainder \n\n");
    printf("enter first number: ");
    scanf("%d",&n1);
    printf("enter second number: ");
    scanf("%d",&n2);
    printf("enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("addition: %d + %d = %d", n1, n2, n1+n2);
        break;
        case 2:
        printf("subtraction: %d - %d = %d", n1, n2, n1-n2);
        break;
        case 3:
        printf("multiplication: %d * %d = %d", n1, n2, n1*n2);
        break;
        case 4:
        printf("division: %d / %d = %d", n1, n2, n1/n2);
        break;
        case 5:
        printf("remainder: %d %% %d = %d", n1, n2, n1%n2);
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}