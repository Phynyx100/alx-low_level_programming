#include "main.h"
/**
 * main - _isupper checks for uppercase character.
 * @c: is the character to be checked
 * Return - Always 0
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return 1;
	else
		return (0);
}
