#include <stdio.h>
#include <stdlib.h>
/**
 * main - mprogram that multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
