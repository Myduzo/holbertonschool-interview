#ifndef __ADD_NODES__
#define __ADD_NODES__

#include <stdio.h>
#include <stdlib.h>

/**
 * struct List - doubly linked list
 * @str: string - (malloc'ed string)
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct List
{
  char *str;
  struct List *prev;
  struct List *next;
} List;


void print_list(List *list);
List *add_node_end(List **list, char *str);
List *add_node_begin(List **list, char *str);

#endif
