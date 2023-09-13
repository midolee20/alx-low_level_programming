#include "main.h"

/**
 * print_last_digit - Program that prints last digit
 * @n: this is a variable
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int j;

	if (n < 0)
	n = -n,

	j = n % 10;

	if (j < 0)
	j = -j;

	_putchar(j + '0');
	return (j);
}

