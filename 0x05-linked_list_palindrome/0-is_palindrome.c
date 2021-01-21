#include "lists.h"

/**
 * node_counter - function that count nodes in a singly linked lisr.
 *
 * @h: pointer of first node.
 *
 * Return: node lenght.
 */
size_t node_counter(const listint_t *h)
{
	const listint_t *current;
	int count;

	current = h;
	count = 0;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);

}


/**
 * is_palindrome - function that checks if a list is a palindrome.
 *
 * @head: pointer to pointer of first node of listint_t list.
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome.
 */
int is_palindrome(listint_t **head)
{
	listint_t *first, *current, *tmp, *next, *prev = NULL, *left, *right;
	unsigned int i, len = node_counter(*head);

	if (!head)
		return (0);

	first = *head;
	if (!first)
		return (1);


	current = *head;
	for (i = 0; i < len / 2; ++i)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		left = current;
		current = next;
	}

	right = next;
	tmp = right;
	current = left;
	for (; current && tmp; current = current->next, tmp = tmp->next)
	{
		if (current->n != tmp->n)
			return (0);
	}


	return (1);
}
