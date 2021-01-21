#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
