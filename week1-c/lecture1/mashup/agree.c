#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char x = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y')
        printf("Agreed/\n");
    else if (c == 'n' || c =='N')
        printf("Not agreed.\n");
}
