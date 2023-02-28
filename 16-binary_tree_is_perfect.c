#include "binary_trees.h"

void bt_is_perfect(const binary_tree_t *tree,
			int *isPerfect, size_t treeHeight);
size_t bt_height(const binary_tree_t *tree);
size_t bt_depth(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the binary tree
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t treeHeight;
	int isPerfect = 1;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* get tree height */
	treeHeight = bt_height(tree);

	/* NULL check */
	if (tree == NULL)
		return (0);

	bt_is_perfect(tree, &isPerfect, treeHeight);
	return (isPerfect);
}

/**
 * bt_is_perfect - visit each node of a binary tree preorder and count leave
 * @tree: pointer to the root node of the binary tree
 * @isPerfect: pointer to 'perfect' indicator
 * @treeHeight: height of the binary tree
 */

void bt_is_perfect(const binary_tree_t *tree,
		int *isPerfect, size_t treeHeight)
{
	/* NULL check */
	if (tree == NULL)
		return;

	if (tree && (!tree->left && !tree->right))  /* leaf node */
	{
		/* if leaf node depth is not treeHeight return not perfect */
		if (bt_depth(tree) != treeHeight)
		{
			*isPerfect = 0;
			return;
		}
	}
	bt_is_perfect(tree->left, isPerfect, treeHeight);
	bt_is_perfect(tree->right, isPerfect, treeHeight);
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



/**
 * bt_depth - calculate the depth of a node in a  binary tree
 * @tree: pointer to the node of interest
 * Return: the depth of the node below the root node
 */

size_t bt_depth(const binary_tree_t *tree)
{
	const binary_tree_t *node = tree;
	size_t depth = 0;

	/* null checks */
	if (tree == NULL)
		return (0);

	while (node->parent != NULL)
	{
		node = node->parent;
		depth++;
	}

	return (depth);
}
