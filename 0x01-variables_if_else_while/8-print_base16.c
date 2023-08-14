#include <stdio.h>

/**
 * main - Prints all numbers in base ten in lowercase, that 0 to 9 and a to f.
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 1030; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
