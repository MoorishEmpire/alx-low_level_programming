#include <stdio.h>

/**
  * main - Generates the password for the crakeme file.
  * @target: The sum of the ascii of the password target.
  * @sum: The sum of the ascii password generated.
  * @i: The index for the array of the stirng generated.
  * @result: The array of string generated.
  *
  * Return: (0 on Success).
  */

int main() {
    int target = 2772;
    int sum = 0;
    int i = 0;
    char result[100];

    while (sum < target) {
        int next_char = target - sum > 126 ? 126 : target - sum;
        
        result[i++] = next_char;
        sum += next_char;
    }
    
    result[i] = '\0';
    
    printf("%s", result);
    
    return (0);
}

