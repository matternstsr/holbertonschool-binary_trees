#include "binary_trees.h"
/**
 * binary_tree_size-measures the size of a binary tree
 * @tree: Is the pointer to the binary tree
 * Return: Tje size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_l, size_r, total;

	if (!tree)
		return (0);

	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);
	total = size_l + size_r;
	return (total + 1);
}
/**
 * binary_tree_is_full-checks if a binary tree is full
 * @tree: Is the pointer to binary tree
 * Return: 1 if is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect-function that checks if a binary tree is perfec
 * @tree: Is the pointer to the binary tree
 * Return: If is perfect 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);

	left_h = binary_tree_size(tree->left);
	right_h = binary_tree_size(tree->right);

	if (binary_tree_is_full(tree) && left_h == right_h)
		return (1);
	return (0);
}
