#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary try postorder
 * @tree: pointer to the root node of the binary tree
 * @func: function pointer (applied to value of each node visited)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* NULL check */
	if ((tree == NULL) || (func == NULL))
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
