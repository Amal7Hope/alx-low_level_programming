#include "main.h"

/**
 * clear_bit - clears bit at index
 * @n: t number
 * @index: bit to clear
 * Return: 1 or -1 (in error)
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
