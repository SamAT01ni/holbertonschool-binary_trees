#include "binary_trees.h"

/**
 * binary_tree_insert_right - makes right node
 * @parent: parent pointer
 * @value: to give to right child
 *
 * Return: pointer to node or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rnode, *tmp;

	if (parent == NULL)
		return (NULL);

	rnode = malloc(sizeof(binary_tree_t));
	if (rnode == NULL)
		return (NULL);

	rnode->n = value;
	rnode->parent = parent;
	rnode->left = NULL;

	tmp = parent->right;
	parent->right = rnode;

	if (tmp != NULL)
	{
		rnode->right = tmp;
		tmp->parent = rnode;
	}
	else
		rnode->right = NULL;

	return (rnode);
}
