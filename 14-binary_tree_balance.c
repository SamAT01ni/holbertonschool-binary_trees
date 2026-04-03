#include "binary_trees.h"

/**
 * binary_tree_balance
 * @tree: tree
 *
 * Return: balance factor or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	
	return ((int)binary_tree_height(tree->left) -
			(int)binary_tree_height(tree->right));
}
