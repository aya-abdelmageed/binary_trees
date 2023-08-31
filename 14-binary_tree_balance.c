#include "binary_trees.h"

/**
 * binary_tree_height2 - func that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0 or size
 */

size_t binary_tree_height2(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree)
	{
		if (tree->left)
			count_left = 1 + binary_tree_height2(tree->left);
		else
			count_left = 1;
		if (tree->right)
			count_right = 1 + binary_tree_height2(tree->right);
		else
			count_right = 1;
	}

	return ((count_left >= count_right) ? count_left : count_right);
}

/**
 * binary_tree_balance - func to measures the balance factor
 * @tree: a pointer to the root of the tree
 * Return: 0 or num
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t ans = 0, h1 = 0, h2 = 0;

	if (tree)
	{
		h1 = (int)binary_tree_height2(tree->left);
		h2 = (int)binary_tree_height2(tree->right);

		ans = h1 - h2;
	}
	return (ans);
}
