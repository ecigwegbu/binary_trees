#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary try pre-order
 * @tree: pointer to the root node of the binary tree
 * @func: function pointer (applied to value of each node visited)
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* NULL check */
	if ((tree == NULL) || (func == NULL))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
