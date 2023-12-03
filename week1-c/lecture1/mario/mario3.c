#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Getting the size of the grid
    int n;
    do
    {
        n = get_int("Size: \n");
    }
    while (n < 1);

    //printing the grid
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
            printf("# ");
        printf("\n");
    }
}