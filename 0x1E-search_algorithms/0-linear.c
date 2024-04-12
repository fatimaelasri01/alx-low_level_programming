#include "search_algos.h"

/**
 * linear_search - searchs for a value in an array of integers
 * the Linear search algorithm
 * @array: an array of integers
 * @size: size of the array
 * @value: the value to be searched
 *
 * Return: the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
