#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: the root of the tree
 * Return: height of the tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
		lheight = 1 + tree_height(tree->left);
	if (tree->right)
		rheight = 1 + tree_height(tree->right);

	return (lheight > rheight ? lheight : rheight);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to tree node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}
