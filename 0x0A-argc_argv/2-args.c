#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: The number of command-line arguments.
 * @argv: Array that contains the program command-line arguments.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

