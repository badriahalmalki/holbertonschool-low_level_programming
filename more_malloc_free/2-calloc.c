#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array and sets it to zero
* @array_no: number of elements to allocate
* @array_size: size (in bytes) of each element
*
* Return: pointer to the allocated memory,
*         or NULL if malloc fails or input is invalid
*/
void *_calloc(unsigned int array_no, unsigned int array_size)
{
	char *memory_block; /* pointer to the allocated memory */

	unsigned int idx = 0; /* idx: index used to set each byte to zero */

	unsigned int total_size; /* total_size: total bytes to allocate */

	/* If either number or size is zero, allocation makes no sense */
	if (array_no == 0 || array_size == 0)
		return (NULL);

	/* Calculate the memory needed */
	total_size = array_no * array_size;

	/* Allocate memory */
	memory_block = malloc(array_size);
	if (memory_block == NULL)
		return (NULL);

	/* Fill memory with zeros */
	for (idx = 0; idx < total_size; idx++)
		memory_block[idx] = 0;

	return (memory_block);
}
