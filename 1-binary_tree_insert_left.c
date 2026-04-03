#include "binary_trees.h"

/**
 * binary_tree_insert_left - makes a node as the left-child
 * @parent: pointer to parent node
 * @value: what to store in left node
 *
 * Return: pointed to new node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lnode, *tmp;

	if (parent == NULL)
		return (NULL);

	lnode = malloc(sizeof(binary_tree_t));
	if (lnode == NULL)
		return (NULL);

	lnode->n = value;
	lnode->parent = parent;
	lnode->right = NULL;

	tmp = parent->left;
	parent->left = lnode;

	if (tmp != NULL)
	{
		lnode->left = tmp;
		tmp->parent = lnode;
	}
	else
		lnode->left = NULL;

	return (lnode);
}
