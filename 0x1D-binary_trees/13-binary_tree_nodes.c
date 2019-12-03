#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates the number of nodes with at least one child
 * @tree : node
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
