#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: tha character
 * Return: NULL or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	/* chack malloc */
	if (arr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		arr[x] = c;
	}
	return (arr);
}
