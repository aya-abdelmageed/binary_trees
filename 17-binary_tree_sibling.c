#include "binary_trees.h"

/**
 * binary_tree_sibling - func to find the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: NULL or pointer to the node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right == node)
		return (node->parent->left);

	return (node->parent->right);
}
