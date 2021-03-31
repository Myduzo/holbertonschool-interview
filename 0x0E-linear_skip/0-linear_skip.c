#include "search.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 *
 * @list: pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *search = list;

	if (!value || !list)
		return (NULL);

	while (search->express && search->n < value)
	{
		node = search;
		search = node->express;
		printf("Value checked at index [%lu] = [%d]\n", search->index, search->n);
	}

	if (!(search->express) && !(search->n > value))
	{
		node = search;
		while (search->next)
			search = search->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			 node->index, search->index);

	while (node != search)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	if (node)
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

	return (NULL);
}
