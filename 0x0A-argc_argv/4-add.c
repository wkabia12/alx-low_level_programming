#include "main.h"
#include <stdlib.h>

/**
 * main - prints it's own name
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (0);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
