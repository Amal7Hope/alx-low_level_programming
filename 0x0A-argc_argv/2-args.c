#include <stdio.h>
/**
 * main - write a program that prints all arguments it receives
 * @argc: this is numbur of argument
 * @argv: this is array of argument
 * Return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[]);
	}
	return (0);
}


