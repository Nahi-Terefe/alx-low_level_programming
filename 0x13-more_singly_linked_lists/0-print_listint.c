#include "lists.h"

/**
 *
 * print_listint - print elements of a linked list.
 *
 * @h: pointer to a node.
 * Returns: the number of node in the link.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		i++;
	}

	return (i);

}

