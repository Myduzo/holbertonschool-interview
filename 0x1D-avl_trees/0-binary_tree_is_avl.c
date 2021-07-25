#include "binary_trees.h"

/**
 * check_avl - check the validation of avl tree
 *
 * @tree: pointer to the root node
 * @min: min value
 * @max: max value
 * @height: pointer of the tree height
 *
 * Return: 1 or 0
 */
int check_avl(const binary_tree_t *tree, int min, int max, int *height)
{
	int heightL = 0, heightR = 0;

	if (!tree)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	if (check_avl(tree->left, min, tree->n, &heightL) == 0)
		return (0);

	if (check_avl(tree->right, tree->n, max, &heightR) == 0)
		return (0);

	if (abs(heightL - heightR) > 1)
		return (0);

	if (heightL > heightR)
		*height = heightL + 1;
	else
		*height = heightR + 1;

	return (1);
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 *
 * @tree: pointer of the root node
 *
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int height = 0, heightL = INT_MIN, heightR = INT_MAX;

	if (!tree)
		return (0);

	return (check_avl(tree, heightL, heightR, &height));
}
