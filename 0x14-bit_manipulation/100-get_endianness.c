#include "main.h"

/**
 * get_endianness - return endia of the system
 * Return: 0 , or 1 (0 if it big ,1 if small)
 *
 */

int get_endianness(void)
{
	unsigned long int a = 1;

	return (*(char *)&a);
}
