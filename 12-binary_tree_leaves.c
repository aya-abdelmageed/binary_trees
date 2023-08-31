#include "binary_trees.h"

/**
 * binary_tree_leaves - func to count the leaves in the tree
 * @tree: a pointer to the root of the tree
 * Return: NULL or number
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t c = 0, cl = 0, cr = 0;

	if (tree == NULL)
		return (0);

	cl = binary_tree_leaves(tree->left);
	cr = binary_tree_leaves(tree->right);

	c = cl + cr;
	return ((!cl && !cr) ? c + 1 : c + 0);
}
