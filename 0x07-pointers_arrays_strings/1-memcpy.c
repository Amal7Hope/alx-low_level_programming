#include "main.h"

/**
 * _memcpy - function copies @n buthes from the memory area @src
 * to memory area @dest
 * @n: bythe copies
 *
 * @src: source area of the buthes
 * @dest: destination
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

