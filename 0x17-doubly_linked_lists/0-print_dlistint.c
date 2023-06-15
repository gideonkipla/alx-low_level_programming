#include "lists.h"

/**
 * print_dlistint - function to print all elements of a dlistint_t list
 * @h: input head of dlistint_t list
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = (dlistint_t *)h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
