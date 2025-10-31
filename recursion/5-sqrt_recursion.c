#include "main.h"

/**
* find_root - helper function to find square root
* @n: the number to find the square root of
* @x: the current guess
*
* Return: the natural square root, or -1 if not found
*/
int find_root(int n, int x)
{
if (x * x == n)
return (x);
if (x * x > n)
return (-1);
return (find_root(n, x + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to find the square root of
*
* Return: the natural square root, or -1 if not a perfect square
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_root(n, 0));
}
