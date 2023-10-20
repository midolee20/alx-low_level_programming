#include "lists.h"

/**
 * free_list - frees a list in the node
 * @head: head of the linked list in the node
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *alist_list;

	while ((alist_list = head) != NULL)
	{
		head = head->next;
		free(alist_list->str);
		free(alist_list);
	}
}
