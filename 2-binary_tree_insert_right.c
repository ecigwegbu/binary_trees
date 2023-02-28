#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new binary tree to the right
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	/* NULL check */
	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* set the value of the node */
	newNode->n = value;

	/* let parent set child */
	if (parent->right == NULL)
	{
		parent->right = newNode;
		newNode->parent = parent;

		/* set child nodes to NULL */
		newNode->left = NULL;
		newNode->right = NULL;
	}
	else
	{
		/* Insert newNode after parent->right */

		parent->right->parent = newNode;
		newNode->right = parent->right;
		newNode->parent = parent;
		parent->right = newNode;
	}
	return (newNode);
}
