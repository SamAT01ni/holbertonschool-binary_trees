#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree using preorder
 * @tree: pointer to root node
 * @func: pointer to a fn to call for each node
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
