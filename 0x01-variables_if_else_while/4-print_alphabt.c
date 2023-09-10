#include <stdio.h>
/**
 * main - Program that prints alphabelts in lowercase
 * Description - Prints all alphabelts in lowecase excluding e and f
 *
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
