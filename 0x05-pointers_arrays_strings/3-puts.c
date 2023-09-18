
#include <unistd.h>
#include "main.h"

/**
 * _puts - program that prints a string
 * @str: this is a pointer
 * Return: void
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
