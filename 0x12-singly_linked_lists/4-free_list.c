#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to the header (first node of the list)
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	/* while the current head is not null */
	while (head != NULL)
	{
		temp = head;
		head = head->next; /* set head as the next node */
		free(temp->str); /* free the current node string */
		free(temp); /* free current node called temp */
	}
}
