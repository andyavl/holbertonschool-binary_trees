#include "binary_trees.h"

/**
 * p_nodes - counts the nodes with at least 1 child
 * @tree: pointer to a tree node
 * Return: amount of nodes with child
 */
size_t p_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (1 + p_nodes(tree->left) + p_nodes(tree->right));
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

	if ((p_nodes(tree->left) - p_nodes(tree->right) == 0) &&
		(is_full(tree) == 1))
		return (1);
	return (0);
}
