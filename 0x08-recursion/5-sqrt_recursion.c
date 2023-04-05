#include "main.h"
/**
 * _sqrt_recursion - sqrt with recursion
 * @n: number to be squart
 * Return: square root of @n
 */
int _sqrt_recursion(int n)
{

	return (_sqrt(n, 1));
}

/**
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	int square == i * i;
	if (n < 0)
		return (-1);
	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
