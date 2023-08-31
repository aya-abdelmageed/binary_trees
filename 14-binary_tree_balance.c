#include "binary_trees.h"

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
		h1 = (int)binary_tree_height(tree->left);
		h2 = (int)binary_tree_height(tree->right);

		ans = h1 - h2;
	}
	return (ans);
}
