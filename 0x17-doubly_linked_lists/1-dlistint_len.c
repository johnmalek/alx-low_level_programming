#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - A function that returns the number of elements in a doubly list
 * @h: head of a doubly linked list
 * Return: Number of nodes in a doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;
	temp = h;

	while(temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
