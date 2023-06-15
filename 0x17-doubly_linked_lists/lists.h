#ifndef LISTS_H
#define LISTS_H

/* INCLUDED LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/* DEFINITIONS */
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* FUNCTION PROTOTYPES */
/* declaration of function to print all elements of a doubly linked list (0)*/
size_t print_dlistint(const dlistint_t *h);

/* declaration of funtion to return number of nodes in doubly linked list (1)*/
size_t dlistint_len(const dlistint_t *h);

/* declaration of function to add new node to start of doubly linked list (2)*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* declaration of function to add new node to end of doubly linked list (3)*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* declaration of function to free all elements of a doubly linked list (4)*/
void free_dlistint(dlistint_t *head);

/* declaration of function to return the nth node of a doubly linked list (5)*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* declaration of function to sum data from elements of dlistint_t list (6)*/
int sum_dlistint(dlistint_t *head);

/* declaration of function to insert newnode at set index in dlistint list (7)*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* declaration of function to delete node at given index in dlistint list (8)*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
