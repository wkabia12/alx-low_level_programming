#include "main.h"

/**
 * main - multiply 2 numbers
 * @ac: argument count
 * @argv: CL arguments
 * Return: pointer to newly created array
 */
int main(int ac, char **argv)
{
	char err[] = "Error\n";
	int i, temp;
	long unsigned int j;
	char *ptr;

	if (ac > 3 || ac < 3)
	{
		i = 0;
		while (err[i] != '\0')
		{
			_putchar(err[i]);
			i++;
		}
		exit(98);
	}
	if (!atoi(argv[1]) || !atoi(argv[2]))
	{
		i = 0;
		while (err[i] != '\0')
		{
			_putchar(err[i]);
			i++;
		}
		exit(98);
	}
	temp = (atoi(argv[1]) * atoi(argv[2]));
	ptr = malloc((sizeof(temp) / sizeof(int)) + 1);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	sprintf(ptr, "%d", temp);
	for (j = 0; j < strlen(ptr); j++)
	{
		_putchar(ptr[j]);
	}
	_putchar('\n');
	return (0);
}
