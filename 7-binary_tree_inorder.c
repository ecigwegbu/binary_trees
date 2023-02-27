#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary try inorder
 * @tree: pointer to the root node of the binary tree
 * @func: function pointer (applied to value of each node visited)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* NULL check */
	if ((tree == NULL) || (func == NULL))
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
