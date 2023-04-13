#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory of an arr
 * @nmemb: number of element
 * @size: size of elem
 * Return: NULL or nmemb = 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int f;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}

	for (f = 0; f < (nmemb * size); f++)
	{
		*((char *)(a) + f) = 0;
	}
	return (a);
}
