#include "binary_trees.h"

void bt_size(const binary_tree_t *tree, size_t *sz);

/**
 * binary_tree_size - return the size of a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: the number of nodes in the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t treeSize = 0;

	/* NULL check */
	if (tree == NULL)
		return (0);

	bt_size(tree, &treeSize);
	return (treeSize);
}

/**
 * bt_size - visit each node of a binary tree preorder and count it
 * @tree: pointer to the root node of the binary tree
 * @sz: pointer to the cumulative size so far
 */

void bt_size(const binary_tree_t *tree, size_t *sz)
{
	/* NULL check */
	if (tree == NULL)
		return;

	(*sz)++;
	bt_size(tree->left, sz);
	bt_size(tree->right, sz);
}
