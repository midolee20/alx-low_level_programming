#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * @head: head of a lists
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curent;

	if (*head == NULL)
		return (0);

	curent = *head;

	hnode = curent->n;

	h = curent->next;

	free(curent);

	*head = h;

	return (hnode);
}
