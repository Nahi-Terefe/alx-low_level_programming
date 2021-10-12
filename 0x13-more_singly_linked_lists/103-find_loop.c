#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *next_node;

	current = next_node = head;
	while (current && next_node && next_node->next)
	{
		current = current->next;
		next_node = next_node->next->next;
		if (current == next_node)
		{
			current = head;
			break;
		}
	}
	if (!current || !next_node || !next_node->next)
		return (NULL);
	while (current != next_node)
	{
		current = current->next;
		next_node = next_node->next;
	}
	return (next_node);
}
