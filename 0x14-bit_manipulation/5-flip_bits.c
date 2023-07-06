#include "main.h"

/**
 * flip_bits - give number of bits
 * @n: f number
 * @m: 2eme num
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorv = n ^ m;
	unsigned int count = 0;

	while (xorv)
	{
		if (xorv & 1ul)
			count++;
		xorv = xorv >> 1;
	}
	return (count);
}
