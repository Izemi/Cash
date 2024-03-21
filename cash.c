#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int owed);
int calculate_dimes(int owed);
int calculate_fives(int owed);
int main(void)
{
    // Ask the user how much you owe them
    int owed;
    do
    {
        owed = get_int("Change owed: ");
    }
    while (owed < 0);
    // Use the functions to define coins
    int quarters = calculate_quarters(owed);
    owed = owed - 25 * quarters;
    int dimes = calculate_dimes(owed);
    owed = owed - 10 * dimes;
    int fives = calculate_fives(owed);
    int ones = owed - 5 * fives;
    int coins = quarters + dimes + fives + ones;

    // Find out how many coins to give the customer
    printf("%i\n", coins);
}
// Calculate the number of quarters
int calculate_quarters(int owed)
{
    int quarters = owed / 25;
    return quarters;
}
// Calculate the number of dimes
int calculate_dimes(int owed)
{
    int dimes = owed / 10;
    return dimes;
}
// Calculate the number of nickles (fives)
int calculate_fives(int owed)
{
    int fives = owed / 5;
    return fives;
}
