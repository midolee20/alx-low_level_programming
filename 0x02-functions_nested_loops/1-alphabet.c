#include "main.h"

/**
 * print_alphabet - function that prints alphabelts
 * folowed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
