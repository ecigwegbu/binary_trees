#include "binary_trees.h"

void bt_delete(binary_tree_t *tree);

/**
 * binary_tree_delete - delete a  binary tree
 * @tree: pointer to the root node of the binary tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* NULL check */
	if (tree == NULL)
		return;
	else if (!tree->left && !tree->right)
	{
		tree->parent = NULL;
		tree->left = NULL;
		tree->right = NULL;
		free(tree);
		return;
	}

	bt_delete(tree);
}

/**
 * bt_delete - delete a binary tree
 * @tree: pointer to the root node of the binary tree
 */

void bt_delete(binary_tree_t *tree)
{
	/* NULL check */
	if (tree == NULL)
		return;

	bt_delete(tree->left);
	bt_delete(tree->right);
	if (tree && (!tree->left && !tree->right))
	{
		printf("freeing %d...\n", tree->n); /* debug */
		tree->parent = NULL;
		tree->left = NULL;
		tree->right = NULL;
		free(tree);
	}
}
