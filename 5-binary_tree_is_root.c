#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a binary tree node is a root
 * @node: the node to check
 * Return: 1 if it is a root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/* NULL check */
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
