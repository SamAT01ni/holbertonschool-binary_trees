#include "binary_trees.h"

/**
 * binary_tree_is_full - checks each branch to see if full
 * @tree: the tree
 *
 * Return: 1 if full, 0 else
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree_right));
	return (0);
}
