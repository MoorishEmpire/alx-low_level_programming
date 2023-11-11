#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 *
 * Description: This function takes a name and a function pointer as
 * arguments. It then calls the provided function, passing the name to it.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
