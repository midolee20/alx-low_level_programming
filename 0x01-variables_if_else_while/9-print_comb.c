#include <stdio.h>
/**
 * main - Program that prints all combinations of single numbers
 * Description - Numbers should be seperated by a comma followed by space
 *
 * Return: 0
 */

int main(void)
{
	char nunu;

	for (nunu = '1'; nunu <= '9'; nunu++)
	{
		putchar(nunu);
			if (nunu <= '8')
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
