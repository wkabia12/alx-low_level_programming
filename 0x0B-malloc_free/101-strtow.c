#include "main.h"

/**
 * strtow - return pointer to array of words
 * @str: array of arguments
 * Return: pointer to array of words
 */
char **strtow(char *str)
{
	char **temp, *ptr;
	int i = 0, j = 0, tokn = 0;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			tokn++;
	}
	temp = (char **) malloc((tokn + 1) * sizeof(char *));
	if (temp == NULL)
		return (NULL);

	ptr = strtok(str, " ");

	while (ptr != NULL)
	{
		temp[i] = (char *) malloc((strlen(ptr) + 1) * sizeof(char));
		if (temp[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(temp[j]);
			free(temp);
			return (NULL);
		}
		strcpy(temp[i], ptr);
		ptr = strtok(NULL, " ");
		i++;
	}
	temp[tokn] = NULL;
	return (temp);
}
