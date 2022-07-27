#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // These will ask the user to input any two integer and will add them together

    // Prompt the user for x
    int x = get_int("x: ");

    // Prompt the user for y:
    int y = get_int("y: ");

    //Divide x by y
    float z = x/y;

    // Perform addition
    printf("%.50f\n", z);
}