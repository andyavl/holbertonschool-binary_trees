#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find uncle
 * Return: address of uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	uncle = node->parent->parent;
	if (uncle->left == NULL || uncle->right == NULL)
		return (NULL);

	if (uncle->left->n == node->parent->n)
		uncle = uncle->right;
	else
		uncle = uncle->left;

	return (uncle);
}
