#include "binary_trees.h"

binary_tree_t *bt_sibling(binary_tree_t *node);

/**
 * binary_tree_uncle - return the uncle of a binary tree node
 * @node: pointer to the node whose uncle is required
 * Return: the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (bt_sibling(node->parent));
}

/**
 * bt_sibling - return the sibling of a binary tree node
 * @node: pointer to the node whose sibling is required
 * Return: the sibling node
 */

binary_tree_t *bt_sibling(binary_tree_t *node)
{
	/* NULL check */
	if ((node == NULL) || (node->parent == NULL))
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
