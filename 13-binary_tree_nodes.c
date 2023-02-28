#include "binary_trees.h"

void bt_HasChild(const binary_tree_t *tree, size_t *hc);

/**
 * binary_tree_nodes - return the number of nodes with at least one child
 * @tree: pointer to the root node of the binary tree
 * Return: the number of nodes with at least a child in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t hasChild = 0;

	/* NULL check */
	if (tree == NULL)
		return (0);

	bt_HasChild(tree, &hasChild);
	return (hasChild);
}

/**
 * bt_HasChild - visit each node of a binary tree preorder and count
 * the nodes that have at least one child
 * @tree: pointer to the root node of the binary tree
 * @hc: pointer to the cumulative number of nodes with at least a child so far
 */

void bt_HasChild(const binary_tree_t *tree, size_t *hc)
{
	/* NULL check */
	if (tree == NULL)
		return;

	if (tree && (tree->left || tree->right))
		(*hc)++;
	bt_HasChild(tree->left, hc);
	bt_HasChild(tree->right, hc);
}
