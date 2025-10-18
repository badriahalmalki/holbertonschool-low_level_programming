#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum;

	sum = add(98, 1024);
	printf("%d\n", sum);
	sum = add(-50, 50);
	printf("%d\n", sum);
	sum = add(0, 0);
	printf("%d\n", sum);

	return (0);
}
