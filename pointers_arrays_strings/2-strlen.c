#include "main.h"
/**
* _strlen - length of a string
* @s: pointer to the string
* Return: the length of a string
*/
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
