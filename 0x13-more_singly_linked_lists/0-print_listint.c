#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes (non)
 */

size_t print_listint(const listint_t *h)
{
	size_t non = 0;

	while (h)
	{
		printf("%d\n", h->n);
		non++;
		h = h->next;
	}

	return (non);
}
