#include "factor.h"

/**
 * factorize - factorize number
 * @buffer: pointer to a bffer
 * Return: integer
 */
int factorize(char *buffer)
{
	u_int32_t num;
	u_int32_t i;

	num = atoi(buffer);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n",num,num/i,i);
			break;
		}
	}
	return (0);
}
