#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long number;
    // do-while loop to ask the user to input their card number and will only accept numbers greater than 0
    do
    {
        number = get_long("Number: ");
    }
    while (number < 0);

    // Determining the length of the credit card number
    int length = 0;
    long ccn = number;
    length = 0;

    do
    {
        ccn = ccn / 10;
        length++;
    }
    while (ccn > 0);

    // Checking if the length of the credit card number meets the requirement
    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
        return 0;
    }

    int s1, s2, mod1, mod2, d1, d2, sum;
    long n = number;
    s1 = 0;
    s2 = 0;
    sum = 0;

    do
    {
        mod1 = n % 10;
        n = n / 10;
        s1 = s1 + mod1;

        mod2 = n % 10;
        n = n / 10;

        mod2 = 2 * mod2;
        d1 = mod2 % 10;
        d2 = mod2 / 10;

        s2 = s2 + d1 + d1;
    }
    while (n > 0);

    sum = s1 + s2;

    // Luhn's Algorithm check
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

    // Checking the first two digits

    long firstTwo = number;
    do
    {
        firstTwo = firstTwo / 10;
    }
    while (firstTwo > 100);

    if (firstTwo == 34 || firstTwo == 37)
    {
        printf("AMEX\n");
    }
    else if (firstTwo >= 51 && firstTwo <= 55)
    {
        printf("MASTERCARD\n");
    }
    else if (firstTwo / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID");
    }
}