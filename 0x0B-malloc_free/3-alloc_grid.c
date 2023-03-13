#include "main.h"

/**
 * alloc_grid - allocates grid h*w initiallized to 0
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **ptr, *grid;
	int i;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc(height * width * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < (height * width); i++)
	{
		grid[i] = 0;
	}
	ptr = &grid;
	return (ptr);
}
