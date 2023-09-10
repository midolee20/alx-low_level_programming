#include <stdio.h>
/**
 * main - Program that prints numbers
 * Description - Prints all single digit numbers of base ten
 *
 * Return: 0
 */

int main(void)
{
	char baseten;

	for (baseten = '0'; baseten <= '9'; baseten++)
	{
		putchar(baseten);
	}
	putchar('\n');
	return (0);
}
