#include <stdio.h>
/**
 * main - main bloacks
 * Description: print the sum of even fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int e = 1, m = 2, total = 0;
	int o;

	while (m < 4000000)
	{
		if (m % 2 == 0)
			total += m;
		o = m;
		m += e;
		e = o;
	}
	printf("%d\n", total);
	return (0);
}
