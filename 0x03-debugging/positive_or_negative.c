#include "main.h"
/**
 *  positive or negative - checks for positive or negative numbers
 *
 * @i: the number to be cheched
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
