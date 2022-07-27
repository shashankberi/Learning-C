#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each colum
        for (int j = 0; j < n; j++)
        {
            // Print a brick
            printf("#");
        }
        // Creates a new row after the condition is met
        printf("\n");
    }
}