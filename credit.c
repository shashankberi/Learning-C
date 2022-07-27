#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number;
    // do-while loop to ask the user to input their card number
    do
    {
        number = get_long("Number: ");
    }
    // do-while loop will only accept numbers between 13 digits and 16 digits
    while (number < 1000000000000 || number > 9999999999999999);

//   for (i = 100)



    // if //(condition) the condition for this should be the remainder (mod) of the sum divided by 10 should be equal to zero
    // {
    //     // code to check
    // }


    // else
    // {
    //     printf("INVALID");
    // }


long first_two_digits(long first_two);
{
    // Iterating division by ten to store the first two digits of any inputed number
    do
    {
        long first_two = number / 10;
    }
    while (long first_two > 100 );

    if (first_two == 34 || first_two == 37)
    {
        printf("AMEX\n");
    }

}
}