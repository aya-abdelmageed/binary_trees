#include "binary_trees.h"

/**
 * binary_tree_height - func that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 or size
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (root)
	{
		if (tree->left)
			count_left = 1 + binary_tree_height(tree->left);
		if (tree->right)
			count_right = 1 + binary_tree_height(tree->right);
	}

	return ((count_left >= count_right) ? count_left : count_right);
}
