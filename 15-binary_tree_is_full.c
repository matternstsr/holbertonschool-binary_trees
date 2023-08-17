#include "binary_trees.h"

/**
 * binary_tree_is_full-checks if the tree is full of kiddos
 * @tree: points to tree
 * Return: 1 if is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)/*not a tree get out*/
		return (0);

	if (!tree->left && !tree->right) /*if no kiddos return that its full*/
		return (1);

	if ((tree->left) && (tree->right))/* if you have kiddos on both*/
		return (binary_tree_is_full(tree->left)/* recur till complete*/
			&& binary_tree_is_full(tree->right));/* recur till complete*/
	return (0);
/*walla*/
}
