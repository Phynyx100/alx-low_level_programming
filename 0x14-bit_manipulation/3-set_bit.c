#include "main.h"

/**
 * set_bit - sets bit value to 1 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 * Return: 1 success, or -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bit_set  = 1 << index;
	*n = *n | bit_set;
	return (1);
}
