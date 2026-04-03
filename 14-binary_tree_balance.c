#include "binary_trees.h"

/**
 * xbinary_tree_height - measures height of the tree
 * @tree: pointer to root
 *
 * Return: height or -1 if null
 */

int xbinary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = xbinary_tree_height(tree->left) + 1;
	right = xbinary_tree_height(tree->right) + 1;

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

	return (xbinary_tree_height(tree->left) -
			xbinary_tree_height(tree->right));
}
