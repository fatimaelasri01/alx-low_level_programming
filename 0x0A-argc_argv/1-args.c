#include <stdio.h>

/**
 * main - program that prints the number of arguments passed to the program
 * @argc: The number of command-line arguments
 * @argv: Array of the arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}

