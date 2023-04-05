#include "main.h"

/**
 * _print_rev_recursion - printing string in reserve using rec
 * @s: pointer block
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
