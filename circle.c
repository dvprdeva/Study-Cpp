#include<stdio.h>              /* gives us printf() and scanf() */
#define PI 3.14159             /* constant value of pi, used in the formula */

int main()                     /* program execution starts here */
{
    float radius,area;         /* radius = input from user, area = result (float allows decimals) */

    printf("enter the value of radius:");   /* ask the user for the radius */
    scanf("%f", &radius);                   /* read a decimal number and store it in 'radius'.
                                               %f = float, & = address of the variable */

    area = PI * radius * radius;            /* formula: area = pi * r * r */

    printf("area=%.2f\n",area);             /* show the result; %.2f = 2 digits after the decimal point,
                                               \n = move to a new line */
    return 0;                               /* tell the system the program ended successfully */
}
