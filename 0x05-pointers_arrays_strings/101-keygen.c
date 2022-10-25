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
	while (g < 2772)
	{
		k = srand() % 128;
		if ((g + k) > 2772)
			break;
		g = g + k;
		printf("%d", k);
	}
	printf("%d\n", (2772 - c));
	return (0);
}
