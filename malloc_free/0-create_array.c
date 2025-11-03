#include"main.h"
/**
 **create_array - creates an array of chars, and initializes it with a specific char.
 * @c: the char
 * size: the size we want to fill
 * array: the array we want to creat
 *Return: 0 or pointer to the array
 */
char *create_array(unsigned int size, char c);
int i, c;
{
	{
    if (size == 0)
        return NULL;
    }

    char *array = malloc(size * sizeof(char));
}
{
    if (array == NULL)
        return NULL;
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}
}
