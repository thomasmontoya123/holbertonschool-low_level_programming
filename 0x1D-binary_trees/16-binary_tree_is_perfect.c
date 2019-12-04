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

/**
 * binary_tree_balance - calculates the balance factor
 * @tree : node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;

	return (left - right);
}


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
		if (binary_tree_is_perfect(tree->left) +
		binary_tree_is_perfect(tree->right) % 2 == 0)
			return (1);

	return (0);
}
