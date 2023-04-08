#include "main.h"
#define NULL 0
/**
 * _strpbrk - function that srearche a string of a set
 * @s: f occurence in the string
 * @accept: matches on of the bythes o
 * @NULL if no such byte
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
		while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
				if (*s == accept[x])
					return (s);
			}
			s++;
		}
	return (NULL);
}
