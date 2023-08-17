#include "binary_trees.h"

/**
 * binary_tree_height -function that measures the height of a binary tree
 * @tree: Is a pointer to the root node
 * Return: If tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_side_ht, right_side_ht;

	if (!tree)
		return (0);

	left_side_ht = binary_tree_height(tree->left);
	right_side_ht = binary_tree_height(tree->right);

	if (left_side_ht > right_side_ht)
		return (left_side_ht + 1);
	else
		return (right_side_ht + 1);
}

