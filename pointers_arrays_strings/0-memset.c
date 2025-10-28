#include "main.h"
/**
 * _memset - fills memory with a constant byte
* @n: how many bytes to fill
* @s: pointer
* @b: the actual bite that we will use
*
* Return: pointer to the filled memory area.
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
