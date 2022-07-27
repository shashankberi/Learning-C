#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* Must declare the variable before starting the do-while loop. In this case n is the
    variable */
    int height, row, column, blank;

    /* This do while loop will constantly ask the user for the size input as long as the
        conditions of the given integer, n, is less than 1 or greater than 8 are true */
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        /* The for loop for blank will increase by 1 as it moves to the next column. Because
        it is nested inside of the row for loop, it will reset back to zero every time a new
        row is printed. */
        for (blank = 0; blank < height - row - 1; blank++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}





//   if (row < column)
//         {
//             printf(" ");
//         }
//         else if (row == column)
//         {
//             printf("#");
//         }
//         else
//         {
//             printf("#");
//         }
//        }
//        printf("\n");