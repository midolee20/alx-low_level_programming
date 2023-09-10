#include <stdio.h>
/**
 * main - Program that prints numbers
 * Description - Prints all single digit numbers of base ten
 *
 * Return: 0
 */

int main(void)
{
	int baseten;

	for (baseten = 0; baseten <= 9; baseten++)
	{
		printf("%d", baseten);
	}
	return (0);
}
