#include "lists.h"

/**
 * free_listint2 - freeslinked list
 * @head: freed listint_t pinter
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_addr;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_addr = (*head)->next;
		free(*head);
		*head = temp_addr;
	}

	*head = NULL;
}
