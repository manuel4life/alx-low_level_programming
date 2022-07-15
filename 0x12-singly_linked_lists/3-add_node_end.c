#include "lists.h"
/**
 * add_node_end - adds a new node to linked list
 * @head: head of the linked list
 * @str: string in the struct
 *
 * Return: address of new elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *final = *head;
	int newelem = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (final->next != NULL)
		{
			final = final->next;
		}
		final->next = newnode;
	}

	while (str[newelem])
	{
		newelem++;
	}
	newnode->len = newelem;
	return (newnode);
}
