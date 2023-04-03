#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the longer s to searsh
 * @needle: the 1 occurrence o the substring
 * Return: a pointer beg of sub
 * @NULL if it not found
 */
char  *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);

}
