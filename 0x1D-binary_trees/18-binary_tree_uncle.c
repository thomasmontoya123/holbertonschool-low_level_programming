#include "binary_trees.h"

/**
 * binary_tree_sibling - find a sibling
 * @node : node
 * Return:  pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}


/**
 * binary_tree_uncle - finds the uncle
 * @node : node
 * Return:  pointer to the uncle node
 */


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}