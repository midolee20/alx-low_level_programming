#include "main.h"

/**
 * _puts_recursion - keeps filling memory with a constant bytes and
 * @s: first bytes of the memorydd
 * Return: -
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
