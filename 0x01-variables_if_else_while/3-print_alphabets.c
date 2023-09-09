#include <stdio.h>
/**
 * main - Program that prints alphabelts
 * Description - Program that prints alphabelts in lowercase
 * follwed by uppercase
 *
 * Return: 0
 */

int main(void)
{
	char alpha;
	char ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');
	return (0);
}
