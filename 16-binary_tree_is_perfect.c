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
 * is_full - checks if a binary tree is full
 * @tree: pointer to a tree node
 * Return: 1 if its full or 0 if not
 */
int is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (is_full(tree->left) && is_full(tree->right));

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to tree node
 * Return: 1 if perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((tree_height(tree->left) - tree_height(tree->right) == 0) &&
		(is_full(tree) == 1))
		return (1);
	return (0);
}
