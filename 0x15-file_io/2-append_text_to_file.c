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
 * append_text_to_file - mn text ila aa file
 * @filename: file name
 * @text_content: content of a file
 * Return: if works return 1 , in fails -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, bytes;

	if (!filename)
		return (-1);

	f = open(filename, O_APPEND | O_WRONLY);
	if (f == -1)
		return (-1);

	bytes = write(f, text_content, _strlen(text_content));
	if (bytes == -1)
		return  (-1);
	close(f);
	return (1);
}
















