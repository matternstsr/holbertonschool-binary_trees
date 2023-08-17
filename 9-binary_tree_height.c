#include "binary_trees.h"

/**
 * binary_tree_height - height of the tree
 * @tree: root node (pointer to tree)
 * Return: height#
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side = 0;
	size_t right_side = 0;

		if (!tree)/*if tree is empty*/
		return (0);

	left_side = binary_tree_height(tree->left);/*recursively calculates the height of the left.*/
	right_side = binary_tree_height(tree->right);/*recursively calculates the height of the right.*/
	if (left_side > right_side)/*return the greater side + 1*/
		return (left_side + 1);
	else
		return (right_side + 1);
/*walla*/
}
