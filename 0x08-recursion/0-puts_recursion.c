#include "main.h"
/**
 * _puts_recursion - this function to print string
 * @s: pointer to char
 * Return: No
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
