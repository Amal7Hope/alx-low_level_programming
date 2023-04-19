#include <stdio.h>
/**
 * array_iterator - a function that executes  a function thet given as paeam
 * @array: array of elm
 * @size: size of array
 * @action: function p
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && size > 0 && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
