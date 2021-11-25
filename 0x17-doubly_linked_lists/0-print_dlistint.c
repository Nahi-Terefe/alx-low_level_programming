#include "list.h"

/**
 * print_dlistint - a function
 * @h: pointer to doubly linked list header
 * Description: a function to print all elements in dlistint_t list
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	dlistint_t *next_head;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h == h->next;
		i++;
	}

	return (i);
}
