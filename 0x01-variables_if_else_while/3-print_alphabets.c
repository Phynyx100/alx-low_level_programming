#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and uppercase.
 * Return: Always 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alp[a]);
	}
	putchar('\n');
	return (0);
}
