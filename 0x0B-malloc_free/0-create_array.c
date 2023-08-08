#include <stddef.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *array;

    if (size == 0)
        return NULL;

    array = (char *)malloc(sizeof(char) * size);
    if (array == NULL)
        return NULL;

    unsigned int i;  // Declare loop variable here
    for (i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}
