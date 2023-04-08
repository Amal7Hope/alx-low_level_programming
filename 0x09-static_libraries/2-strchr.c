#include "main.h"
#define NULL 0
/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 * @s: string to search
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
