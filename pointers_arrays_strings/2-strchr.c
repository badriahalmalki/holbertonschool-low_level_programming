#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string
 * @c: the character to locate
 * @s: the string
 * retern: a pointer or null
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return *s;
}
S++;
}
return NULL;
}
