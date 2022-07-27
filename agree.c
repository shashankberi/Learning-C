#include <stdio.h>
#include <cs50.h>

int main(void)
{
   //Prompt user to agree to something
   char c = get_char("Do you agree? ");

   //Check wheter the user agreed
   if (c == 'y' || c == 'Y')
   {
    printf("Agreed.\n");
   }
   else if (c == 'n' || c == 'N')
   {
    printf("Not Agreed.\n");
   }
}
