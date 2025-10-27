#include "main.h"
#include <stddef.h>
/**
* _strspn - gets the length of a prefix substring
* @s: the string we want to analyze
* @accept: the string containing the characters we want to check against
* Returns: the number of bytes in the initial segment of @s that consist
* only of characters from @accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
}
return (count);
}
