#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates right child
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return: address of new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;

	if (parent->right == NULL)
		new->right = NULL;
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
