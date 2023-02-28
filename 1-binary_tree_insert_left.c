#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a new binary tree to the left
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->parent = parent;

		/* set child nodes to NULL */
		newNode->left = NULL;
		newNode->right = NULL;
	}
	else
	{
		/* Insert newNode after parent->left */

		parent->left->parent = newNode;
		newNode->left = parent->left;
		newNode->parent = parent;
		parent->left = newNode;

		newNode->right = NULL;
	}
	return (newNode);
}
