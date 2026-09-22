/* write a program to find the roots of a quadratic equation and categorise them */

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discr;
    float rt1, rt2, realp, imagp;
    printf("enter coeffs. a, b, c: \n");
    scanf("%f %f %f",&a, &b, &c);
    if (a==0)
    {
        printf("not a quadratic equation");
        return 0;
    }
    discr = b * b - 4 * a * c;
    if (discr > 0 )
    {
        rt1 = (-b + sqrt(discr)) / 2*a;
        rt2 = (-b - sqrt(discr)) / 2*a;
        printf("the roots are real and distinct \n");
        printf("the roots are %.2f and %.2f", rt1, rt2);
    }
    else if (discr == 0)
    {
        rt1 = - b / 2*a;
        printf("the roots are real and eqaul \n");
        printf("root1 = root2 = %.2f", rt1);
    }
    else
    {
        realp = - b / 2*a;
        imagp = sqrt(-discr)/2*a;
        printf("the roots are complex and imaginary \n");
        printf("root1 = %.2f + %.2f \n", realp, imagp);
        printf("roots2 = %.2f - %.2f", realp, imagp);
    }
    return 0;
}