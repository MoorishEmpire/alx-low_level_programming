#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Generates the password for the crakeme file.
  * @n: The sum of the ascii of the password target.
  * @sum: The sum of the ascii password generated.
  * @i: The index for the array of the stirng generated.
  * @pass: The array of string generated.
  *
  * Return: (0 on Success).
  */

int main(void) {
    int pass[100];
    int i, sum, n;

    sum = 0;    
    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        pass[i] = rand() % 78;
        sum += (pass[i] + '0');
        putchar(pass[i] + '0');
        if ((2772 - sum) - '0' < 78) {
            n = 2772 - sum - '0';
            sum += n;
            putchar(n + '0');
            break;
        }
    }

    return (0);
}
