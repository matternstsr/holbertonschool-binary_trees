#include "binary_trees.h"

/**
 * binary_tree_nodes-counts the nodes that have kiddos
 * @tree: points to the tree
 * Return: # nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)/*if tree doesnt exist*/
		return (0);

	/*if right or left exist add a node to count and go again*/
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	if (tree->left || tree->right) /*if ther is a tree to the left or right*/
		count++;

	return (count);
	/*walla*/
}
