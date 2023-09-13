#include "main.h"

/**
 * _isalpha - Program that checks if it is lower or upper
 * @c: this is a parameter
 *
 * Return: 1 if c is uppercase or lower case or otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
		else
		return (0);
}
