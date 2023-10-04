#include "main.h"
#include <stdlib.h>
/**
 * create_array-Creates an array of chars and initial it with a specific char.
 * @size: The size of the array.
 * @c: The character to assign.
 *
 * Return: Pointer to the array,NULL if it fails or if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	i = 0;
	str = malloc(sizeof(char) * size);
	if ((size == 0) || (str == NULL))
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
