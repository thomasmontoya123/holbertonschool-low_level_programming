#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a tree
 * @tree : root node
 * Return: Heigh of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	else
		left_height = 0;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;
	else
		right_height = 0;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);

}
