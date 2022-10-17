#include <stdio.h>
/**
 * main - Entry
 * Return: to 0
 */

int main(void)
{
	int l;
	int m;
	int n;

	for (l = 0; l < 8; l++)
	{
		for (m = l + 1; m < 9; m++)
		{
			for (n = m + 1; n < 10; n++)
			{
				if (l != m && l != n && m != n)
				{
					putchar(l + '0');
					putchar(m + '0');
					putchar(n + '0');
					if (l + m + n < 24)
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
