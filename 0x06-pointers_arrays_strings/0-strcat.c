#include"main.h"
/**
 * _strcat - function that concatenates two strings
 * @src: string pointer, from source
 * @dest: string pointer, to destination
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int string_length, l;

	string_length = 0;
	while (dest[string_length] != '\0')
	{
	string_length++;
	}
	for (l = 0; src[l] != '\0'; l++, string_length++)
	{
	dest[string_length] = src[l];
	}
	dest[string_length] = '\0';
	return (dest);
}
