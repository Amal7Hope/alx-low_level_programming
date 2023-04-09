#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that write a program that prints all arguments it receives
 * @argc: this is numbur of argument
 * @argv: this is array of argument
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


