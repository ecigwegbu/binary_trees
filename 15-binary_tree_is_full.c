#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is a full binary tree
 * @tree: the root node of the tree to check
 * Return: 1 if it is a full binary tree, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* NULL check */
	if (tree == NULL)
		return (1);

	/* check if children are empty */
  	if (tree->left == NULL && tree->right == NULL)
    	return (1);

	/* recursively call the binary_tree_os_full check on both children */
  	if ((tree->left != NULL) && (tree->right != NULL))
    		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
