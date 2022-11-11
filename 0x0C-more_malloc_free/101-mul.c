#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Rturn: int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int l, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (l = 1; l < argc; l++)
	{
		for (j = 0; argv[l][j] != '\0'; j++)
		{
			if (argv[l][j] > 57 || argv[l][j] < 48)
			{ printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
