#include <cs50.h>
#include <stdio.h>

int lenght (long long n);
bool checksum (long long ccn);
bool check_validity (long long ccn);
void credit_card_brand (long long ccn);

int main(void)
{
    long long credit_card_number;
    do
    {
        credit_card_number = get_long_long ("Number of the credit card: ");
    }
    while (credit_card_number < 0);

    if(check_validity (credit_card_number) == true)
        credit_card_brand(credit_card_number);
    else
    printf("INVALID\n");
}

int lenght (long long n)
{
    int len;
    for(len=0; n != 0; n /= 10)
        len++;
    return len;
}

bool checksum (long long ccn)
{
    int sum = 0;

    for(int i = 0; ccn != 0; i++, ccn /= 10)
    {
        if (i % 2 == 0)
            sum += ccn % 10;
        else
        {
            int j = 2 * (ccn % 10);
            sum += (j/10) + (j%10);
        }
    }
    return (sum % 10) == 0;
}

bool check_validity (long long ccn)
{
    int len = lenght(ccn);
    return(checksum(ccn)  && (len == 13 || len == 15 || len == 16));
}

void credit_card_brand (long long ccn)
{
    if((ccn > 34e13 && ccn < 35e13) || (ccn > 37e13 && ccn < 38e13))
        printf("AMEX\n");
    else if (ccn > 51e14 && ccn < 56e14)
        printf("MASTERCARD\n");
    else if((ccn > 4e12 && ccn < 5e12) || (ccn > 4e15 && ccn < 5e15))
        printf("VISA\n");
    else
        printf("INVALID\n");
}