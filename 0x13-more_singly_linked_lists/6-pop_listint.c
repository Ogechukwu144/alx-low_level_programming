#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        first node of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int first_node;

	if (*head == NULL)/*If list is empty, return 0*/
		return (0);

	tmp = *head;/*set head to temp*/
	first_node = (*head)->n;/*return element of first node*/
	*head = (*head)->next;/*set head to second node*/

	free(tmp);/*free first node*/

	return (first_node);
}
