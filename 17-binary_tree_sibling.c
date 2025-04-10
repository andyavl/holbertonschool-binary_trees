#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find sibling
 * Return: address of sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sib;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	sib = node->parent;
	if (sib->left == NULL || sib->right == NULL)
		return (NULL);

	if (sib->left->n == node->n)
		sib = sib->right;
	else
		sib = sib->left;

	return (sib);
}
