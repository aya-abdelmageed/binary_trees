#include "binary_trees.h"

/**
 * check_tree - func to check the nodes
 * @tree: a pointer to the root of the tree
 * Return: num
 */

int check_tree(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + check_tree(tree->left);
		r = 1 + check_tree(tree->right);

		if (l == r && l != 0)
			return (l);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - func to check if a binary tree is perfect
 * @tree: a pointer to the root of the tree
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((check_tree(tree)) ? 1 : 0);
}
