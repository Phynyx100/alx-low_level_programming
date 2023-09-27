#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node
 * @head: firstnode inthe linked list
 * @index: index ofthe nodeto return
 * Return: pointer to the node on search, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nn = 0;
	listint_t *temp_addr = head;

	while (temp_addr && nn < index)
	{
		temp_addr = temp_addr->next;
		nn++;
	}

	return (temp_addr ? temp_addr : NULL);
}
