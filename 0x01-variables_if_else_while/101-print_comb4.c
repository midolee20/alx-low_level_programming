#include <stdio.h>
/**
 * main - Program that prints all combinations
 * Description -  prints all combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (!((i == j) || (j == k) || (j > i) || (k > j)))
				{
					putchar(k);
					putchar(j);
					putchar(i);
					if (!(i == '9' && j == '8' && k == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
