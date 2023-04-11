#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create a matrix using malloc
 * @width: w of matrix
 * @height: H of matrix
 * Return: return a pointer of pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int x, y, a, b;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));

		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (x = 0; x < height; x++)
		{
			p[x] = (int *) malloc(width * sizeof(int));
			if (!p[x])
			{
				for (y = 0; y <= x; y++)
					free(p[y]);
				free(p);
					return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
				p[a][b] = 0;
			}
		}
		return (p);
	}
}
