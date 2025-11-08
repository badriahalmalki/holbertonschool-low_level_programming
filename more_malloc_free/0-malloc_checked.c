#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - Allocates memory using malloc
* @size: The size of memory to allocate
* Return: A pointer to the allocated memory
*         If malloc fails, the function terminates with status 98
*/
void *malloc_checked(unsigned int size)
{
	void *memory;

	memory = malloc(size);
	if (memory == NULL)
		exit(98);

	return (memory);
}
