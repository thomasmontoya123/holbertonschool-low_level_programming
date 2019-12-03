#include "binary_trees.h"

/**
 *  binary_tree_is_root - cheecks if a node is the root
 *	@node : node to check
 * Return: 1 if node is a leaf 0 if it is not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);
	else
		return (1);
}
