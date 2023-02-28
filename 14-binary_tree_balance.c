#include "binary_trees.h"

void bt_is_perfect(const binary_tree_t *tree,
			int *isPerfect, size_t treeHeight);
size_t bt_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - return the balance factor of a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t ltHeight = 0, rtHeight = 0;
	int balanceFactor = 0;

	/* NULL check */
	if (tree == NULL || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);

	/* get left and right tree heights */
	ltHeight = bt_height(tree->left);
	rtHeight = bt_height(tree->right);

	/* get the absolute difference */
	balanceFactor = ltHeight >= rtHeight ?
		(ltHeight - rtHeight) : (rtHeight - ltHeight);

	return (balanceFactor);
}

/**
 * bt_height - calculate the height of a binary tree
 * @tree: pointer to the root node
 * Return: the height of the tree
 */

size_t bt_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;
	/* NULL check */
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* now recursion: */
	leftHeight = bt_height(tree->left);
	rightHeight = bt_height(tree->right);

	return ((leftHeight >= rightHeight ? leftHeight : rightHeight) + 1);
}
