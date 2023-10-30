#include "main.h"

/**
 * _strlen - a function that calculate the lenght
 * toule dyal chi string
 * @s: th string
 *
 *Return: toule dyal hadak string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	return (x);

}

/**
 * create_file - a function that creates a file
 * @filename: th name of the file
 * @text_content: text
 * Return: in case of success return 1 or -1 in failer
 */

int create_file(const char *filename, char *text_content)
{
	int f, bytes;

	if (!filename)
		return (-1);
	f = open(filename, O_TRUNC | O_WRONLY);
	if (f == -1)
	{
		f = open(filename, O_CREAT | O_RDONLY | O_WRONLY, 0600);
		if (f == -1)
			return (-1);
		bytes = write(f, text_content, _strlen(text_content));
		if (bytes == -1)
			return (-1);
		close(f);
		return (1);
	}
	bytes = write(f, text_content, _strlen(text_content));
	if (bytes == -1)
		return (-1);
	close(f);
	return (1);
}
