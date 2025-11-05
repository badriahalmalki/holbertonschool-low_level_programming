#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string
* @str: string to duplicate
* Return: pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int i;

	int len;

	char *dup;
{
if (str == NULL)
return (NULL);
}
for (len = 0; str[len] != '\0'; len++)

dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}

