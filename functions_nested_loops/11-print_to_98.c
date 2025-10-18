#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				if (i < 0)
					_putchar('-');
				if (i / 10)
					_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (i < 0)
					_putchar('-');
				if (i / 10)
					_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar('\n');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				if (i < 0)
					_putchar('-');
				if (i / 10)
					_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (i < 0)
					_putchar('-');
				if (i / 10)
					_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
