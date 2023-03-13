#include "main.h"

/**
 * strtow - return pointer to array of words
 * @str: array of arguments
 * Return: pointer to array of words
 */
char **strtow(char *str)
{
	char **temp, *ptr;
	int i = 0;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	temp = (char **) malloc(sizeof(char *));
	if (temp == NULL)
		return (NULL);

	ptr = strtok(str, " ");

	while (ptr != NULL)
	{
		temp[i] = (char *) malloc(strlen(ptr) * sizeof(char));
		if (temp[i] == NULL)
		{
			free(temp);
			return (NULL);
		}
		temp[i] = ptr;
		ptr = strtok(NULL, " ");
		i++;
	}
	return (temp);
}
