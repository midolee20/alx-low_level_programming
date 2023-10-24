#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: head of a lists and
 *
 * Return: numbers of nodes in the
 */
size_t print_listint(const listint_t *h)
{
	size_t nofnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nofnodes++;
	}
	return (nofnodes);
}
