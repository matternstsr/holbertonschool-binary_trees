#include "binary_trees.h"

/**
 * binary_tree_depth-function that measures the how deep a binary tree is
 * @tree: Is the ponter to a node of the binary tree they want the depth of.
 * Return: how deep the binary tree is
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (!tree || !tree->parent)/*there is a tree and parrent*/
		return (0);
	/*func is recur called on each par node until it reaches the root node.*/
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);/*value is added to 1 to account for the current node.*/
}
