#include <stdlib.h>
/**
 * malloc_checked - allocatrd momery using malloc
 * @b: size of memory
 * Return: poinet
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
