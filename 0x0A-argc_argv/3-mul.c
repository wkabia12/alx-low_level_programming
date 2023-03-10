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
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
