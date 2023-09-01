#include"main.h"

/**
 * _strncpy - copies a string
 * @src: source string pointer
 * @dest: destination string pointer
 * @n: number of bytes
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int byte_count;

	byte_count = 0;
		while (byte_count < n && src[byte_count] != '\0')
		{
			dest[byte_count] = src[byte_count];
			byte_count++;
		}
	while (byte_count < n)
	{
		dest[byte_count] = '\0';
		byte_count++;
	}
	return (dest);
}
