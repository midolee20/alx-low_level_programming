#include "main.h"

/**
 * _strlen - program to provide string length
 * @s: this is a variable
 * Return: long
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

