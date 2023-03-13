#include "main.h"

/**
 * argstostr - concats argument strings in new memory allocated
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to concat argument string
 */
char *argstostr(int ac, char **av)
{
	char *temp;
	int i = 0, len = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	temp = (char *) malloc((len + ac) * sizeof(char *));
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(temp, av[i]);
		strcat(temp, "\n");
	}
	return (temp);
}
