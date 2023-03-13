#include "main.h"
/**
 * alloc_grid - pointer to 2d array
 * @width: int
 * @height: int
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **out, i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	out = malloc(sizeof(int *) * (height));
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		out[i] = malloc(width * sizeof(int));
		if (out[i] == NULL)
		{
			for (; i >= 0; i--)
				free(out[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			out[i][j] = 0;
	return (out);
}
