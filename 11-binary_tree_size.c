#include "binary_trees.h"

/**
 * binary_tree_size - func that measures the size of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the size
 * Return: size or NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (NULL);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
}