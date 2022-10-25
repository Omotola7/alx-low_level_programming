#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int l = 0, m = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (m < 2772)
	{
		l = rand() % 128;
		if ((m + l) > 2772)
			break;
		m = m + l;
		printf("%d", l);
	}
	printf("%m\n", (2772 - m));
	return (0);
}
