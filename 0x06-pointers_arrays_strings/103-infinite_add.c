#include "main.h"
#include <stdlib.h>
/**
 * infinite_add - prints numbers
 * @n1: number to be added
 * @n2: number to be added
 * @r: buffer to store result
 * @size_r: size of buffer
 * @Return: number to be printed
 */
char infinite_add(char*n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1) - 1, len2 = strlen(n2) - 1;
	int i, j, rem = 0;

	if ( sizeof(n1) > size_r || sizeof(n2) > size_r)
		return (0);
	while (len1 != 0 && len2 !=0)
	{
		i = int n1[len1];
		j = int n2[len2];

		if ((i + j + rem) > 9)
		{
			rem = (i + j + rem) / 10;
			r[size_r - 1] = char ((i + j + rem) % 10);
			size_r--
		}
		else
		{
			r[size_r - 1] = char ( i + j + rem);
			size_r--
		} 
	}	 
}
