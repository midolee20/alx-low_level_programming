#include "main.h"

/**
 *_islower - Program that returns 1 or 0
 * @c: parameter that returns 1 or 0 if it is a lowercase or not
 * if its a lowercase or not
 * Return: 1 or 0 if it is lowercase or not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
		else
		return (0);
}
