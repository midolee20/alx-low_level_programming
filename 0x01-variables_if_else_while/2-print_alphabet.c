#include <stdio.h>
/**
 * main - Program that prints alphabelts in lowercase
 * Description - Program that prints alphabelts in lowercase using putchar
 *
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
