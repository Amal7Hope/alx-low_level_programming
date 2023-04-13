#include <stdlib.h>
#include "main.h"
/**
 * array_range - create ana array
 * @min: min v
 * @max: max val
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int range, x;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (x = 0; x < range; x++)
	{
		*(p + x) = min + x;
	}
	return (p);
}
