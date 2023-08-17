#include "binary_trees.h"

/**
 * binary_tree_is_root- checks if is root
 * @node: Pointer
 * Return: Leaf
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	else
		return (0);
	return (0);
}
