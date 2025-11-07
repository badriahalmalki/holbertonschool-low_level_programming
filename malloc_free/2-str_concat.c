#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings
* @string1: first string
* @string2: second string
*
* Return: pointer to the concatenated string, or NULL on failure
*/

char *str_concat(char *string1, char *string2)
{
	char *concat_str;

	unsigned int len1 = 0, len2 = 0, i, j;

	if (string1 == NULL)
		string1 = "";
	if (string2 == NULL)
		string2 = "";

	while (string1[len1] != '\0')
		len1++;
	while (string2[len2] != '\0')
		len2++;

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = string1[i];
	for (j = 0; j < len2; j++)
		concat_str[i + j] = string2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}
