#include "lists.h"

/**
 * listint_len - counts the number of elements in the link.
 *
 * @h: pointer to a node.
 * Return: the number of node in the link.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
