#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * list_t list
 * @h: pointer to the head (first node)
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
