#include "binary_trees.h"

/**
 * binary_tree_node - create a binary node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	/* set the value of the node */
	temp->n = value;

	/* set child nodes to NULL */
	temp->left = NULL;
	temp->right = NULL;

	/* try to set parent if there is space for another  child */
	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = temp;
		else if (parent->right == NULL)
			parent->right = temp;
		else
		{
			printf("Can't add a third child to binary tree node.\n");
			return (NULL);
		}
	}

	/* now you are an adopted  child :), who is your parent? */
	temp->parent = parent;
	return (temp);
}
