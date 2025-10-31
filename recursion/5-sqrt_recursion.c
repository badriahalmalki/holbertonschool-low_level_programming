#include "main.h"

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
