#include "lists.h"

/**
 * add_nodeint_end - adds node at ending of linked list
 * @head: first elementpointer in the list
 * @n: new element data insert
 * Return: pntr/address to the new elemnt, or NULL 
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_addr;
	listint_t *temp_addr = *head;

	new_addr = malloc(sizeof(listint_t));
	if (!new_addr)
		return (NULL);

	new_addr->n = n;
	new_addr->next = NULL;

	if (*head == NULL)
	{
		*head = new_addr;
		return (new_addr);
	}

	while (temp_addr->next)
		temp_addr = temp_addr->next;

	temp_addr->next = new_addr;

	return (new_addr);
}
