#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as the
 * right-child of another node
 * @parent: The parent node
 * @value: The value of the new node
 * Return: Always return NULL or a pointer to the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

	if (parent == NULL)
	{
	return (NULL);
	}
new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
