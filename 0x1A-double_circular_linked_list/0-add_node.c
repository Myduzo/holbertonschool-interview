#include "list.h"

/**
 * add_node_end - function that adds node at the end
 *
 * @list: list to modify
 * @str: the string to copy into the new node
 *
 * Return: Address of the new node, or NULL on failure.
 */
List *add_node_end(List **list, char *str)
{
	List *node = malloc(sizeof(List));

	if (!node)
		return (NULL);

	node->str = str;
	if (!node->str)
		free(node);

	if (!(*list))
	{
		node->next = node;
		node->prev = node;
		*list = node;
	}

	else
	{
		node->next = (*list);
		node->prev = (*list)->prev;
		(*list)->prev->next = node;
		(*list)->prev = node;
	}
	return (node);
}

/**
 * add_node_begin - function that adds node at the beginning
 *
 * @list: list to modify
 * @str: the string to copy into the new node
 *
 * Return: Address of the new node, or NULL on failure.
 */
List *add_node_begin(List **list, char *str)
{
	List *node = malloc(sizeof(List));

	if (!node)
		return (NULL);

	node->str = str;
	if (!node->str)
		free(node);

	if (!(*list))
	{
		node->next = node;
		node->prev = node;
		*list = node;
	}

	else
	{
		node->next = (*list);
		node->prev = (*list)->prev;
		(*list)->prev->next = node;
		(*list)->prev = node;
		*list = node;
	}
	return (node);
}
