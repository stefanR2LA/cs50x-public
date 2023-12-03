#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //prompt user for the text
    string text = get_string("Text: ");

    //number of letters in the text
    int letters = 0;
    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            letters++;
    }

    // number of words in text
    int words = 1;
    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if(text[i] == ' ')
            words++;
    }

    //number of sentences in text
    int sentences = 0;
    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
            sentences++;
    }

    //Coleman-Lian index
    float calculation = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100) - 15.8;
    int index = round(calculation);

    if(index < 1)
        printf("Before Grade 1\n");
    else if(index >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %i\n", index);
}