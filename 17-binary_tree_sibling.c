#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node) /*no node exists get out*/
		return (NULL);
	/** Note to self: If the node exists, it checks if the parent of
	 * the node exists and if the left child of the parent is not
	 * equal to the node. If this is true, it returns the left child
	 * of the parent. Otherwise, it checks if the right child of the
	 * parent is not equal to the node. If this is true, it returns the
	 * right child of the parent.
	 */
	if (node->parent && node->parent->left != node)
		return (node->parent->left);
	else if (node->parent && node->parent->right != node)
		return (node->parent->right);
	return (NULL);
}
