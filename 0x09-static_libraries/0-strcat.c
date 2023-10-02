#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: The  destnation string.
 * @src: The source string to append to dest.
 *
 * Return: Pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}


	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}


	*ptr = '\0';

	return (dest);

}


