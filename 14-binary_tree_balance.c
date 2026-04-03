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
		return (-1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
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

	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
}
