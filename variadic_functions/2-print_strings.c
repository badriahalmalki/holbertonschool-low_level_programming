#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: string printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args; /* Declare a va_list variable */

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		/* If string is NULL, print (nil) */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* Print separator except after last string */
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args); /* Clean up the va_list variable */
}
