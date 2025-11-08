#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value (inclusive)
 * @max: maximum value (inclusive)
 *
 * Return: pointer to the newly created array,
 *         or NULL if min >= max or on failure
 */

int *array_range(int min, int max)
{
	int *num_array;      /* pointer to the new array in memory */

	int count = 0;       /* count: index while filling the array */

	int total_numbers;  /* total numbers between min and max */

	if (min >= max)
		return (NULL);

	total_numbers = max - min + 1;

	num_array = malloc(sizeof(int) * total_numbers);
	if (num_array == NULL)
		return (NULL);

	for (count = 0; count < total_numbers; count++)
		num_array[count] = min + count; /* start at min and increase */

	return (num_array);
}
