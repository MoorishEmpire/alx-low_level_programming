#include <stdio.h>

void __attribute__((constructor)) before_main(void);

/**
 * before_main - Function to print a message before main is executed.
 *
 * Description: This function prints "You're beat! and yet, you must allow,\n
 * I bore my house upon my back!" before the main function is executed.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

