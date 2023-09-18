#include "main.h"

/**
 * swap_int - program that swaps integers
 * @a: a pointer
 * @b: another pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
