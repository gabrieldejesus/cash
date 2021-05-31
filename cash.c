#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{

    // Get the value of the user and validating
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0);


    // Multiply value in cents for 100
    int cents = round(dollars * 100);


    // Cents
    int twentyfive = 25;
    int ten = 10;
    int five = 5;
    int two = 2;
    int one = 1;

    // Total times I use the coins
    int total = 0;

    // If it is greater than or equal to Twenty-five
    if (cents >= twentyfive)
    {
        do
        {
            cents = cents - twentyfive;

            // Added times the coin was used
            total++;
        }
        while (cents >= twentyfive);
    }

    // If it is greater than or equal to ten
    if (cents >= ten)
    {
        do
        {
            cents = cents - ten;
            total++;
        }
        while (cents >= ten);
    }


    // If it is greater than or equal to five
    if (cents >= five)
    {
        do
        {
            cents = cents - five;
            total++;
        }
        while (cents >= five);
    }


    // If it is greater than or equal to two
    if (cents >= two)
    {
        do
        {
            cents = cents - two;
            total++;
        }
        while (cents >= two);
    }

    // If it is greater than or equal to one

    if (cents >= one)
    {
        do
        {
            cents = cents - one;
            total++;
        }
        while (cents >= one);
    }


    // print the total of coins was used
    printf("%i\n", total);

}
