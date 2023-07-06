#include "main.h"

/**
 * get_bit - give me bits at the index
 * @n: number of index
 * @index: bit to it will give me
 * Return: bit or -1
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
