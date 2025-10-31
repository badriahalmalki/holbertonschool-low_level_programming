#include "main.h"
/**
 * check_prime - helper function to check if n is divisible by x
 * @n: the number to check
 * @x: the current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
{
if (x * x > n)
return (1);
if (n % x == 0)
return (0);
return (check_prime(n, x + 1));
}

/**
* is_prime_number - checks if an integer is a prime number
* @n: the number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}
