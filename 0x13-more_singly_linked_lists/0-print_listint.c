#include "lists.h"

/**
 * print_listint - prints all the the elements of a linked list
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
