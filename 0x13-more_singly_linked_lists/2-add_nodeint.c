#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - adds a node at the beginning of a listint_t list.
  *
  * @head: pointer to pointer to the head of the list
  * @n: integer to add to the list
  * Return: a pointer to the new node, or NULL if it fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
