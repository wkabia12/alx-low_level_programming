#include "main.h"

/**
 * alloc_grid - allocates grid h*w initiallized to 0
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
