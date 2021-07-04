#include "list.h"

/**
 * 
 * 
 * 
 */
List *add_node_end(List **list, char *str)
{
  List *node = malloc(sizeof(List));
  
  if (!node)
    return (NULL);

  node->str = str;
  if (!node->str)
    free(node);

  if(!(*list))
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
 * 
 * 
 * 
 */
List *add_node_begin(List **list, char *str)
{
  List *node = malloc(sizeof(List));
  
  if (!node)
    return (NULL);

  node->str = str;
  if (!node->str)
    free(node);

  if(!(*list))
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
