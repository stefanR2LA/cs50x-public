#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //Prompt user for correct usage
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //key must be an intiger
    int len = strlen(argv[1]);
    for(int i=0; i < len;i++)
    {
        if(!isdigit (argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    //converting key from string to int
    int key = atoi(argv[1]);

    string text = get_string("plaintext:  ");
    printf("ciphertext:  ");
    int text_len = strlen(text);

    for(int i = 0; i < text_len; i++)
    {
        if(isupper(text[i]))
            printf("%c",((text[i] + key - 65) % 26) + 65);
        else if(islower(text[i]))
            printf("%c",((text[i] + key - 97) % 26) + 97);
        else
            printf("%c", text[i]);
    }
    printf("\n");
}