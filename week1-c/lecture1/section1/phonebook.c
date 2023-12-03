#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string name = get_string("Your name: ");
    int age = get_int("Your age: ");
    string phone_number = get_string("You phone number: ");

    printf("Name: %s, age: %i, phone number: %s.\n", name, age, phone_number);
}