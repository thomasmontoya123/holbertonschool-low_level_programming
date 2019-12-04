#include "binary_trees.h"

/**
 * binary_tree_depth - get the depth of a node
 * @tree : node
 * Return:depth of the tree
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temporal = NULL;
	int parent_counter = 0;

	if (!tree)
		return (NULL);

	temporal = tree;

	for (; temporal->parent; temporal = temporal->parent)
		parent_counter++;

	return (parent_counter);
}
