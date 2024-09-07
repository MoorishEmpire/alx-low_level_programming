#include <stdio.h>

int main() {
    int target = 2772;    // Target sum
    int sum = 0;          // To keep track of the current sum
    int i = 0;            // Index for the result array
    char result[100];     // Array to store the resulting string
    
    // Keep adding characters until the sum equals the target
    while (sum < target) {
        int next_char = target - sum > 126 ? 126 : target - sum;  // Choose the next character
        
        result[i++] = next_char;   // Add the character to the result array
        sum += next_char;          // Update the current sum
    }
    
    result[i] = '\0';   // Null-terminate the result string
    
    printf("%s", result);
    
    return 0;
}

