#include <stdlib.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: list pointer
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
