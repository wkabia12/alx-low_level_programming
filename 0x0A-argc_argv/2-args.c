#include "main.h"

/**
 * main - prints it's own name
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for  (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
