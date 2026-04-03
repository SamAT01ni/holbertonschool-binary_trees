#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a node
 * @tree: pointer to ndoe to measure depth
 *
 * Return: depth or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	return (binary_tree_depth(node->parent) + 1);
}
