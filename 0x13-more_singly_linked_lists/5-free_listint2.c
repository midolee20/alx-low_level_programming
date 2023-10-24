#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list in a
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curent;

	if (head != NULL)
	{
		curent = *head;
		while ((temp = curent) != NULL)
		{
			curent = curent->next;
			free(temp);
		}
		*head = NULL;
	}
}
