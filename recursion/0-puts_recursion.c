#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - write a function that prints a string
 * @s:
 * Retern: string
 */
void _puts_recursion(char *s)

{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else
{
printf('\n');
}
}
