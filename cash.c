#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // Initialize a value for cents input value
    int cents_input;

    // Prompt the user to input a value
    do
    {
        printf("Change owed: ");
        scanf("%i", &cents_input);

    // Prompt the user again while the value is under 0
    }while(cents_input < 0);

    // If the cents_input value is correct, return the value
    return cents_input;
}

int calculate_quarters(int cents)
{
    // To find_quarters of cents, divide the value of cents_input by 25
    int find_quarters = cents / 25;

    // Then return the value of quarters
    return find_quarters;
}

int calculate_dimes(int cents)
{
    // To find_dimes of cents, divide the value of cents_input by 10
    int find_dimes = cents / 10;

    // Then return the value of dimes
    return find_dimes;
}

int calculate_nickels(int cents)
{
    // To find_nickels, divide the value of cents_input by 5
    int find_nickels = cents / 5;

    // Then return the value of nickels
    return find_nickels;
}

int calculate_pennies(int cents)
{
    // To find_pennies, divide the value of cents_input by 1
    int find_pennies = cents / 1;

    // Then return the value of pennies
    return find_pennies;
}
