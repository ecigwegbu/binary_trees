#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	size_t height;

	root = binary_tree_node(NULL, 98);
	root->right = binary_tree_node(root, 402);
	binary_tree_print(root);

	height = binary_tree_height(root);
	printf("Height from %d: %lu\n", root->n, height);
	return (0);
}
