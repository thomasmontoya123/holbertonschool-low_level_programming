#include "binary_trees.h"

/**
 *  binary_tree_insert_left - insert node at left
 *	@parent : parent node
 *	@value : node value
 * Return: pointer to the new node, null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	else
		new_node->left = NULL;

	new_node->n = value;
	new_node->parent = parent;
	new_node->right  = NULL;
	parent->left = new_node;

	return (new_node);
}
