#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node
 * @parent: The parent node
 * @value: The value of the new node
 * Return: Always return NULL or a pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->value = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
