#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * wordnos - count
 * @s: pointer to the string
 * Return: No
 */
int wordnos(char *s)
{
	int flag, l, a;

	flag = 0;
	a = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			a++;
		}
	}
	return (a);
}
/**
 * **strtow - splits
 * @str: string
 * Return: pointer to arr of string or NULL
 *
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = wordnos(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
