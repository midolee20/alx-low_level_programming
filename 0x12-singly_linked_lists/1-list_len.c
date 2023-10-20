#include "lists.h"
/**
 * list_len - returns then number of elements in a liss
 * @h: singly linked lists
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num_element;

	num_element = 0;
	while (h != NULL)
	{
		h = h->next;
		num_element++;
	}
	return (num_element);
}
