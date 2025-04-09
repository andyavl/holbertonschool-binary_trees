#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		lheight = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		rheight = 1 + binary_tree_height(tree->right);
	}

	return (lheight > rheight ? lheight : rheight);
}
