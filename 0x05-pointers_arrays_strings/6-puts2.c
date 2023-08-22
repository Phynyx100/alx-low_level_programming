#include"main.h"
/**
 * puts2 -  prints every other character of a string,
 * starting with the first character
 * @str: input
 * Return: print output
 */
void puts2(char *str)
{
	int length = 0;
	int l = 0;
	char *x = str;
	int i;

	while (*x != '\0')
	{
		x++;
		length++;
	}
	l = length - 1;
	for (i = 0; i <= l; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
