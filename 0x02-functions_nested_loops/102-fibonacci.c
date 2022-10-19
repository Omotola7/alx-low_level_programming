#include <stdio.h>
/**
 * main - main block
 * Description: print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int count = 2;
	long int e = 1, m = 2;
	long int o;

	printf("%lu, ", e);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", m);
		}
		else
		{
			printf("%lu, ", m);
		}

		o = m;
		m += e;
		e = o;
		count++;
	}

	return (0);
}
