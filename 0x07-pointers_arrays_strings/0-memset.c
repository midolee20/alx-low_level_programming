#include "main.h"

/**
 * _memset - populate
 * @x: start address
 * @i: value
 * @j: bytes
 *
 * Return: array
 */

char *_memset(char *x, char i, unsigned int j)
{
	int y = 0;

	for (; j > 0; y++)
	{
		x[y] = i;
		j--;
	}
	return (x);
}
