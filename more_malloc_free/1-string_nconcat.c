#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings up to a limit
* @string1: first string
* @string2: second string
* @limit: number of bytes from string2 to concatenate
*
* Return: pointer to the newly allocated space in memory
*/

char *string_nconcat(char *string1, char *string2, unsigned int limit)
{
	char *new_text;

	unsigned int string1_index = 0, string2_index = 0;

	unsigned int length1 = 0, length2 = 0;

	if (string1 == NULL)
		string1 = "";
	if (string2 == NULL)
		string2 = "";
	while (string1[length1] != '\0')
		length1++;
	while (string2[length2] != '\0')
		length2++;
	if (limit >= length2)
		limit = length2;
	new_text = malloc(length1 + limit + 1);
	if (new_text == NULL)
		return (NULL);
	for (string1_index = 0; string1_index < length1; string1_index++)
		new_text[string1_index] = string1[string1_index];
	for (string2_index = 0; string2_index < limit; string2_index++)
		new_text[length1 + string2_index] = string2[string2_index];
	new_text[length1 + limit] = '\0';
	return (new_text);
}



