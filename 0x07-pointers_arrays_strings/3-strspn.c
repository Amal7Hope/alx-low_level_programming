#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to spring input
 * @accept: substring prefix to look for
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int z, i, j;
	z = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				z++;
		}
		}
		else
			return (z);
	}

	return (z);
}



