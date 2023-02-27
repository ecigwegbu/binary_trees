#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new binary tree to the right
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode, *tmpNode;

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

	/* set parent */
	newNode->parent = parent;

	/* let parent set child */
	if (parent->right == NULL)
	{
		parent->right = newNode;

		/* set child nodes to NULL */
		newNode->right = NULL;
		newNode->right = NULL;
	}
	else
	{
		/* Insert newNode after parent->right */
		tmpNode = parent->right;
		tmpNode->parent = newNode;
		newNode->right = tmpNode;
		parent->right = newNode;
	}
	tmpNode = NULL;
	return (newNode);
}
