#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += j;
	}

	j = i - j;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	i = i >= size ? size - 1 : i;
	while (j <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
