#include "3-calc.h"
/**
 *main - starting point of prog
 *@argc: number of arguments
 *@argv: array of a string of arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*operation)(int, int);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	printf("%d\n", operation(a, b));

	return (0);
}
