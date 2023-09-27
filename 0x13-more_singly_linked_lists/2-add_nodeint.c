#include "lists.h"

/**
 * add_nodeint - adds new node at where a linked list starts
 * @head: pointer to first node within the list
 * @n: insert data new node
 * Return: pntr/address of new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_addr;

	new_addr = malloc(sizeof(listint_t));
	if (!new_addr)
		return (NULL);

	new_addr->n = n;
	new_addr->next = *head;
	*head = new_addr;

	return (new_addr);
}
