#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integer
 * using Binary search algorithm
 * @array: pointer to first element of array to search
 * @size: the number of elements in array
 * @value: value to seach for
 *
 * Return: index of the value location or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (!array)
		return (-1);
	while (left <= right)
	{
		size_t i;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
