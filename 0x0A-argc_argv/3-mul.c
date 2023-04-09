#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: this is the argument count
 * @argv: this is the argument bector
 *
 * Return: 0
 */
int atoi();
int main(int argc, char *argv[])
{
	int index, multi;

	multi = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multi = multi * atoi(argv[index]);
	}
	printf("%d\n", multi);
	return (0);
}
