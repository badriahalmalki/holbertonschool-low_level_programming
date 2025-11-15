#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - runs a function on each element of an array
 * @array: the array of integers
 * @size: how many elements are in the array
 * @action: the function to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return; /* Check for NULL pointers */

	for (i = 0; i < size; i++)
	{
		action(array[i]); /* Call the function on each element */
	}
}
