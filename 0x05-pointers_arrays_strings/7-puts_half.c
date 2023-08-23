#include"main.h"
/**
 * puts_half -  prints half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int fstr;
	int hstr;

	fstr = 0;
	while (str[fstr] != '\0')
		fstr++;

	hstr = fstr / 2;

	if (fstr % 2 == 1)
		hstr++;
	while (hstr < fstr)
	{
		_putchar(str[hstr]);
		hstr++;
	}
	_putchar('\n');
}
