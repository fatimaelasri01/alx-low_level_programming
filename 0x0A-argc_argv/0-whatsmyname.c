#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: The number of command-line arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
