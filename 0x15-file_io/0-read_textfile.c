#include "main.h"

/**
 * read_textfile - a function that reads and prints a a text ;
 * read it first and stock it and prints it
 * @filename: the file name
 *
 * @letters: number of letters
 * Return: the text or number of leatters the it read
 * and exit in case of a error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes, f;
	char *buffer;

	if (filename == NULL)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	bytes = read(f, buffer, letters);
	if (bytes == -1)
		return (0);

	bytes = write(STDOUT_FILENO, buffer, bytes);
	if (bytes == -1)
		return (0);

	close(f);

	return (bytes);
}
