#include "main.h"

/**
 * _isupper - function that checks for uppercase
 * @c: a variable
 * Return: 1 if c is uppercase otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
		else
		return (0);
}
