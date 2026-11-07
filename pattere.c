#include<stdio.h>              /* gives us printf() and scanf() */

int main()                     /* program execution starts here */
{
    int i;                     /* row counter: which row we are printing now */
    int j;                     /* star counter: how many stars printed in this row */
    int rows;                  /* total number of rows, typed by the user */

    printf("Enter number of rows: ");   /* ask the user for input */
    scanf("%d", &rows);                 /* read an integer and store it in 'rows'.
                                           & gives scanf the address of 'rows' */

    /* OUTER LOOP: runs once for each row.
       i starts at 1 and goes up to 'rows' (i++ adds 1 after each row) */
    for (i = 1; i <= rows; i++)
    {
        /* INNER LOOP: prints the stars for the current row.
           Row 1 prints 1 star, row 2 prints 2 stars, row 3 prints 3, ...
           because j runs from 1 up to the current row number i */
        for (j = 1; j <= i; j++)
            printf("*");                /* print one star (no new line yet) */

        printf("\n");                   /* row finished: move to the next line */
    }

    return 0;                  /* tell the system the program ended successfully */
}
