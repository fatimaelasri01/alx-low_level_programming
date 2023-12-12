#include "main.h"

/**
 * add - print the sum of two num
 * @a: the first num
 * @b: the second num
 *
 * Return: the sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - print sub of two num
 * @a: the first num
 * @b: the second num
 *
 * Return: the sub
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - print the multp  of two num
 * @a: the first num
 * @b: the second num
 *
 * Return: the multp
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - print the div of two num
 * @a: the first num
 * @b: the second num
 *
 * Return: the div
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return (0);
	}
	return (a / b);
}

/**
 * mod - print mod of two num
 * @a: the first num
 * @b: the second num
 *
 * Return: the mod
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return (0);
	}
	return (a % b);
}
