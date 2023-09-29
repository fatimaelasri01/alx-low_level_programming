#include "main.h"
/**
 * _calcul_prime - calculates if a number is prime recursively
 * @n: The number  to check for primality.
 * @i: iterator
 *
 * Return: 1 if n is a prime number, otherwise return 0.
 */

int _calcul_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_calcul_prime(n, i - 1));
}

/**
 * is_prime_number - check if an  integer is a prime number.
 * @n: The number  to check for primality.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_calcul_prime(n, n - 1));
}
