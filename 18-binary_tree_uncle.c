#include "binary_trees.h"
/**
 * binary_tree_uncle - look for the uncle
 *
 * @node: root node (is a pointer to the node to find the uncle)
 *
 * Return: pointer to the uncle, NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* if not node, parent, or grandparent then get out*/
	if (!node || node->parent == NULL || !(node->parent->parent))
	{
		return (NULL);
	}
	/*if no node under grandparent left then return right parent parent*/
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	return (node->parent->parent->left);
/*walla*/
}
