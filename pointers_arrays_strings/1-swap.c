#include "main.h"

/**
 * swap_int - swaps the values 
 * @a: first int
 * @b: secand int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
