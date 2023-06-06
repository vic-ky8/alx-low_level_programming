#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: duoble pointer
 * @str: new string
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
