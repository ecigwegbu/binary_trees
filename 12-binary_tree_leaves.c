#include "binary_trees.h"

void bt_leaves(const binary_tree_t *tree, size_t *lvs);

/**
 * binary_tree_leaves - return the size of a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: the number of nodes in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t treeLeaves = 0;

	/* NULL check */
	if (tree == NULL)
		return (0);

	bt_leaves(tree, &treeLeaves);
	return (treeLeaves);
}

/**
 * bt_leaves - visit each node of a binary tree preorder and count leave
 * @tree: pointer to the root node of the binary tree
 * @lvs: pointer to the cumulative number of leaves so far
 */

void bt_leaves(const binary_tree_t *tree, size_t *lvs)
{
	/* NULL check */
	if (tree == NULL)
		return;

	if (tree && (!tree->left && !tree->right))
		(*lvs)++;
	bt_leaves(tree->left, lvs);
	bt_leaves(tree->right, lvs);
}
