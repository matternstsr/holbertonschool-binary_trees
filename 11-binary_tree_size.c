#include "binary_trees.h"

/**
 * binary_tree_size - determines size of a the provided tree
 * @tree: root node? seems different no sure how to explaine
 * Return: tree's size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t leftnode = NULL, rightnode = NULL;

	if (!tree)
		return (0);

	if (tree->left)
		leftnode = tree->left;
	if (tree->right)
		rightnode = tree->right;

	return (binary_tree_size(leftnode) + 1 + binary_tree_size(rightnode));
/*walla*/
/**leftnode*rightnode*/
}
