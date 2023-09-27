#include "lists.h"

/**
 * pop_listint - removes head node of linked list
 * @head: first element pontrin linked list
 * Return: data inside removed elements
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_addr;
	int non;

	if (!head || !*head)
		return (0);

	non = (*head)->n;
	temp_addr = (*head)->next;
	free(*head);
	*head = temp_addr;

	return (non);
}
