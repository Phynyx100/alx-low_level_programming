#include<stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int array_indx;

	for (array_indx = 0; array_indx < n; array_indx++)
	{
		printf("%d", a[array_indx]);
		if (array_indx != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
