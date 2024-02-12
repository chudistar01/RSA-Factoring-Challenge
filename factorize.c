#include "factor.h"

/**
 * factorize - factorize number
 * @buffer: pointer to a bffer
 * Return: integer
 */
int factorize(char *buffer)
{
	unsigned long int num;
	long int factor;

	num = atoi(buffer);

	if (num % 2 == 0)
	{
		printf("%lu=%lu*%i\n", num, num / 2, 2);
	}
	factor = 3;

	while (factor * factor <= num)
	{
		if (num % factor == 0)
		{
			printf("%lu=%lu*%lu\n", num, num / factor, factor);
			return (0);
		}
		else
			factor += 2;
	}
	printf("%lu=%lu*%i\n", num, num, 1);
	return (0);
}
