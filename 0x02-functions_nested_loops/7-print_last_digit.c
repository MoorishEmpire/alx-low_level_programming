#include "main.h"
#include <limits.h> // Include <limits.h> to use INT_MIN

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to find the last digit of
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n == 0)
    {
        _putchar('0');
        return (0);
    }
    else if (n == INT_MIN) // Check if n is equal to INT_MIN directly
    {
        _putchar('0' + 8); // The last digit of INT_MIN is 8 (in absolute value)
        return (8);
    }

    if (n < 0)
    {
        n = -n; // Make n positive
    }

    last_digit = n % 10;
    _putchar('0' + last_digit);
    return (last_digit);
}
