#ifndef MAIN_H
#define MAIN_H

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_prime_helper(int n, int divisor);
int is_palindrome(char *s);
int is_palindrome_helper(char *s, char *p1, char *p2);
int wildcmp(char *s1, char *s2);

#endif /* MAIN_H */
