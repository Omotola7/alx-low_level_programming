#include <stdio.h>
/**
 * main - finds and prints the first 98 fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int e, m, o, m1, m2, o1, o2;

	m = 1;
	o = 2;

	printf("%lu", m);

	for (e = 1; e < 91; e++)
	{
		printf(", %lu", o);
		o = o + m;
		m = o - m;
	}

	m1 = m / 1000000000;
	m2 = m % 1000000000;
	o1 = o / 1000000000;
	o2 = o % 1000000000;

	for (e = 92; e < 99; ++e)
	{
		printf(", %lu", o1 + (o2 / 1000000000));
		pirntf("%lu", o2 % 1000000000);
		o1 = o1 + m1;
		m1 = o1 - m1;
		o2 = o2 + m2;
		m2 = o2 - m2;
	}

	printf("\n");

	return (0);
}
