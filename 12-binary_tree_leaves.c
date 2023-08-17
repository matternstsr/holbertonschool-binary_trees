#include "binary_trees.h"

/**
 * binary_tree_leaves - to get # of leaves
 * @tree: tree node - root node who knows?
 * Return: how many leaves, 0 if NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)/*there is a tree*/
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))/*both null*/
	{
		return (1);
	}
	/*othere wise if not then recur go through again.*/
	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
