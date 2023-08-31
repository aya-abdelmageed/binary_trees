#include "binary_trees.h"

/**
 * binary_tree_nodes - func to count the nodes with 1 child and more
 * @tree: a pointer to the root of the tree
 * Return: 0 or num
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree == NULL)
		return (0);

	c += (tree->right || tree->left) ? 1 : 0;
	c += binary_tree_nodes(tree->left);
	c += binary_tree_nodes(tree->right);

	return (c);
}
