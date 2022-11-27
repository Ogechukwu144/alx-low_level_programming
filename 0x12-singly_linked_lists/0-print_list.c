#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: header pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		/* if str is NULL return len as 0 and str as (nil) */
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			node_count++;
		}
		else
		{
			/*print for the last node*/
			printf("[%u] %s\n", h->len, h->str);
			h = h->next; /* go to the next node*/
			node_count++; /* count number of nodes */
		}
	}
	return (node_count);
}
