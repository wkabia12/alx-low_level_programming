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
	int dino[] = {25, 10, 5, 2, 1};
	int i, temp, count = 0;

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
			printf("%d\n", 0);
		else
		{
			temp = atoi(argv[1]);
			for (i = 0; i < 5; i++)
			{
				count += temp / dino[i];
				temp %= dino[i];
			}
			printf("%d\n", count);
		}
	}
	return (0);
}
