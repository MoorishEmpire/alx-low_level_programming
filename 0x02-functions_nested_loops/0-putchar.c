#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    char text[] = "_putchar\n";

    for (i = 0; text[i] != '\0'; i++)
        write(1, &text[i], 1);

    return (0);
}
