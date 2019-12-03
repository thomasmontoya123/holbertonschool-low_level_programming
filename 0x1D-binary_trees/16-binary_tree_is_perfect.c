#include "binary_trees.h"

/**
 *  binary_tree_is_perfect - checks if a tree is perfect
 * @tree : tree
 * Return: 1 if it is a perfect binary tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);

	return (0);
}
