#include <stdio.h>
/**
 * main - Program that prints numbers
 * Description - Prints numbers of baseten without using char variable
 *
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
