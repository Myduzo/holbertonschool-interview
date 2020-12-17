#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: first node
 * @number: the value of the node node
 * Return: node node
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *node;
    listint_t *current;

    node = malloc(sizeof(listint_t));

    if (!head || !node)
        return (NULL);

    current = *head;

    if (!*head)
    {
        node->next = NULL;
        *head = node;
        return (node);
    }

    if (number < (*head)->n)
    {
        node->next = *head;
        *head = node;
        return (node);
    }

    while (current->next)
    {
        if (number >= current->n && number < current->next->n)
        {
            node->next = current->next;
            current->next = node;
            return (node);
        }

        current = current->next;
    }

    node->next = NULL;
    current->next = node;

    return (node);

}
