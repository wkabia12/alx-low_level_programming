#include "main.h"

/**
 * main - prints it's own name
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc < 1)
		printf("%d\n", 0);
	else
	printf("%d\n", (argc - 1));
	return (0);
}
