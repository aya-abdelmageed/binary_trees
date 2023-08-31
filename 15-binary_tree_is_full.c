#include "binary_trees.h"

/**
 * binary_tree_is_full - func to check if a tree is full
 * @tree: a pointer to the root of the tree
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
		return (0);
}
