#include "main.h"
#include <stdio.h>

/**
 * openFileFrom - hadak l file li han opnew mno
 * @filename: the file name
 *
 *
 * Return: f
 */
int openFileFrom(char *filename)
{
	int f;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (f);
}


/**
 * openFileTo - kay opens file to
 * @filename: the file name
 * Return: f
 */

int openFileTo(char *filename)
{
	int f;

	f = open(filename, O_WRONLY | O_TRUNC);
	if (f == -1)
	{
		f = open(filename, O_CREAT | O_WRONLY, 0664);
		if (f == -1)
		{
			dprintf(2, "Error: Can't write from file %s\n", filename);
				exit(99);
		}
	}
	return (f);
}

/**
 * main - our function that will do the process: cpfrom to another file)
 * @ac: counter
 * @av: vector
 * Return: in case of success return 1
 */

int main(int ac, char **av)
{
	int f, f2, bytes, bytes2;
	/* to , from */
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		exit(98);
	f = openFileTo(av[1]);
	f2 = openFileFrom(av[2]);

	bytes = read(f2, buffer, 1024);
	while (bytes2 != 0 && bytes != 0)
	{
		if (bytes == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[2]);
			exit(98);
		}
		bytes2 = write(f, buffer, bytes);
		bytes = read(f2, buffer, 1024);
		if (bytes == -1)
		{
			dprintf(2, "Error: Can't write from file %s\n", av[1]);
			exit(99);
		}
	}
	if (close(f) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	if (close(f2) == -1)
	{
		dprintf(2, "Error:Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}

