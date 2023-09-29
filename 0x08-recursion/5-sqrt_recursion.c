#include "main.h"
/**
 * _sqrt_recursive - function to find the natural square root.
 * @n: The number to find the square root of.
 * @i: iterator
 *
 * Return: The square root if found, -1 otherwise.
 */

int _sqrt_recursive(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_recursive(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root if found, -1 otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursive(n, 0));
}
