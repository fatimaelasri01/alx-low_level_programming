#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number to index.
 * @index: the index of tho bit you want to set, starting from 0.
 *
 * Return: 1 ifit worked, -1 on error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index >= (sizeof(n) * 8))
		return (-1);

	x = 1 << index;
	if (*n & x)
		*n ^= x;
	return (1);
}
