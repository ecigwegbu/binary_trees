#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of a node in a  binary tree
 * @tree: pointer to the node of interest
 * Return: the depth of the node below the root node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *node = tree;
	size_t depth = 0;

	/* null checks */
	if (tree == NULL)
		return (0);

	while (node->parent != NULL)
	{
		node = node->parent;
		depth++;
	}

	return (depth);
}
