#include "main.h"

/**
 * binary_to_uint - binary numb to unsignd int
 * @b: string, containing binary number
 * Return: converted number numb
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec = 2 * dec + (b[a] - '0');
	}

	return (dec);
}
