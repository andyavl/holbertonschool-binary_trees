#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through the tree using pre-order traversal
 * @tree: the root of the tree
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree !=  NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
