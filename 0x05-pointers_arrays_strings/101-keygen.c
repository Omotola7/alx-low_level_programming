#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int k = 0, g = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		k = rand() % 128;
		if ((g + k) > 2772)
			break;
		g = g + k;
		printf("%g", k);
	}
	print("%g\n", (2772 - c));
	return (0);
}
