#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates left child
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: address of new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;

	if (parent->left == NULL)
		new->left = NULL;
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
