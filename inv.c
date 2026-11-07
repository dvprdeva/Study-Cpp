#include<stdio.h>

int main()
{
    int year;
    float amount = 5000.00;     /* starting amount */
    float inrate = 0.11;        /* 11% interest per year */

    for (year = 0; year <= 10; year++)
    {
        printf("%2d  %8.2f\n", year, amount);
        amount = amount + inrate * amount;   /* add one year's interest */
    }
    return 0;
}
