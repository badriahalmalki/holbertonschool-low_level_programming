#include "main.h"
/**
* _memcpy - copies memory area
* @n: the byet the we want to copy
* @srs: the memory area
* @dest: whare we want the copy to go 
* return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
