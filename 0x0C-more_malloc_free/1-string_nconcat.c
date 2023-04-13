#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: s
 * Return: s length
 */
int _strlen(char *string)
{
	int x;

	for (x = 0; string[x] != '\0'; x++)
		;
	return (x);
}
/**
 * string_nconcat - concat s1 & n bytes of s2
 * @s1: string1
 * @s2: s2
 * @n: n bytes
 * Return: pointer to concat s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len, x, y,


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < 0)
		return (NULL);
	if (n >= _strlen(s2))
		n = _strlen(s2);

	len = _strlen(s1) + n + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		ptr[x] =  s1[x];
	for (y = 0; y < n; y++)
		ptr[x + y] = s2[y];
	ptr[x + y] = '\0';

	return (ptr);
}
