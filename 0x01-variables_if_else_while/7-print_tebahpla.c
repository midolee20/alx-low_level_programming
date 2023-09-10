#include <stdio.h>
/**
 * main - Program that runs alphabelts
 * Description - Displays lowercase alphabelts in reverse
 *
 * Return: 0
 */

int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
