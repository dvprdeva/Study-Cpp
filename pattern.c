#include<stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)        /* outer loop: one pass per row */
    {
        for (j = 1; j <= i; j++)       /* inner loop: print i stars */
            printf("* ");
        printf("\n");                  /* move to the next line */
    }
    return 0;
}
