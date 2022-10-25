#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int l = 0, e = 0;
	time_t t;
	
	srand((unsigned int) time(&t));
	while (e < 2772)
	{
		l = rand() % 128;
		if ((e + l) > 2772)
			break;
		e = e + l;
		printf("%d", l);
	}
	printf("%d\n", (2772 - e));
	return (0);
}
