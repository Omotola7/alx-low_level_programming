#include <stdio.h>
/**
 * main - Entry
 * Return: to 0
 */

int main(void)
{
	int l;
	int m;

	for (l = 0; m < 99; l++)
	{
		for (m = l + 1; m < 100; m++)
		{
			putchar((l / 10) + '0');
			putchar((l % 10) + '0');

			putchar(' ');

			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			if (l == 98 && m == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
