#include "lists.h"

/**
 * dlistint_len - a function
 * @h: pointer to doubly linked list header
 * Description: a function that returns available node in the link
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

