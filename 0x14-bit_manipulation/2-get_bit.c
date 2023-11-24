#include"main.h"

/**
 * get_bit - returns bit value at given index.
 * @n: check bits
 * @index: index at which to check bit
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitv;

	if (index > 63)
		return (-1);
	bitv = (n >> index) & 1;
	return (bitv);
}
