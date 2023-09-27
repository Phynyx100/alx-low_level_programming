#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: to be freed listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *temp_addr;

	while (head)
	{
		temp_addr = head->next;
		free(head);
		head = temp_addr;
	}
}
