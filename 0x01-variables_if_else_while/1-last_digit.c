#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program that prints last digit
 * Description -  source code to print the last digit of the number
 * stored in the variable n
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int lasdi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasdi = n % 10;

	if (lasdi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lasdi);
	}
	else if (lasdi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lasdi);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasdi);
	}
	return (0);
}
