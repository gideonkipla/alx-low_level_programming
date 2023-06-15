#include "lists.h"

/**
 * dlistint_len - function to return count of elements of a dlistint_t list
 * @h: input head of dlistint_t list
 * Return: number of nodes in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = (dlistint_t *)h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
