#include "main.h"

/**
 * get_bit - index in a decimal number to return
 * @n: number or integer to be searched
 * @index: index(s)
 * Return: bit value
 */
void int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > 63)
		return (-1);
	bits = (n >> index) & 1;
	return (bits);
}
