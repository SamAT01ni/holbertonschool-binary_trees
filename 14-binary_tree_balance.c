#include "binary_trees.h"

/**
 * binary_tree_height - measures height of the tree
 * @tree: pointer to root
 *
 * Return: height or 0 if null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_balance - balances tree
 * @tree: tree
 *
 * Return: balance factor or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left) -
			(int)binary_tree_height(tree->right));
}
