#include "binary_trees.h"

void bt_is_full(const binary_tree_t *tree, int *isFull);

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the binary tree
 * Return: 1 if full 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int isFull = 1;

	/* NULL check */
	if (tree == NULL)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);

	bt_is_full(tree, &isFull);
	return (isFull);
}

/**
 * bt_is_full - check if a binary true is full
 * @tree: pointer to the root node of the binary tree
 * @isFull: pointer to indicator whether tree is full or not
 */

void bt_is_full(const binary_tree_t *tree, int *isFull)
{
	/* recursion terminal condition, not just regular NULL check*/
	if (tree == NULL)
		return;

	if (tree && ((tree->left && !tree->right) ||
			(tree->right && !tree->left)))
	{
		*isFull = 0;
		return;
	}
	bt_is_full(tree->left, isFull);
	bt_is_full(tree->right, isFull);
}
