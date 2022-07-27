#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /*This function asks the user what their name is and stores the value as a string variable
      The name is then returned in the printf statement with the %s placeholder (s stands for string,
      it can be changed based on the desired variable type)*/
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
