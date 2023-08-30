#include "lists,h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 * Return: the address of the new element, or NULL if it failed
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != null)
	{
		node++;
		h = h->next;
	}

	return (node);
}
