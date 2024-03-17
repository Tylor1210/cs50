#include <cs50.h>
#include <stdio.h>

int main() {
    float change_owed;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    printf("Enter the amount of change owed: ");
    scanf("%f", &change_owed);

    // Convert dollars to cents
    int cents = (change_owed);

    // Calculate the number of quarters
    quarters = cents / 25;
    cents %= 25;

    // Calculate the number of dimes
    dimes = cents / 10;
    cents %= 10;

    // Calculate the number of nickels
    nickels = cents / 5;
    cents %= 5;

    // Pennies remaining
    pennies = cents;

    // Output the results
    int total_coins = quarters + dimes + nickels + pennies;
    printf("Total coins used: %d\n", total_coins);

    return 0;
}
