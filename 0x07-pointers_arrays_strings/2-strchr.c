#include "main.h"

/**
 * _strchr - Entrance point in the function
 * @i: an input
 * @j: another input
 * Return: 0
 */

char *_strchr(char *i, char j)
{
	int n = 0;

	for (; i[n] >= '\0'; n++)
	{
		if (i[n] == j)
			return (&i[n]);
	}
	return (0);
}
