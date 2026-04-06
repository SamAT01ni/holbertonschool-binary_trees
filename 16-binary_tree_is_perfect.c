#include "binary_trees.h"

/**
 * binary_tree_height - stolen from task 9
 * @tree: tree
 *
 * Return: height
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
 * binary_tree_size - size of tree
 * @tree: root node
 *
 * Return: size or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = binary_tree_size(tree->left) + 1;
	count += binary_tree_size(tree->right);

	return (count);
}

/**
 * binary_tree_is_perfect - checks if symmetrical
 * @tree: the tree
 *
 * Return: 1 if perfect, 0 else
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes, expect;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	expect = (1 << (height + 1)) - 1;

	return (nodes == expect);
}
