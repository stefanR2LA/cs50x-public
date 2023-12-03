#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool check_character(string key);

int main(int argc, string argv[])
{
    //usage of substitution and key
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if(!check_character(argv[1]))
    {
        printf("Key must contain 26 unique characters.\n");
        return 1;
    }

    string plaintext = get_string("Plaintext: ");
    printf("ciphertext: ");
    int len = strlen(plaintext);

    for(int i = 0; i < len; i++)
    {
        if (isupper(plaintext[i]))
        {
            int letter = plaintext[i] - 65;
            printf("%c",toupper(argv[1][letter]));
        }
        else if (islower(plaintext[i]))
        {
            int letter = plaintext[i] - 97;
            printf("%c",tolower(argv[1][letter]));
        }
        else
            printf("%c", plaintext[i]);
    }
    printf("\n");

}

bool check_character(string key)
{
    //getting lenght of the key
    int len = strlen(key);
    if(len != 26)
        return false;
    //converting key to uppercase characters.
    for(int i = 0; i < len; i++)
        key[i] = toupper(key[i]);
    //checking if we have duplicates in the key
    for(int i =0; i < len; i++){
        if(!isalpha(key[i]))
            return false;
        for(int j = i + 1;j <len; j++){
            if(key[i] == key[j])
                return false;
        }
    }
    return true;
}