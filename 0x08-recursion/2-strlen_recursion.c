#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer the string.
 *
 * Return: The length of a string.
 */

int _strlen_recursion(char *s)
{
	int lg = 0;

	if (*s)
	{
		lg++;
		lg += _strlen_recursion(s + 1);
	}

	return (lg);
}
