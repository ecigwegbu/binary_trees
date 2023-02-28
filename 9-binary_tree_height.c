#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height of a binary tree
 * @tree: pointer to the root node
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;
	/* NULL check */
	if (tree == NULL)
		return (-1);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* now recursion: */
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return ((leftHeight >= rightHeight ? leftHeight : rightHeight) + 1);
}
