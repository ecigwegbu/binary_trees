#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: NULL if successful
 */

binary_tree_t binary_tree_delete(binary_tree_t *tree)
{
	/* NULL check */
	if (tree == NULL)
		return;

	func(tree->n);
	del_node(tree->left);
	del_node(tree->right);
}


binary_tree_t *del_node(binary_tree_t *node)
{
	binary_tree_t *tmpNode;

	if (node && node->parent && !node->left && !node->right)
	{
		tmpNode = node->parent;
		node->parent = NULL;
		free(node);
	}

	return (tmpNode);
}
