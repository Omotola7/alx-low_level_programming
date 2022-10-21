#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, tl;

	n = 612852475143;
	for (tl = 2; tl <= n; tl++)
	{
		if (n % tl == 0)
		{
			n /= tl;
			tl--;
		}
	}
	printf("%ld\n", tl);
	return (0);
}
