#include"main.h"

/**
 * _strncat - concatenates two strings
 * @src: source string pointer
 * @dest: destination string pointer
 * @n: bytes to be concantenated
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int string_length, l;

		string_length = 0;
	while (dest[string_length] != '\0')
	{
		string_length++;
	}
	for (l = 0; l < n && src[l] != '\0'; l++, string_length++)
	{
		dest[string_length] = src[l];
	}
	dest[string_length] = '\0';
	return (dest);
}
