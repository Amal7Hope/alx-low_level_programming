#include "main.h"

/**
 * _memset - fill the first @n bythes of the memory area pointed
 * to by @s with the constant byte @b
 * @n: bythes of the memory area pointed to by @s
 * @s: with constent byte @b
 * @b: memory area poiter
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
