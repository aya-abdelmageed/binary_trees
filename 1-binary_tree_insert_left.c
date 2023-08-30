#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to insert the left-child in
 * @value: value to put in the new node
 * Return: pointer to the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);

	if (node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left = node;
	}
	parent->left = node;

	return (node);
}
