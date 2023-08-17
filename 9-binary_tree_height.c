#include "binary_trees.h"

/**
 * binary_tree_height -function that measures the height of a binary tree
 * @tree: Is a pointer to the root node
 * Return: If tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		left_side = binary_tree_height(tree->left);
		left_side = left_side + 1;
	}
	if (tree->right)
	{
		right_side = binary_tree_height(tree->right);
		right_side = right_side + 1;
	}

	if (left_side > right_side)
	{
		return (left_side);
	}
	else
	{
		return (right_side);
	}
}
