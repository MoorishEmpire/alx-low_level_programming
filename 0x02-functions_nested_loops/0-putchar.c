#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char text[] = "_putchar";

    for (i = 0; i < sizeof(text) - 1; i++)
        _putchar(text[i]);
    
    _putchar('\n');

    return 0;
}
