#include "binary_trees.h"

/**
 *  binary_tree_is_full - checks if a tree is full binary
 * @tree : tree
 * Return: 1 if it is a full binary tree
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
