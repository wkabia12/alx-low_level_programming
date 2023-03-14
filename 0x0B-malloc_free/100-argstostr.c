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

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	temp = (char *) malloc((len + ac + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	*temp = '\0';
	for (i = 0; i < ac; i++)
	{
		if (strcat(temp, av[i]) == NULL)
		{
			free(temp);
			return (NULL);
		}
		if (strcat(temp, "\n") == NULL)
		{
			free(temp);
			return (NULL);
		}
	}
	return (temp);
}
