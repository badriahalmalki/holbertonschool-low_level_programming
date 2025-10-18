#include <stdio.h>

/**
 * main - Prints all single-digit numbers separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');          /* print the digit */
if (i != 9)
{
putchar(',');          /* print comma */
putchar(' ');          /* print space */
}
}
putchar('\n');                 /* print newline */

return (0);
}
