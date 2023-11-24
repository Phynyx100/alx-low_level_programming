#include "main.h"

/**
 * print_binary - prints binary
 * @n: binary to be printed
 */

void print_binary(unsigned long int n)
{
	int Sim, Ndl = 0;
	unsigned long int i;

		for (Sim = 63; Sim >= 0; Sim--)
		{
		i = n >> Sim;
		if (i & 1)
		{
		_putchar('1');
		Ndl++;
		}
	else if (i)
	_putchar('0');
	}
		if (!i)
		_putchar('0');
}
