#include "binary_trees.h"

/**
 * binary_tree_node - create a binary node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t temp;

	/* perform NULL pointer checks */
	if (parent == NULL)
	{
		/* root node */
	}

	temp = malloc(sizeof(binary_tree_t))
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = value;
	temp->parent = parent;
	if (parent != NULL)
	{
		if (parent->left != NULL)
			parent->left = temp;
		else if (parent->right != NULL)
			parent->right = temp;
	}
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
