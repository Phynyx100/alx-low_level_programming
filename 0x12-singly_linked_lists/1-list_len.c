#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns num of elements in a linked list
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t noe = 0;

	while (h)
	{
		noe++;
		h = h->next;
	}
	return (noe);
}
